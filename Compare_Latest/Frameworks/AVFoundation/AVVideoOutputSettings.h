/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary;

@interface AVVideoOutputSettings : AVOutputSettings
{
}

+ (id)defaultVideoOutputSettings;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)arg1;
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)registeredOutputSettingsClasses;
+ (id)_validValuesForScalingMode;
- (_Bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;
@property(readonly, nonatomic) _Bool dimensionsAreBoundingBox;
@property(readonly, nonatomic) NSDictionary *pixelTransferProperties;
@property(readonly, nonatomic) NSDictionary *cleanApertureDictionary;
@property(readonly, nonatomic) NSDictionary *pixelAspectRatioDictionary;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
@property(readonly, nonatomic) NSDictionary *videoSettingsDictionary;
- (id)compatibleMediaTypes;
- (id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end

