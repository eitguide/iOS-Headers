/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSDLayout;

// Not exported
@interface TSDAbstractGuide : NSObject
{
    double mOffset;
    TSDLayout *mSnappingObjectLayout;
    struct CGRect mSnappingObjectFrame;
    _Bool mLocationInvalidated;
    struct CGColor *mGuideColor;
}

@property(nonatomic) struct CGColor *guideColor; // @synthesize guideColor=mGuideColor;
@property(nonatomic) struct CGRect snappingObjectFrame; // @synthesize snappingObjectFrame=mSnappingObjectFrame;
@property(retain, nonatomic) TSDLayout *snappingObjectLayout; // @synthesize snappingObjectLayout=mSnappingObjectLayout;
@property(nonatomic) double offset; // @synthesize offset=mOffset;
- (void)dealloc;
- (id)description;
- (_Bool)canBeSnappedToByEdge:(int)arg1 ofFrame:(struct CGRect)arg2;
- (id)init;
- (id)layerWithICC:(id)arg1;

@end

