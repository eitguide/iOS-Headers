//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSCHRenderUtilities : NSObject
{
}

+ (struct CGImage *)newImageFromFills:(id)arg1 size:(struct CGSize)arg2 spaceBetween:(struct CGSize)arg3 scale:(float)arg4 borderColor:(id)arg5 outFillRects:(struct CGRect **)arg6;
+ (struct CGPath *)newStrokedPathFromPath:(struct CGPath *)arg1 stroke:(id)arg2;
+ (struct CGRect)labelRectFromClipRect:(struct CGRect)arg1 elementSize:(struct CGSize)arg2;
+ (void)addTextSubselectionHalosToArray:(id)arg1 rect:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3;
+ (void)addTextSubselectionKnobsToArray:(id)arg1 rect:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3;
+ (struct CGPath *)p_newPlusPath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4 context:(struct CGContext *)arg5;
+ (struct CGPath *)p_newCrossPath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
+ (struct CGPath *)p_newDiamondPath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
+ (struct CGPath *)p_newSquarePath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4 context:(struct CGContext *)arg5;
+ (struct CGPath *)p_newYieldPath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
+ (struct CGPath *)p_newTrianglePath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
+ (struct CGPath *)p_newCirclePath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
+ (struct CGPath *)p_newPathForSymbol:(int)arg1 context:(struct CGContext *)arg2 at:(struct CGPoint)arg3 width:(float)arg4 pathLocation:(int)arg5 stroke:(id)arg6;
+ (id)lightenFillOrStroke:(id)arg1 byPercent:(float)arg2;
+ (struct CGColor *)newLightenedColor:(struct CGColor *)arg1 byPercent:(float)arg2;
+ (struct CGRect)scaleRect:(struct CGRect)arg1 toFit:(struct CGRect)arg2;
+ (struct CGRect)integralFillRenderingRectFromElementRect:(struct CGRect)arg1;
+ (struct CGPath *)newUnitPathForSymbol:(int)arg1 symbolSize:(float)arg2 stroke:(id)arg3;
+ (BOOL)centerPointForSeries:(id)arg1 index:(unsigned int)arg2 frame:(struct CGRect)arg3 point:(struct CGPoint *)arg4 nullsUseIntercept:(BOOL)arg5;
+ (BOOL)centerPointForSeries:(id)arg1 index:(unsigned int)arg2 frame:(struct CGRect)arg3 point:(struct CGPoint *)arg4;
+ (void)drawNullFillSwatchInContext:(struct CGContext *)arg1 frame:(struct CGRect)arg2;
+ (void)drawFill:(id)arg1 inContext:(struct CGContext *)arg2 path:(struct CGPath *)arg3;
+ (void)drawFill:(id)arg1 inContext:(struct CGContext *)arg2 frame:(struct CGRect)arg3;
+ (void)drawSymbol:(int)arg1 inContext:(struct CGContext *)arg2 at:(struct CGPoint)arg3 width:(float)arg4 fill:(id)arg5 stroke:(id)arg6;
+ (struct CGPath *)newClipPathForSymbol:(int)arg1 at:(struct CGPoint)arg2 width:(float)arg3 stroke:(id)arg4;
+ (id)printCGPath:(struct CGPath *)arg1;

@end
