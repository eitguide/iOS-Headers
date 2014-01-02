/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameController/GCController.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;

// Not exported
@interface _GCController : GCController <NSSecureCoding>
{
    id _controllerPausedHandler;
    NSString *_vendorName;
    long long _playerIndex;
    id <GCNamedProfile> _profile;
    struct __IOHIDDevice *_deviceRef;
    unsigned int _service;
}

+ (_Bool)supportsSecureCoding;
- (unsigned int)service;
- (struct __IOHIDDevice *)deviceRef;
- (void)setProfile:(id)arg1;
- (id)profile;
- (void)setControllerPausedHandler:(id)arg1;
- (id)controllerPausedHandler;
- (void).cxx_destruct;
- (id)extendedGamepad;
- (id)gamepad;
- (void)setPlayerIndex:(long long)arg1;
- (long long)playerIndex;
- (_Bool)isAttachedToDevice;
- (id)vendorName;
- (void)clearDeviceRef;
- (id)initWithDeviceRef:(struct __IOHIDDevice *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)deviceHash;

@end

