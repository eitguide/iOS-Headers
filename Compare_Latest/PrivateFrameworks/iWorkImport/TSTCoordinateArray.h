/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableIndexSet;

// Not exported
@interface TSTCoordinateArray : NSObject
{
    unsigned int mOffset;
    unsigned int mCount;
    double *mCoordinates;
    double mAverage;
    NSMutableIndexSet *mVisibleIndices;
    _Bool mLayoutDirectionIsLeftToRight;
    double mTableWidth;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)hasRightToLeftOrderingWithWidth:(double)arg1;
- (id)initWithCount:(unsigned int)arg1 atOffset:(unsigned int)arg2;

@end

