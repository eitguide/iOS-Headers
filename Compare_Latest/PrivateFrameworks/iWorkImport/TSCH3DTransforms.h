/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

// Not exported
@interface TSCH3DTransforms : NSObject
{
    NSMutableArray *mArray;
    tvec2_3b141483 mSize;
}

+ (id)transformsWithSize:(tvec2_3b141483)arg1;
+ (id)transforms;
@property(readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;
- (id).cxx_construct;
- (long long)arrayIndex:(tvec2_3b141483)arg1;
- (id)transformAtIndex:(tvec2_3b141483)arg1;
- (void)setTransform:(id)arg1 atIndex:(tvec2_3b141483)arg2;
- (void)dealloc;

@end

