/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

// Not exported
@interface CIBlendWithAlphaMask : CIFilter
{
    CIImage *inputImage;
    CIImage *inputBackgroundImage;
    CIImage *inputMaskImage;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIImage *inputMaskImage; // @synthesize inputMaskImage;
@property(retain, nonatomic) CIImage *inputBackgroundImage; // @synthesize inputBackgroundImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernelNoF;
- (id)_kernelNoB;
- (id)_kernel;

@end

