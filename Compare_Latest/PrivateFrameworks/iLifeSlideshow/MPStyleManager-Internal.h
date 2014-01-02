/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MPStyleManager.h>

@interface MPStyleManager (Internal)
- (double)allowUserDefinedDurationForStyleID:(id)arg1;
- (double)navigationIncrementForStyleID:(id)arg1;
- (_Bool)hasImagesForLayerID:(id)arg1 forStyleID:(id)arg2;
- (_Bool)canCancelAuthoringForStyleID:(id)arg1;
- (unsigned long long)regionOfInterestPickModeForStyleID:(id)arg1;
- (id)backgroundColorLayersForStyleID:(id)arg1;
- (id)layerIDForLayerIndex:(long long)arg1 ofStyle:(id)arg2;
- (long long)layerIndexForLayerID:(id)arg1 ofStyle:(id)arg2;
- (double)basePeriodForLayerIndex:(long long)arg1 ofStyle:(id)arg2;
- (double)defaultTransitionDurationForLayer:(long long)arg1 ofStyle:(id)arg2 withAspectRatio:(double)arg3;
- (double)defaultEffectDurationForLayer:(long long)arg1 ofStyle:(id)arg2;
- (id)effectPresetIDsForLayerIndex:(long long)arg1 ofStyleID:(id)arg2;
- (long long)defaultAutoKenBurnsLevelForEffect:(id)arg1 withPreset:(id)arg2 ofStyle:(id)arg3;
- (double)defaultAutoKenBurnsLikelihoodForEffect:(id)arg1 withPreset:(id)arg2 ofStyle:(id)arg3;
- (long long)defaultAutoKenBurnsLevelForZIndex:(long long)arg1 ofStyle:(id)arg2;
- (double)defaultAutoKenBurnsLikelihoodForZIndex:(long long)arg1 ofStyle:(id)arg2;
- (double)defaultFilterLikelihoodForZIndex:(long long)arg1 ofStyle:(id)arg2;
- (id)defaultPositionForZIndex:(long long)arg1 ofStyle:(id)arg2;
- (unsigned long long)reorderModeForStyleID:(id)arg1;
- (struct CGSize)defaultSizeForZIndex:(long long)arg1 ofStyle:(id)arg2;
- (_Bool)easeKenBurnsForStyleID:(id)arg1;
- (long long)kenBurnsOffsetTypeForStyleID:(id)arg1;
@end

