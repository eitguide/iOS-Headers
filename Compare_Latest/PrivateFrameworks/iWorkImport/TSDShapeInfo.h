/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDStyledInfo.h>

#import "TSDMixing-Protocol.h"
#import "TSDReducableInfo-Protocol.h"
#import "TSKSearchable-Protocol.h"
#import "TSSThemedObject-Protocol.h"

@class TSDFill, TSDLineEnd, TSDPathSource, TSDShapeStyle;

// Not exported
@interface TSDShapeInfo : TSDStyledInfo <TSSThemedObject, TSDMixing, TSDReducableInfo, TSKSearchable>
{
    TSDPathSource *mPathSource;
    TSDShapeStyle *mStyle;
    TSDLineEnd *mHeadLineEnd;
    TSDLineEnd *mTailLineEnd;
}

@property(retain, nonatomic) TSDPathSource *pathSource; // @synthesize pathSource=mPathSource;
- (id)style;
- (id)objectForProperty:(int)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)animationFilters;
- (id)commandToReplaceImageData:(id)arg1 withReducedImageData:(id)arg2 associatedHint:(id)arg3;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (id)commandToFlipWithOrientation:(int)arg1;
- (void)setValuesForProperties:(id)arg1;
@property(copy, nonatomic) TSDFill *fill;
- (void)setStyle:(id)arg1;
- (void)setGeometry:(id)arg1;
@property(readonly, nonatomic) TSDShapeStyle *shapeStyle;
- (Class)styleClass;
- (Class)editorClass;
- (Class)repClass;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
@property(retain, nonatomic) TSDLineEnd *tailLineEnd;
@property(retain, nonatomic) TSDLineEnd *headLineEnd;

@end

