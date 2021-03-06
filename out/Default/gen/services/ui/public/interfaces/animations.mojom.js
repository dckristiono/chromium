// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/ui/public/interfaces/animations.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "ui/gfx/mojo/transform.mojom",
], function(bindings, codec, connection, core, validator, transform$) {
  var AnimationTweenType = {};
  AnimationTweenType.LINEAR = 0;
  AnimationTweenType.EASE_IN = AnimationTweenType.LINEAR + 1;
  AnimationTweenType.EASE_OUT = AnimationTweenType.EASE_IN + 1;
  AnimationTweenType.EASE_IN_OUT = AnimationTweenType.EASE_OUT + 1;
  var AnimationProperty = {};
  AnimationProperty.NONE = 0;
  AnimationProperty.OPACITY = AnimationProperty.NONE + 1;
  AnimationProperty.TRANSFORM = AnimationProperty.OPACITY + 1;

  function AnimationValue(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AnimationValue.prototype.initDefaults_ = function() {
    this.float_value = 0;
    this.transform = null;
  };
  AnimationValue.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AnimationValue.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AnimationValue.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate AnimationValue.transform
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, transform$.Transform, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AnimationValue.encodedSize = codec.kStructHeaderSize + 16;

  AnimationValue.decode = function(decoder) {
    var packed;
    var val = new AnimationValue();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.float_value = decoder.decodeStruct(codec.Float);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.transform = decoder.decodeStructPointer(transform$.Transform);
    return val;
  };

  AnimationValue.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AnimationValue.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.float_value);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(transform$.Transform, val.transform);
  };
  function AnimationElement(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AnimationElement.prototype.initDefaults_ = function() {
    this.property = 0;
    this.tween_type = 0;
    this.duration = 0;
    this.start_value = null;
    this.target_value = null;
  };
  AnimationElement.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AnimationElement.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AnimationElement.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    
    // validate AnimationElement.start_value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, AnimationValue, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate AnimationElement.target_value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, AnimationValue, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AnimationElement.encodedSize = codec.kStructHeaderSize + 32;

  AnimationElement.decode = function(decoder) {
    var packed;
    var val = new AnimationElement();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.property = decoder.decodeStruct(codec.Int32);
    val.tween_type = decoder.decodeStruct(codec.Int32);
    val.duration = decoder.decodeStruct(codec.Int64);
    val.start_value = decoder.decodeStructPointer(AnimationValue);
    val.target_value = decoder.decodeStructPointer(AnimationValue);
    return val;
  };

  AnimationElement.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AnimationElement.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.property);
    encoder.encodeStruct(codec.Int32, val.tween_type);
    encoder.encodeStruct(codec.Int64, val.duration);
    encoder.encodeStructPointer(AnimationValue, val.start_value);
    encoder.encodeStructPointer(AnimationValue, val.target_value);
  };
  function AnimationSequence(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AnimationSequence.prototype.initDefaults_ = function() {
    this.cycle_count = 0;
    this.elements = null;
  };
  AnimationSequence.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AnimationSequence.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AnimationSequence.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate AnimationSequence.elements
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(AnimationElement), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AnimationSequence.encodedSize = codec.kStructHeaderSize + 16;

  AnimationSequence.decode = function(decoder) {
    var packed;
    var val = new AnimationSequence();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cycle_count = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.elements = decoder.decodeArrayPointer(new codec.PointerTo(AnimationElement));
    return val;
  };

  AnimationSequence.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AnimationSequence.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.cycle_count);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(AnimationElement), val.elements);
  };
  function AnimationGroup(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AnimationGroup.prototype.initDefaults_ = function() {
    this.window_id = 0;
    this.sequences = null;
  };
  AnimationGroup.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AnimationGroup.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, AnimationGroup.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate AnimationGroup.sequences
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(AnimationSequence), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AnimationGroup.encodedSize = codec.kStructHeaderSize + 16;

  AnimationGroup.decode = function(decoder) {
    var packed;
    var val = new AnimationGroup();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window_id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.sequences = decoder.decodeArrayPointer(new codec.PointerTo(AnimationSequence));
    return val;
  };

  AnimationGroup.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AnimationGroup.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.window_id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(AnimationSequence), val.sequences);
  };

  var exports = {};
  exports.AnimationTweenType = AnimationTweenType;
  exports.AnimationProperty = AnimationProperty;
  exports.AnimationValue = AnimationValue;
  exports.AnimationElement = AnimationElement;
  exports.AnimationSequence = AnimationSequence;
  exports.AnimationGroup = AnimationGroup;

  return exports;
});