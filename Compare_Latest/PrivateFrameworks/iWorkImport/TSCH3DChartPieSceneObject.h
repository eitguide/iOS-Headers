/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DChartElementSceneObject.h>

// Not exported
@interface TSCH3DChartPieSceneObject : TSCH3DChartElementSceneObject
{
}

+ (struct MeshData)createMeshForSeries:(id)arg1;
+ (id)createBoundsForSeries:(id)arg1;
+ (id)wholePieBoundsResource;
+ (id)p_wholePieBounds;
+ (id)p_boundsDataBufferWithDepthFactor:(float)arg1 angleRange:(const range_2a4e38ce *)arg2 includeEndPoints:(_Bool)arg3;
+ (unsigned long long)p_boundsStepsForAngle:(double)arg1;
+ (float)calculateHalfAngleForSeries:(id)arg1;
+ (id)createGeometryWithStartAngle:(float)arg1 endAngle:(float)arg2 bevel:(_Bool)arg3 bevelEdges:(_Bool)arg4;
+ (_Bool)shouldCreateMeshSeriesStorage;
+ (Class)propertiesClass;
+ (id)chartSeriesType;
+ (float)geometrySpaceRadius;
- (void)sortElements:(vector_cd7372eb *)arg1 pipeline:(id)arg2;
- (_Bool)transparencyDepthMask;
- (void)setExplosion:(float)arg1 atElementIndex:(const tvec2_3b141483 *)arg2 forScene:(id)arg3;
- (float)explosionAtElementIndex:(const tvec2_3b141483 *)arg1 forScene:(id)arg2;
- (void)updateElementEffectsStates:(const struct RenderElementInfo *)arg1 depthToWidthRatio:(float)arg2;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState *)arg1 properties:(id)arg2 textureTiling:(id)arg3 depth:(float)arg4 percentOfTotal:(float)arg5;
- (_Bool)shouldRenderEachValue;
- (void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4;

@end

