/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKDrawStyle.h>

// Not exported
@interface VKBuildingDrawStyle : VKDrawStyle
{
    _Bool _hasStrokeColor3D;
    _Bool _hasStrokeWidth3D;
    struct VKProfileSparseRamp<bool> visibility;
    struct VKProfileSparseRamp<_VGLColor> topColor;
    struct VKProfileSparseRamp<_VGLColor> facadeColor;
    struct VKProfileSparseRamp<_VGLColor> outlineColor;
    struct VKProfileSparseRamp<_VGLColor> landmarkColor;
    struct VKProfileSparseRamp<_VGLColor> flatColor;
    struct VKProfileSparseRamp<bool> outline;
    int roofStyle;
    struct VKProfileSparseRamp<_VGLColor> footprintStrokeColor;
    struct VKProfileSparseRamp<float> footprintStrokeWidth;
    struct VKProfileSparseRamp<_VGLColor> strokeColor3D;
    struct VKProfileSparseRamp<float> strokeWidth3D;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)strokeWidth3DAtZoom:(float)arg1;
- (struct _VGLColor)strokeColor3DAtZoom:(float)arg1;
- (_Bool)hasStrokeWidth3D;
- (_Bool)hasStrokeColor3D;
- (float)footprintStrokeWidthAtZoom:(float)arg1;
- (struct _VGLColor)footprintStrokeColorAtZoom:(float)arg1;
- (int)roofStyle;
- (_Bool)visibleAtZoom:(float)arg1;
- (_Bool)outlineAtZoom:(float)arg1;
- (struct _VGLColor)flatColorAtZoom:(float)arg1;
- (struct _VGLColor)landmarkColorAtZoom:(float)arg1;
- (struct _VGLColor)outlineColorAtZoom:(float)arg1;
- (struct _VGLColor)facadeColorAtZoom:(float)arg1;
- (struct _VGLColor)topColorAtZoom:(float)arg1;
- (void)takeFromZoomInvariantProperties:(id)arg1;
- (void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned long long)arg2 globals:(id)arg3;
- (id)variant;

@end

