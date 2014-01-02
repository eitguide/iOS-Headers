/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVVideoOutputSettings.h>

#import "AVDecodedVideoSettingsForFig-Protocol.h"

@class NSDictionary;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig>
{
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;
@property(readonly, nonatomic) NSDictionary *pixelBufferAttributes;
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (_Bool)isCodecAvailableOnCurrentSystem;
- (_Bool)willYieldCompressedSamples;
- (id)cleanApertureDictionary;
- (id)pixelAspectRatioDictionary;
- (int)height;
- (int)width;
- (void)dealloc;
- (id)initWithTrustedPixelBufferAttributes:(id)arg1;
- (id)initWithPixelBufferAttributes:(id)arg1 exceptionReason:(id *)arg2;

@end

