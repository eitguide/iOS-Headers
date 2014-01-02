/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPObject.h>

#import "TSPCopying-Protocol.h"

@class NSMutableSet, NSSet;

// Not exported
@interface TSDGuideStorage : TSPObject <TSPCopying>
{
    NSMutableSet *mGuides;
}

@property(retain, nonatomic) NSSet *guides; // @synthesize guides=mGuides;
- (id)description;
- (id)alignmentGuidesForEditing;
- (id)alignmentGuides;
- (id)provideDynamicGuides;
- (unsigned long long)count;
- (void)removeGuide:(id)arg1;
- (void)addGuide:(id)arg1;
- (void)dealloc;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

