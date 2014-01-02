/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface WebVisiblePosition : NSObject
{
    struct WebObjectInternal *_internal;
}

@property(nonatomic) int affinity;
- (id)enclosingRangeWithCorrectionIndicator;
- (id)enclosingRangeWithDictationPhraseAlternatives:(id *)arg1;
- (_Bool)atAlphaNumericBoundaryInDirection:(int)arg1;
- (_Bool)requiresContextForWordBoundary;
- (_Bool)isEditable;
- (id)positionAtStartOrEndOfWord;
- (id)enclosingTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (_Bool)withinTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (id)positionOfNextBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (_Bool)atBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned int)arg2;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned int)arg2 withAffinityDownstream:(_Bool)arg3;
- (_Bool)directionIsDownstream:(int)arg1;
- (int)textDirection;
- (id)description;
- (int)distanceFromPosition:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

