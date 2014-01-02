/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameController/_GCControllerButtonInput.h>

@class _GCControllerAxisInput;

// Not exported
@interface _GCControllerAxisButtonInput : _GCControllerButtonInput
{
    _GCControllerAxisInput *_axis;
    _Bool _positive;
}

@property(readonly, getter=isPositive) _Bool positive; // @synthesize positive=_positive;
@property __weak _GCControllerAxisInput *axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (float)value;
- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1;
- (_Bool)isAnalog;
- (id)description;
- (id)collection;
- (id)initWithAxis:(id)arg1 positive:(_Bool)arg2;

@end

