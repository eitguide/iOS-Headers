/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MPLayerEffect.h>

#import "MPEffectSupportPrivate-Protocol.h"

@interface MPLayerEffect (Private) <MPEffectSupportPrivate>
- (void)createSecondarySlidesWithPaths:(id)arg1;
- (void)createSlidesWithPaths:(id)arg1;
- (void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 fillIn:(_Bool)arg3;
- (void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2;
- (double)fullDuration;
- (long long)maxNumberOfSecondarySlides;
- (long long)maxNumberOfSlides;
- (id)container;
- (double)lowestDisplayTime;
- (void)setLiveIndex:(long long)arg1;
- (long long)liveIndex;
@end

