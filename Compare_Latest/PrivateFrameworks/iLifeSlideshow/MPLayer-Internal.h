/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MPLayer.h>

#import "MPActionableSupportInternal-Protocol.h"

@interface MPLayer (Internal) <MPActionableSupportInternal>
- (void)configureActions;
- (void)resetStartTimes;
- (void)reconnectAllTransitions;
- (void)reconnectTransitionForEffectContainerAtIndex:(long long)arg1;
- (void)updateMainDuration;
- (void)updateDurationPadding:(double)arg1;
- (void)setSkipTimeCalculations:(_Bool)arg1;
- (_Bool)skipTimeCalculations;
- (void)setMontage:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPlug:(id)arg1;
- (void)cleanup;
- (void)copyAudioPlaylist:(id)arg1;
- (void)copyActions:(id)arg1;
- (void)copyAnimationPaths:(id)arg1;
- (void)copyFilters:(id)arg1;
- (void)copyEffectContainers:(id)arg1;
- (void)copyStruct:(id)arg1;
- (id)uuid;
- (id)objectID;
- (id)plugID;
- (id)action;
@end

