// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Accessibility_h
#define protocol_Accessibility_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "core/inspector/protocol/DOM.h"

namespace blink {
namespace protocol {
namespace Accessibility {

// ------------- Forward and enum declarations.
// Unique accessibility node identifier.
using AXNodeId = WTF::String;
// Enum of possible property types.
using AXValueType = WTF::String;
// Enum of possible property sources.
using AXValueSourceType = WTF::String;
// Enum of possible native property sources (as a subtype of a particular AXValueSourceType).
using AXValueNativeSourceType = WTF::String;
// A single source for a computed AX property.
class AXValueSource;
// 
class AXRelatedNode;
// 
class AXProperty;
// A single computed AX property.
class AXValue;
// States which apply to every AX node.
using AXGlobalStates = WTF::String;
// Attributes which apply to nodes in live regions.
using AXLiveRegionAttributes = WTF::String;
// Attributes which apply to widgets.
using AXWidgetAttributes = WTF::String;
// States which apply to widgets.
using AXWidgetStates = WTF::String;
// Relationships between elements other than parent/child/sibling.
using AXRelationshipAttributes = WTF::String;
// A node in the accessibility tree.
class AXNode;

namespace AXValueTypeEnum {
CORE_EXPORT extern const char* Boolean;
CORE_EXPORT extern const char* Tristate;
CORE_EXPORT extern const char* BooleanOrUndefined;
CORE_EXPORT extern const char* Idref;
CORE_EXPORT extern const char* IdrefList;
CORE_EXPORT extern const char* Integer;
CORE_EXPORT extern const char* Node;
CORE_EXPORT extern const char* NodeList;
CORE_EXPORT extern const char* Number;
CORE_EXPORT extern const char* String;
CORE_EXPORT extern const char* ComputedString;
CORE_EXPORT extern const char* Token;
CORE_EXPORT extern const char* TokenList;
CORE_EXPORT extern const char* DomRelation;
CORE_EXPORT extern const char* Role;
CORE_EXPORT extern const char* InternalRole;
CORE_EXPORT extern const char* ValueUndefined;
} // namespace AXValueTypeEnum

namespace AXValueSourceTypeEnum {
CORE_EXPORT extern const char* Attribute;
CORE_EXPORT extern const char* Implicit;
CORE_EXPORT extern const char* Style;
CORE_EXPORT extern const char* Contents;
CORE_EXPORT extern const char* Placeholder;
CORE_EXPORT extern const char* RelatedElement;
} // namespace AXValueSourceTypeEnum

namespace AXValueNativeSourceTypeEnum {
CORE_EXPORT extern const char* Figcaption;
CORE_EXPORT extern const char* Label;
CORE_EXPORT extern const char* Labelfor;
CORE_EXPORT extern const char* Labelwrapped;
CORE_EXPORT extern const char* Legend;
CORE_EXPORT extern const char* Tablecaption;
CORE_EXPORT extern const char* Title;
CORE_EXPORT extern const char* Other;
} // namespace AXValueNativeSourceTypeEnum

namespace AXGlobalStatesEnum {
CORE_EXPORT extern const char* Disabled;
CORE_EXPORT extern const char* Hidden;
CORE_EXPORT extern const char* HiddenRoot;
CORE_EXPORT extern const char* Invalid;
} // namespace AXGlobalStatesEnum

namespace AXLiveRegionAttributesEnum {
CORE_EXPORT extern const char* Live;
CORE_EXPORT extern const char* Atomic;
CORE_EXPORT extern const char* Relevant;
CORE_EXPORT extern const char* Busy;
CORE_EXPORT extern const char* Root;
} // namespace AXLiveRegionAttributesEnum

namespace AXWidgetAttributesEnum {
CORE_EXPORT extern const char* Autocomplete;
CORE_EXPORT extern const char* Haspopup;
CORE_EXPORT extern const char* Level;
CORE_EXPORT extern const char* Multiselectable;
CORE_EXPORT extern const char* Orientation;
CORE_EXPORT extern const char* Multiline;
CORE_EXPORT extern const char* Readonly;
CORE_EXPORT extern const char* Required;
CORE_EXPORT extern const char* Valuemin;
CORE_EXPORT extern const char* Valuemax;
CORE_EXPORT extern const char* Valuetext;
} // namespace AXWidgetAttributesEnum

namespace AXWidgetStatesEnum {
CORE_EXPORT extern const char* Checked;
CORE_EXPORT extern const char* Expanded;
CORE_EXPORT extern const char* Pressed;
CORE_EXPORT extern const char* Selected;
} // namespace AXWidgetStatesEnum

namespace AXRelationshipAttributesEnum {
CORE_EXPORT extern const char* Activedescendant;
CORE_EXPORT extern const char* Flowto;
CORE_EXPORT extern const char* Controls;
CORE_EXPORT extern const char* Describedby;
CORE_EXPORT extern const char* Labelledby;
CORE_EXPORT extern const char* Owns;
} // namespace AXRelationshipAttributesEnum

// ------------- Type and builder declarations.

// A single source for a computed AX property.
class CORE_EXPORT AXValueSource {
    PROTOCOL_DISALLOW_COPY(AXValueSource);
public:
    static std::unique_ptr<AXValueSource> parse(protocol::Value* value, ErrorSupport* errors);

    ~AXValueSource() { }

    WTF::String getType() { return m_type; }
    void setType(const WTF::String& value) { m_type = value; }

    bool hasValue() { return m_value.isJust(); }
    protocol::Accessibility::AXValue* getValue(protocol::Accessibility::AXValue* defaultValue) { return m_value.isJust() ? m_value.fromJust() : defaultValue; }
    void setValue(std::unique_ptr<protocol::Accessibility::AXValue> value) { m_value = std::move(value); }

    bool hasAttribute() { return m_attribute.isJust(); }
    WTF::String getAttribute(const WTF::String& defaultValue) { return m_attribute.isJust() ? m_attribute.fromJust() : defaultValue; }
    void setAttribute(const WTF::String& value) { m_attribute = value; }

    bool hasAttributeValue() { return m_attributeValue.isJust(); }
    protocol::Accessibility::AXValue* getAttributeValue(protocol::Accessibility::AXValue* defaultValue) { return m_attributeValue.isJust() ? m_attributeValue.fromJust() : defaultValue; }
    void setAttributeValue(std::unique_ptr<protocol::Accessibility::AXValue> value) { m_attributeValue = std::move(value); }

    bool hasSuperseded() { return m_superseded.isJust(); }
    bool getSuperseded(bool defaultValue) { return m_superseded.isJust() ? m_superseded.fromJust() : defaultValue; }
    void setSuperseded(bool value) { m_superseded = value; }

    bool hasNativeSource() { return m_nativeSource.isJust(); }
    WTF::String getNativeSource(const WTF::String& defaultValue) { return m_nativeSource.isJust() ? m_nativeSource.fromJust() : defaultValue; }
    void setNativeSource(const WTF::String& value) { m_nativeSource = value; }

    bool hasNativeSourceValue() { return m_nativeSourceValue.isJust(); }
    protocol::Accessibility::AXValue* getNativeSourceValue(protocol::Accessibility::AXValue* defaultValue) { return m_nativeSourceValue.isJust() ? m_nativeSourceValue.fromJust() : defaultValue; }
    void setNativeSourceValue(std::unique_ptr<protocol::Accessibility::AXValue> value) { m_nativeSourceValue = std::move(value); }

    bool hasInvalid() { return m_invalid.isJust(); }
    bool getInvalid(bool defaultValue) { return m_invalid.isJust() ? m_invalid.fromJust() : defaultValue; }
    void setInvalid(bool value) { m_invalid = value; }

    bool hasInvalidReason() { return m_invalidReason.isJust(); }
    WTF::String getInvalidReason(const WTF::String& defaultValue) { return m_invalidReason.isJust() ? m_invalidReason.fromJust() : defaultValue; }
    void setInvalidReason(const WTF::String& value) { m_invalidReason = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<AXValueSource> clone() const;

    template<int STATE>
    class AXValueSourceBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          TypeSet = 1 << 1,
            AllFieldsSet = (TypeSet | 0)};


        AXValueSourceBuilder<STATE | TypeSet>& setType(const WTF::String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->setType(value);
            return castState<TypeSet>();
        }

        AXValueSourceBuilder<STATE>& setValue(std::unique_ptr<protocol::Accessibility::AXValue> value)
        {
            m_result->setValue(std::move(value));
            return *this;
        }

        AXValueSourceBuilder<STATE>& setAttribute(const WTF::String& value)
        {
            m_result->setAttribute(value);
            return *this;
        }

        AXValueSourceBuilder<STATE>& setAttributeValue(std::unique_ptr<protocol::Accessibility::AXValue> value)
        {
            m_result->setAttributeValue(std::move(value));
            return *this;
        }

        AXValueSourceBuilder<STATE>& setSuperseded(bool value)
        {
            m_result->setSuperseded(value);
            return *this;
        }

        AXValueSourceBuilder<STATE>& setNativeSource(const WTF::String& value)
        {
            m_result->setNativeSource(value);
            return *this;
        }

        AXValueSourceBuilder<STATE>& setNativeSourceValue(std::unique_ptr<protocol::Accessibility::AXValue> value)
        {
            m_result->setNativeSourceValue(std::move(value));
            return *this;
        }

        AXValueSourceBuilder<STATE>& setInvalid(bool value)
        {
            m_result->setInvalid(value);
            return *this;
        }

        AXValueSourceBuilder<STATE>& setInvalidReason(const WTF::String& value)
        {
            m_result->setInvalidReason(value);
            return *this;
        }

        std::unique_ptr<AXValueSource> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class AXValueSource;
        AXValueSourceBuilder() : m_result(new AXValueSource()) { }

        template<int STEP> AXValueSourceBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<AXValueSourceBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Accessibility::AXValueSource> m_result;
    };

    static AXValueSourceBuilder<0> create()
    {
        return AXValueSourceBuilder<0>();
    }

private:
    AXValueSource()
    {
    }

    WTF::String m_type;
    Maybe<protocol::Accessibility::AXValue> m_value;
    Maybe<WTF::String> m_attribute;
    Maybe<protocol::Accessibility::AXValue> m_attributeValue;
    Maybe<bool> m_superseded;
    Maybe<WTF::String> m_nativeSource;
    Maybe<protocol::Accessibility::AXValue> m_nativeSourceValue;
    Maybe<bool> m_invalid;
    Maybe<WTF::String> m_invalidReason;
};


// 
class CORE_EXPORT AXRelatedNode {
    PROTOCOL_DISALLOW_COPY(AXRelatedNode);
public:
    static std::unique_ptr<AXRelatedNode> parse(protocol::Value* value, ErrorSupport* errors);

    ~AXRelatedNode() { }

    int getBackendNodeId() { return m_backendNodeId; }
    void setBackendNodeId(int value) { m_backendNodeId = value; }

    bool hasIdref() { return m_idref.isJust(); }
    WTF::String getIdref(const WTF::String& defaultValue) { return m_idref.isJust() ? m_idref.fromJust() : defaultValue; }
    void setIdref(const WTF::String& value) { m_idref = value; }

    bool hasText() { return m_text.isJust(); }
    WTF::String getText(const WTF::String& defaultValue) { return m_text.isJust() ? m_text.fromJust() : defaultValue; }
    void setText(const WTF::String& value) { m_text = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<AXRelatedNode> clone() const;

    template<int STATE>
    class AXRelatedNodeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          BackendNodeIdSet = 1 << 1,
            AllFieldsSet = (BackendNodeIdSet | 0)};


        AXRelatedNodeBuilder<STATE | BackendNodeIdSet>& setBackendNodeId(int value)
        {
            static_assert(!(STATE & BackendNodeIdSet), "property backendNodeId should not be set yet");
            m_result->setBackendNodeId(value);
            return castState<BackendNodeIdSet>();
        }

        AXRelatedNodeBuilder<STATE>& setIdref(const WTF::String& value)
        {
            m_result->setIdref(value);
            return *this;
        }

        AXRelatedNodeBuilder<STATE>& setText(const WTF::String& value)
        {
            m_result->setText(value);
            return *this;
        }

        std::unique_ptr<AXRelatedNode> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class AXRelatedNode;
        AXRelatedNodeBuilder() : m_result(new AXRelatedNode()) { }

        template<int STEP> AXRelatedNodeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<AXRelatedNodeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Accessibility::AXRelatedNode> m_result;
    };

    static AXRelatedNodeBuilder<0> create()
    {
        return AXRelatedNodeBuilder<0>();
    }

private:
    AXRelatedNode()
    {
          m_backendNodeId = 0;
    }

    int m_backendNodeId;
    Maybe<WTF::String> m_idref;
    Maybe<WTF::String> m_text;
};


// 
class CORE_EXPORT AXProperty {
    PROTOCOL_DISALLOW_COPY(AXProperty);
public:
    static std::unique_ptr<AXProperty> parse(protocol::Value* value, ErrorSupport* errors);

    ~AXProperty() { }

    WTF::String getName() { return m_name; }
    void setName(const WTF::String& value) { m_name = value; }

    protocol::Accessibility::AXValue* getValue() { return m_value.get(); }
    void setValue(std::unique_ptr<protocol::Accessibility::AXValue> value) { m_value = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<AXProperty> clone() const;

    template<int STATE>
    class AXPropertyBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          NameSet = 1 << 1,
          ValueSet = 1 << 2,
            AllFieldsSet = (NameSet | ValueSet | 0)};


        AXPropertyBuilder<STATE | NameSet>& setName(const WTF::String& value)
        {
            static_assert(!(STATE & NameSet), "property name should not be set yet");
            m_result->setName(value);
            return castState<NameSet>();
        }

        AXPropertyBuilder<STATE | ValueSet>& setValue(std::unique_ptr<protocol::Accessibility::AXValue> value)
        {
            static_assert(!(STATE & ValueSet), "property value should not be set yet");
            m_result->setValue(std::move(value));
            return castState<ValueSet>();
        }

        std::unique_ptr<AXProperty> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class AXProperty;
        AXPropertyBuilder() : m_result(new AXProperty()) { }

        template<int STEP> AXPropertyBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<AXPropertyBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Accessibility::AXProperty> m_result;
    };

    static AXPropertyBuilder<0> create()
    {
        return AXPropertyBuilder<0>();
    }

private:
    AXProperty()
    {
    }

    WTF::String m_name;
    std::unique_ptr<protocol::Accessibility::AXValue> m_value;
};


// A single computed AX property.
class CORE_EXPORT AXValue {
    PROTOCOL_DISALLOW_COPY(AXValue);
public:
    static std::unique_ptr<AXValue> parse(protocol::Value* value, ErrorSupport* errors);

    ~AXValue() { }

    WTF::String getType() { return m_type; }
    void setType(const WTF::String& value) { m_type = value; }

    bool hasValue() { return m_value.isJust(); }
    protocol::Value* getValue(protocol::Value* defaultValue) { return m_value.isJust() ? m_value.fromJust() : defaultValue; }
    void setValue(std::unique_ptr<protocol::Value> value) { m_value = std::move(value); }

    bool hasRelatedNodes() { return m_relatedNodes.isJust(); }
    protocol::Array<protocol::Accessibility::AXRelatedNode>* getRelatedNodes(protocol::Array<protocol::Accessibility::AXRelatedNode>* defaultValue) { return m_relatedNodes.isJust() ? m_relatedNodes.fromJust() : defaultValue; }
    void setRelatedNodes(std::unique_ptr<protocol::Array<protocol::Accessibility::AXRelatedNode>> value) { m_relatedNodes = std::move(value); }

    bool hasSources() { return m_sources.isJust(); }
    protocol::Array<protocol::Accessibility::AXValueSource>* getSources(protocol::Array<protocol::Accessibility::AXValueSource>* defaultValue) { return m_sources.isJust() ? m_sources.fromJust() : defaultValue; }
    void setSources(std::unique_ptr<protocol::Array<protocol::Accessibility::AXValueSource>> value) { m_sources = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<AXValue> clone() const;

    template<int STATE>
    class AXValueBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          TypeSet = 1 << 1,
            AllFieldsSet = (TypeSet | 0)};


        AXValueBuilder<STATE | TypeSet>& setType(const WTF::String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->setType(value);
            return castState<TypeSet>();
        }

        AXValueBuilder<STATE>& setValue(std::unique_ptr<protocol::Value> value)
        {
            m_result->setValue(std::move(value));
            return *this;
        }

        AXValueBuilder<STATE>& setRelatedNodes(std::unique_ptr<protocol::Array<protocol::Accessibility::AXRelatedNode>> value)
        {
            m_result->setRelatedNodes(std::move(value));
            return *this;
        }

        AXValueBuilder<STATE>& setSources(std::unique_ptr<protocol::Array<protocol::Accessibility::AXValueSource>> value)
        {
            m_result->setSources(std::move(value));
            return *this;
        }

        std::unique_ptr<AXValue> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class AXValue;
        AXValueBuilder() : m_result(new AXValue()) { }

        template<int STEP> AXValueBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<AXValueBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Accessibility::AXValue> m_result;
    };

    static AXValueBuilder<0> create()
    {
        return AXValueBuilder<0>();
    }

private:
    AXValue()
    {
    }

    WTF::String m_type;
    Maybe<protocol::Value> m_value;
    Maybe<protocol::Array<protocol::Accessibility::AXRelatedNode>> m_relatedNodes;
    Maybe<protocol::Array<protocol::Accessibility::AXValueSource>> m_sources;
};


// A node in the accessibility tree.
class CORE_EXPORT AXNode {
    PROTOCOL_DISALLOW_COPY(AXNode);
public:
    static std::unique_ptr<AXNode> parse(protocol::Value* value, ErrorSupport* errors);

    ~AXNode() { }

    WTF::String getNodeId() { return m_nodeId; }
    void setNodeId(const WTF::String& value) { m_nodeId = value; }

    bool getIgnored() { return m_ignored; }
    void setIgnored(bool value) { m_ignored = value; }

    bool hasIgnoredReasons() { return m_ignoredReasons.isJust(); }
    protocol::Array<protocol::Accessibility::AXProperty>* getIgnoredReasons(protocol::Array<protocol::Accessibility::AXProperty>* defaultValue) { return m_ignoredReasons.isJust() ? m_ignoredReasons.fromJust() : defaultValue; }
    void setIgnoredReasons(std::unique_ptr<protocol::Array<protocol::Accessibility::AXProperty>> value) { m_ignoredReasons = std::move(value); }

    bool hasRole() { return m_role.isJust(); }
    protocol::Accessibility::AXValue* getRole(protocol::Accessibility::AXValue* defaultValue) { return m_role.isJust() ? m_role.fromJust() : defaultValue; }
    void setRole(std::unique_ptr<protocol::Accessibility::AXValue> value) { m_role = std::move(value); }

    bool hasName() { return m_name.isJust(); }
    protocol::Accessibility::AXValue* getName(protocol::Accessibility::AXValue* defaultValue) { return m_name.isJust() ? m_name.fromJust() : defaultValue; }
    void setName(std::unique_ptr<protocol::Accessibility::AXValue> value) { m_name = std::move(value); }

    bool hasDescription() { return m_description.isJust(); }
    protocol::Accessibility::AXValue* getDescription(protocol::Accessibility::AXValue* defaultValue) { return m_description.isJust() ? m_description.fromJust() : defaultValue; }
    void setDescription(std::unique_ptr<protocol::Accessibility::AXValue> value) { m_description = std::move(value); }

    bool hasValue() { return m_value.isJust(); }
    protocol::Accessibility::AXValue* getValue(protocol::Accessibility::AXValue* defaultValue) { return m_value.isJust() ? m_value.fromJust() : defaultValue; }
    void setValue(std::unique_ptr<protocol::Accessibility::AXValue> value) { m_value = std::move(value); }

    bool hasProperties() { return m_properties.isJust(); }
    protocol::Array<protocol::Accessibility::AXProperty>* getProperties(protocol::Array<protocol::Accessibility::AXProperty>* defaultValue) { return m_properties.isJust() ? m_properties.fromJust() : defaultValue; }
    void setProperties(std::unique_ptr<protocol::Array<protocol::Accessibility::AXProperty>> value) { m_properties = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<AXNode> clone() const;

    template<int STATE>
    class AXNodeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          NodeIdSet = 1 << 1,
          IgnoredSet = 1 << 2,
            AllFieldsSet = (NodeIdSet | IgnoredSet | 0)};


        AXNodeBuilder<STATE | NodeIdSet>& setNodeId(const WTF::String& value)
        {
            static_assert(!(STATE & NodeIdSet), "property nodeId should not be set yet");
            m_result->setNodeId(value);
            return castState<NodeIdSet>();
        }

        AXNodeBuilder<STATE | IgnoredSet>& setIgnored(bool value)
        {
            static_assert(!(STATE & IgnoredSet), "property ignored should not be set yet");
            m_result->setIgnored(value);
            return castState<IgnoredSet>();
        }

        AXNodeBuilder<STATE>& setIgnoredReasons(std::unique_ptr<protocol::Array<protocol::Accessibility::AXProperty>> value)
        {
            m_result->setIgnoredReasons(std::move(value));
            return *this;
        }

        AXNodeBuilder<STATE>& setRole(std::unique_ptr<protocol::Accessibility::AXValue> value)
        {
            m_result->setRole(std::move(value));
            return *this;
        }

        AXNodeBuilder<STATE>& setName(std::unique_ptr<protocol::Accessibility::AXValue> value)
        {
            m_result->setName(std::move(value));
            return *this;
        }

        AXNodeBuilder<STATE>& setDescription(std::unique_ptr<protocol::Accessibility::AXValue> value)
        {
            m_result->setDescription(std::move(value));
            return *this;
        }

        AXNodeBuilder<STATE>& setValue(std::unique_ptr<protocol::Accessibility::AXValue> value)
        {
            m_result->setValue(std::move(value));
            return *this;
        }

        AXNodeBuilder<STATE>& setProperties(std::unique_ptr<protocol::Array<protocol::Accessibility::AXProperty>> value)
        {
            m_result->setProperties(std::move(value));
            return *this;
        }

        std::unique_ptr<AXNode> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class AXNode;
        AXNodeBuilder() : m_result(new AXNode()) { }

        template<int STEP> AXNodeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<AXNodeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Accessibility::AXNode> m_result;
    };

    static AXNodeBuilder<0> create()
    {
        return AXNodeBuilder<0>();
    }

private:
    AXNode()
    {
          m_ignored = false;
    }

    WTF::String m_nodeId;
    bool m_ignored;
    Maybe<protocol::Array<protocol::Accessibility::AXProperty>> m_ignoredReasons;
    Maybe<protocol::Accessibility::AXValue> m_role;
    Maybe<protocol::Accessibility::AXValue> m_name;
    Maybe<protocol::Accessibility::AXValue> m_description;
    Maybe<protocol::Accessibility::AXValue> m_value;
    Maybe<protocol::Array<protocol::Accessibility::AXProperty>> m_properties;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual void getAXNode(ErrorString*, int in_nodeId, Maybe<protocol::Accessibility::AXNode>* out_accessibilityNode) = 0;

    virtual void disable(ErrorString*) { }

protected:
    virtual ~Backend() { }
};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }

    void flush() { m_frontendChannel->flushProtocolNotifications(); }
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, blink::protocol::Accessibility::Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CORE_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace Accessibility
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Accessibility_h)
