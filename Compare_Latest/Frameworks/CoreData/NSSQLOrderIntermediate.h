/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

// Not exported
@interface NSSQLOrderIntermediate : NSSQLIntermediate
{
    NSArray *_sortDescriptors;
}

- (id)generateSQLStringInContext:(id)arg1;
- (id)_generateSQLForOrderedToManyInverse:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForOrderedManyToManyInverse:(id)arg1 inContext:(id)arg2;
- (void)dealloc;
- (id)initWithSortDescriptors:(id)arg1 inScope:(id)arg2;

@end

