/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKVectorMapModel.h>

#import "VKMapLayer-Protocol.h"

@class VGLRenderState, VKSkyModel;

// Not exported
@interface VKRealisticMapModel : VKVectorMapModel <VKMapLayer>
{
    VGLRenderState *_renderState;
    double _fade;
    float _sceneAlpha;
    id <VKRoutePreloadSession> _routePreloadSession;
    _Bool _disableRealisticRoads;
    _Bool _disableRealisticLand;
    VKSkyModel *_skyModel;
}

@property(nonatomic) float sceneAlpha; // @synthesize sceneAlpha=_sceneAlpha;
@property(nonatomic) _Bool disableRealisticRoads; // @synthesize disableRealisticRoads=_disableRealisticRoads;
@property(nonatomic) _Bool disableRealisticLand; // @synthesize disableRealisticLand=_disableRealisticLand;
@property(retain, nonatomic) VKSkyModel *skyModel; // @synthesize skyModel=_skyModel;
- (void)stylesheetDidChange;
- (void)stylesheetWillChange;
- (void)drawDebugScene:(id)arg1 withContext:(id)arg2;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (double)_calculateZoomLevelWithContext:(id)arg1;
- (_Bool)wantsCategorizedSourceTiles;
- (void)willStartDrawingTiles:(id)arg1;
- (void)preloadNavigationSceneAnimationResourcesForDisplayStyle:(long long)arg1 context:(id)arg2;
- (void)preloadRenderingResourcesWithContext:(id)arg1;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) id <VKRoutePreloadSession> routePreloadSession;
- (_Bool)minimumZoomLevelBoundsCamera;
- (unsigned int)supportedRenderPasses;
- (unsigned long long)mapLayerPosition;

@end

