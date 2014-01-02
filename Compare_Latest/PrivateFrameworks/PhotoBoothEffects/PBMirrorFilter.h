/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoBoothEffects/PBFilter.h>

@interface PBMirrorFilter : PBFilter
{
    float lastInputX;
    float lastInputY;
    float lastInputAngle;
    _Bool firstTime;
    float inputOrientation;
    struct CGPoint inputPoint;
}

@property float inputOrientation; // @synthesize inputOrientation;
@property struct CGPoint inputPoint; // @synthesize inputPoint;
- (_Bool)needsWrapMirror;
- (id)ciFilterName;
- (void)applyParametersToCIFilter:(_Bool)arg1 extent:(struct CGRect)arg2;
- (void)setDefaults;

@end

