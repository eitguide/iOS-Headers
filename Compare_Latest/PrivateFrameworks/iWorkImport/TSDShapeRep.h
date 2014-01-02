/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDStyledRep.h>

#import "TSDMagicMoveMatching-Protocol.h"
#import "TSDPathEditableRep-Protocol.h"
#import "TSDShapeControlRep-Protocol.h"

// Not exported
@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching, TSDShapeControlRep, TSDPathEditableRep>
{
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    _Bool mFrameInUnscaledCanvasIsValid;
    _Bool mDirectlyManagesLayerContent;
    struct CGRect mOriginalAliasedAlignmentFrameInLayerFrame;
    _Bool mShadowOnChildrenDisabled;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;
@property(nonatomic) _Bool shadowOnChildrenDisabled; // @synthesize shadowOnChildrenDisabled=mShadowOnChildrenDisabled;
- (_Bool)i_editMenuOverlapsEndKnobs;
- (_Bool)shouldShowShadow;
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;
- (_Bool)p_drawsSelfInOneStep;
- (_Bool)p_canApplyFillToLayer;
- (_Bool)p_canApplyStrokeToLayer;
- (_Bool)p_pathIsAxisAlignedRect;
- (void)p_endDynamicallyResizingOrMovingLineEnd;
- (void)p_beginDynamicallyResizingOrMovingLineEnd;
- (void)p_drawLineEndForHead:(_Bool)arg1 withDelta:(struct CGPoint)arg2 andStroke:(id)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(_Bool)arg5;
- (void)dynamicMoveSmartShapeKnobDidEndWithTracker:(id)arg1;
- (void)enqueuePathSourceChanges;
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;
- (id)dynamicMoveSmartShapeKnobDidBegin;
- (void)dynamicMoveLineSegmentDidEndWithTracker:(id)arg1;
- (void)dynamicallyMovingLineSegmentWithTracker:(id)arg1;
- (id)dynamicMoveLineSegmentDidBegin;
- (void)dynamicMovePathKnobDidEndWithTracker:(id)arg1;
- (void)dynamicallyMovedPathKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;
- (void)dynamicMovePathKnobDidBegin;
- (_Bool)isEditingPath;
- (id)p_pathEditor;
- (struct CGAffineTransform)naturalToEditablePathSpaceTransform;
- (id)editablePathSource;
- (_Bool)canMakePathEditable;
- (_Bool)isPathEditable;
- (void)dynamicallyResizingWithTracker:(id)arg1;
- (_Bool)canDrawInParallel;
- (_Bool)isInvisible;
- (void)invalidateEffectLayersForChildren;
- (void)dynamicResizeDidEndWithTracker:(id)arg1;
- (id)dynamicResizeDidBegin;
- (id)overlayLayers;
- (id)additionalLayersOverLayer;
- (_Bool)selectionIsAppropriateToShowInvisiblePathHighlight;
- (_Bool)shouldShowInvisiblePathHighlight;
- (id)newTrackerForKnob:(id)arg1;
- (void)updatePositionsOfKnobs:(id)arg1;
- (_Bool)directlyManagesVisibilityOfKnob:(id)arg1;
- (_Bool)canUseSpecializedHitRegionForKnob:(id)arg1;
- (_Bool)shouldShowSmartShapeKnobs;
- (_Bool)shouldShowAdvancedGradientKnobs;
- (_Bool)shouldShowAdditionalKnobs;
- (void)addSelectionKnobsToArray:(id)arg1;
- (unsigned long long)enabledKnobMask;
- (_Bool)canBeUsedForImageMask;
- (id)pathSourceForSelectionHighlightBehavior;
- (_Bool)shouldHideSelectionHighlightDueToRectangularPath;
- (_Bool)shouldShowSelectionHighlight;
- (struct CGRect)targetRectForEditMenu;
- (void)dynamicDragDidEnd;
- (void)dynamicDragDidBegin;
- (struct CGRect)aliasedAlignmentFrameInLayerFrame;
- (_Bool)isDraggable;
- (void)processChangedProperty:(int)arg1;
- (_Bool)intersectsUnscaledRect:(struct CGRect)arg1;
- (double)shortestDistanceToPoint:(struct CGPoint)arg1 countAsHit:(_Bool *)arg2;
- (_Bool)shouldExpandHitRegionWhenSmall;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2;
- (_Bool)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id *)arg2 andQueue:(id *)arg3;
- (void)didUpdateLayer:(id)arg1;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (_Bool)isEditingChildRep;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext *)arg1;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1;
- (id)colorBehindLayer:(id)arg1;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)p_endApplyOpacity:(struct CGContext *)arg1 apply:(_Bool)arg2;
- (_Bool)p_beginApplyOpacity:(struct CGContext *)arg1 forDrawingInOneStep:(_Bool)arg2;
- (_Bool)shouldAlwaysSmoothText;
- (struct CGRect)clipRect;
- (struct CGRect)clipRectWithoutEffects;
- (_Bool)directlyManagesLayerContent;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;
- (struct CGRect)layerFrameInScaledCanvasRelativeToParent;
- (struct CGRect)layerFrameInScaledCanvas;
- (struct CGRect)frameInUnscaledCanvas;
- (id)shapeLayout;
- (id)shapeInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

