// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.tabmodel;

import android.content.Context;
import android.test.InstrumentationTestCase;
import android.test.suitebuilder.annotation.MediumTest;

import org.chromium.base.ContextUtils;
import org.chromium.base.test.util.AdvancedMockContext;
import org.chromium.base.test.util.Feature;
import org.chromium.chrome.browser.TabState;
import org.chromium.chrome.test.util.ApplicationData;
import org.chromium.chrome.test.util.browser.tabmodel.MockTabModelSelector;

import java.io.File;
import java.io.IOException;

/**
 * Test that migrating the old multi-instance tab state folder structure to the new one works.
 * Previously each instance had its own subdirectory for storing files. Now there is one
 * shared directory.
 */
public class MultiInstanceMigrationTest extends InstrumentationTestCase {

    private Context mAppContext;

    @Override
    protected void setUp() throws Exception {
        super.setUp();
        mAppContext = new AdvancedMockContext(
                getInstrumentation().getTargetContext().getApplicationContext());
        ContextUtils.initApplicationContextForTests(mAppContext);
        ApplicationData.clearAppData(mAppContext);

        // Set the shared pref stating that the legacy file migration has occurred. The
        // multi-instance migration won't happen if the legacy path is taken.
        ContextUtils.getAppSharedPreferences().edit().putBoolean(
                TabPersistentStore.PREF_HAS_RUN_FILE_MIGRATION, true).apply();
    }

    @Override
    protected void tearDown() throws Exception {
        super.tearDown();
        ApplicationData.clearAppData(mAppContext);
    }

    /**
     * Tests that normal migration of multi-instance state files works.
     */
    @MediumTest
    @Feature({"TabPersistentStore"})
    public void testMigrateData() throws IOException {
        // Write old state files.
        File[] stateDirs = createOldStateDirs(TabWindowManager.MAX_SIMULTANEOUS_SELECTORS, true);
        File stateFile0 = new File(stateDirs[0], TabPersistentStore.SAVED_STATE_FILE);
        File stateFile1 = new File(stateDirs[1], TabPersistentStore.SAVED_STATE_FILE);
        File stateFile2 = new File(stateDirs[2], TabPersistentStore.SAVED_STATE_FILE);
        File customTabsStateFile = new File(stateDirs[3], TabPersistentStore.SAVED_STATE_FILE);

        assertTrue("Could not create state file 0", stateFile0.createNewFile());
        assertTrue("Could not create state file 1", stateFile1.createNewFile());
        assertTrue("Could not create state file 2", stateFile2.createNewFile());
        assertTrue("Could not create custom tabs state file", customTabsStateFile.createNewFile());

        // Create a couple of tabs for each tab state subdirectory.
        File tab0 = new File(stateDirs[0], TabState.SAVED_TAB_STATE_FILE_PREFIX + "0");
        File tab1 = new File(stateDirs[0], TabState.SAVED_TAB_STATE_FILE_PREFIX + "1");
        File tab2 = new File(stateDirs[1], TabState.SAVED_TAB_STATE_FILE_PREFIX + "2");
        File tab3 = new File(stateDirs[1], TabState.SAVED_TAB_STATE_FILE_PREFIX_INCOGNITO + "3");
        File tab4 = new File(stateDirs[2], TabState.SAVED_TAB_STATE_FILE_PREFIX + "4");
        File tab5 = new File(stateDirs[2], TabState.SAVED_TAB_STATE_FILE_PREFIX_INCOGNITO + "5");
        File tab6 = new File(stateDirs[3], TabState.SAVED_TAB_STATE_FILE_PREFIX + "6");

        assertTrue("Could not create tab 0 file", tab0.createNewFile());
        assertTrue("Could not create tab 1 file", tab1.createNewFile());
        assertTrue("Could not create tab 2 file", tab2.createNewFile());
        assertTrue("Could not create tab 3 file", tab3.createNewFile());
        assertTrue("Could not create tab 4 file", tab4.createNewFile());
        assertTrue("Could not create tab 5 file", tab5.createNewFile());
        assertTrue("Could not create tab 6 file", tab6.createNewFile());

        // Build the TabPersistentStore which will try to move the files.
        MockTabModelSelector selector = new MockTabModelSelector(0, 0, null);
        TabPersistentStore store =
                new TabPersistentStore(selector, 0, mAppContext, null, null, false);
        store.waitForMigrationToFinish();

        // Make sure we don't hit the migration path again.
        assertTrue(ContextUtils.getAppSharedPreferences().getBoolean(
                TabPersistentStore.PREF_HAS_RUN_MULTI_INSTANCE_FILE_MIGRATION, false));

        // Check that all metadata files moved.
        File newStateFile0 = new File(stateDirs[0], TabPersistentStore.getStateFileName(0));
        File newStateFile1 = new File(stateDirs[0], TabPersistentStore.getStateFileName(1));
        File newStateFile2 = new File(stateDirs[0], TabPersistentStore.getStateFileName(2));
        File newCustomTabsStateFile = new File(stateDirs[0], TabPersistentStore.getStateFileName(
                TabModelSelectorImpl.CUSTOM_TABS_SELECTOR_INDEX));
        assertTrue("Could not find new state file 0", newStateFile0.exists());
        assertTrue("Could not find new state file 1", newStateFile1.exists());
        assertTrue("Could not find new state file 2", newStateFile2.exists());
        assertTrue("Could not find new custom tabs state file", newCustomTabsStateFile.exists());
        assertFalse("Could still find old state file 0", stateFile0.exists());
        assertFalse("Could still find old state file 1", stateFile1.exists());
        assertFalse("Could still find old state file 2", stateFile2.exists());
        assertFalse("Could still find old custom tabs state file", customTabsStateFile.exists());

        // Check that tab 0 and 1 did not move.
        assertTrue("Could not find tab 0 file", tab0.exists());
        assertTrue("Could not find tab 1 file", tab1.exists());

        // Check that tabs 2-5 did move.
        File newTab2 = new File(stateDirs[0], TabState.SAVED_TAB_STATE_FILE_PREFIX + "2");
        File newTab3 = new File(stateDirs[0], TabState.SAVED_TAB_STATE_FILE_PREFIX_INCOGNITO + "3");
        File newTab4 = new File(stateDirs[0], TabState.SAVED_TAB_STATE_FILE_PREFIX + "4");
        File newTab5 = new File(stateDirs[0], TabState.SAVED_TAB_STATE_FILE_PREFIX_INCOGNITO + "5");
        assertTrue("Could not find new tab 2 file", newTab2.exists());
        assertTrue("Could not find new tab 3 file", newTab3.exists());
        assertTrue("Could not find new tab 4 file", newTab4.exists());
        assertTrue("Could not find new tab 5 file", newTab5.exists());
        assertFalse("Could still find old tab 2 file", tab2.exists());
        assertFalse("Could still find old tab 3 file", tab3.exists());
        assertFalse("Could still find old tab 4 file", tab4.exists());
        assertFalse("Could still find old tab 5 file", tab5.exists());

        // Check that the custom tab (tab 6) was deleted.
        File newTab6 = new File(stateDirs[0], TabState.SAVED_TAB_STATE_FILE_PREFIX + "6");
        assertFalse("Could still find old tab 6 file", tab6.exists());
        assertFalse("Found new tab 6 file. It should have been deleted.", newTab6.exists());

        // Check that old directories were deleted.
        assertFalse("Could still find old state dir 1", stateDirs[1].exists());
        assertFalse("Could still find old state dir 2", stateDirs[2].exists());
        assertFalse("Could still find old custom tabs state dir", stateDirs[3].exists());
    }

    /**
     * Tests that the state file migration skips unrelated files. Also tests that migration works
     * if the number of tab state subdirectories to migrate is less than
     * {@code TabWindowManager.MAX_SIMULTANEOUS_SELECTORS}
     */
    @MediumTest
    @Feature({"TabPersistentStore"})
    public void testMigrationLeavesOtherFilesAlone() throws IOException {
        // Write old state files and an extra file.
        File[] stateDirs = createOldStateDirs(2, false);
        File stateFile0 = new File(stateDirs[0], TabPersistentStore.SAVED_STATE_FILE);
        File stateFile1 = new File(stateDirs[1], TabPersistentStore.SAVED_STATE_FILE);
        File tab0 = new File(stateDirs[0], TabState.SAVED_TAB_STATE_FILE_PREFIX + "0");
        File tab1 = new File(stateDirs[1], TabState.SAVED_TAB_STATE_FILE_PREFIX + "1");
        File otherFile = new File(stateDirs[1], "other.file");

        assertTrue("Could not create state file 0", stateFile0.createNewFile());
        assertTrue("Could not create state file 1", stateFile1.createNewFile());
        assertTrue("Could not create tab 0 file", tab0.createNewFile());
        assertTrue("Could not create tab 1 file", tab1.createNewFile());
        assertTrue("Could not create other file", otherFile.createNewFile());

        // Build the TabPersistentStore which will try to move the files.
        MockTabModelSelector selector = new MockTabModelSelector(0, 0, null);
        TabPersistentStore store =
                new TabPersistentStore(selector, 0, mAppContext, null, null, false);
        store.waitForMigrationToFinish();

        // Check that the other file wasn't moved.
        File newOtherFile = new File(stateDirs[0], "other.file");
        assertFalse("Could find new other file", newOtherFile.exists());
        assertTrue("Could not find original other file", otherFile.exists());

        // Check that the metadata files were renamed and/or moved.
        File newStateFile0 = new File(stateDirs[0], TabPersistentStore.getStateFileName(0));
        File newStateFile1 = new File(stateDirs[0], TabPersistentStore.getStateFileName(1));
        assertTrue("Could not find new state file 0", newStateFile0.exists());
        assertTrue("Could not find new state file 1", newStateFile1.exists());
        assertFalse("Could still find old state file 0", stateFile0.exists());
        assertFalse("Could still find old state file 1", stateFile1.exists());

        // Check that tab 0 did not move.
        assertTrue("Could not find tab 0 file", tab0.exists());

        // Check that tab 1 did move.
        File newTab1 = new File(stateDirs[0], TabState.SAVED_TAB_STATE_FILE_PREFIX + "1");
        assertTrue("Could not find tab 1 file", newTab1.exists());
        assertFalse("Could still find old tab 1 file", tab1.exists());
    }

    /**
     * Tests that migration of multi-instance state files works when tab files with the same name
     * exists in both directories.
     */
    @MediumTest
    @Feature({"TabPersistentStore"})
    public void testMigrateDataDuplicateTabFiles() throws IOException {
        // Write old state files.
        File[] stateDirs = createOldStateDirs(2, false);
        File stateFile0 = new File(stateDirs[0], TabPersistentStore.SAVED_STATE_FILE);
        File stateFile1 = new File(stateDirs[1], TabPersistentStore.SAVED_STATE_FILE);

        assertTrue("Could not create state file 0", stateFile0.createNewFile());
        assertTrue("Could not create state file 1", stateFile1.createNewFile());

        // Create duplicate "tab0" files and ensure tab0Dir1 has been modified more recently so that
        // it overwrites tab0Dir0.
        File tab0Dir0 = new File(stateDirs[0], TabState.SAVED_TAB_STATE_FILE_PREFIX + "0");
        File tab0Dir1 = new File(stateDirs[1], TabState.SAVED_TAB_STATE_FILE_PREFIX + "0");
        assertTrue("Could not create tab 0-0 file", tab0Dir0.createNewFile());
        assertTrue("Could not create tab 0-1 file", tab0Dir1.createNewFile());
        long expectedTab0LastModifiedTime = tab0Dir0.lastModified() + 1000;
        if (!tab0Dir1.setLastModified(expectedTab0LastModifiedTime)) {
            fail("Failed to set last modified time.");
        }

        // Create duplicate "tab1" files and ensure tab1Dir0 has been modified more recently so that
        // it does not get overwritten.
        File tab1Dir0 = new File(stateDirs[0], TabState.SAVED_TAB_STATE_FILE_PREFIX + "1");
        File tab1Dir1 = new File(stateDirs[1], TabState.SAVED_TAB_STATE_FILE_PREFIX + "1");
        assertTrue("Could not create tab 1-0 file", tab1Dir0.createNewFile());
        assertTrue("Could not create tab 1-1 file", tab1Dir1.createNewFile());
        long expectedTab1LastModifiedTime = tab1Dir1.lastModified() + 1000;
        if (!tab1Dir0.setLastModified(expectedTab1LastModifiedTime)) {
            fail("Failed to set last modified time.");
        }

        // Build the TabPersistentStore which will try to move the files.
        MockTabModelSelector selector = new MockTabModelSelector(0, 0, null);
        TabPersistentStore store =
                new TabPersistentStore(selector, 0, mAppContext, null, null, false);
        store.waitForMigrationToFinish();

        // Check that "tab0" still exists and has the expected last modified time.
        assertTrue("Could not find tab 0 file", tab0Dir0.exists());
        assertFalse("Could still find old tab 0 file", tab0Dir1.exists());
        assertEquals("tab 0 file not overwritten properly",
                expectedTab0LastModifiedTime,
                tab0Dir0.lastModified());

        // Check that "tab1" still exists and has the expected last modified time.
        assertTrue("Could not find tab 1 file", tab1Dir0.exists());
        assertFalse("Could still find old tab 1 file", tab1Dir1.exists());
        assertEquals("tab 1 file unexpectedly overwritten",
                expectedTab1LastModifiedTime,
                tab1Dir0.lastModified());

        // Check that old directory was deleted.
        assertFalse("Could still find old state dir 1", stateDirs[1].exists());
    }

    /**
     * Creates tab state directories using the old pre-multi-instance migration file paths where
     * each tab model had its own state directory.
     *
     * @param numRegularDirsToCreate The number of regular tab state directories to create.
     * @param createCustomTabsDir Whether a custom tabs directory should be created.
     * @return An array containing the tab state directories. If createCustomTabsDir is true,
     *         a directory for custom tabs will be added to the end of the array.
     */
    private File[] createOldStateDirs(int numRegularDirsToCreate, boolean createCustomTabsDir) {
        int numDirsToCreate =
                createCustomTabsDir ? numRegularDirsToCreate + 1 : numRegularDirsToCreate;
        File[] stateDirs = new File[numDirsToCreate];
        for (int i = 0; i < numRegularDirsToCreate; i++) {
            stateDirs[i] = new File(TabPersistentStore.getOrCreateBaseStateDirectory(),
                    Integer.toString(i));
            if (!stateDirs[i].exists()) {
                assertTrue("Could not create state dir " + i, stateDirs[i].mkdir());
            }
        }

        if (createCustomTabsDir) {
            stateDirs[numDirsToCreate - 1] = new File(
                    TabPersistentStore.getOrCreateBaseStateDirectory(),
                    Integer.toString(TabModelSelectorImpl.CUSTOM_TABS_SELECTOR_INDEX));
            if (!stateDirs[numDirsToCreate - 1].exists()) {
                assertTrue("Could not create custom tab state dir",
                        stateDirs[numDirsToCreate - 1].mkdir());
            }
        }

        return stateDirs;
    }
}
