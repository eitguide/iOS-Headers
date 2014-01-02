/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSArray, NSPredicate, NSThread;

@interface ABSearchOperation : NSOperation
{
    void *_addressBook;
    NSPredicate *_predicate;
    NSArray *_prefetchProperties;
    unsigned int _sortOrdering;
    void *_internalSearchAddressBook;
    id <ABSearchOperationDelegate> _delegate;
    id _progressBlock;
    NSThread *_progressBlockThread;
    void *_context;
}

+ (id)personPredicateWithGroup:(void *)arg1 addressBook:(void *)arg2;
+ (id)personPredicateWithAnyValueForProperty:(int)arg1 addressBook:(void *)arg2;
+ (id)personPredicateWithValue:(id)arg1 comparison:(long long)arg2 forProperty:(int)arg3 addressBook:(void *)arg4;
+ (id)personPredicateWithNameOnly:(id)arg1 inAccount:(id)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithNameLike:(id)arg1 inGroups:(id)arg2 sources:(id)arg3 addressBook:(void *)arg4;
+ (id)personPredicateWithNameLike:(id)arg1 inAccount:(id)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithNameLike:(id)arg1 inSource:(void *)arg2 includeSourceInResults:(_Bool)arg3 includePhotosInResults:(_Bool)arg4 addressBook:(void *)arg5;
+ (id)personPredicateWithNameLike:(id)arg1 inSource:(void *)arg2 includeSourceInResults:(_Bool)arg3 addressBook:(void *)arg4;
+ (id)personPredicateWithNameLike:(id)arg1 inSource:(void *)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithNameLike:(id)arg1 inGroup:(void *)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithNameLike:(id)arg1 addressBook:(void *)arg2;
+ (id)personPredicateWithName:(id)arg1 addressBook:(void *)arg2;
@property(copy, nonatomic) id progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) unsigned int sortOrdering; // @synthesize sortOrdering=_sortOrdering;
@property(nonatomic) void *context; // @synthesize context=_context;
@property(nonatomic) id <ABSearchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *prefetchProperties; // @synthesize prefetchProperties=_prefetchProperties;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (void)_mainThread_tellDelegateSearchFoundMatch:(void *)arg1;
- (_Bool)predicateShouldContinue:(id)arg1;
- (void)main;
- (void)cancel;
@property(nonatomic) void *internalSearchAddressBook; // @synthesize internalSearchAddressBook=_internalSearchAddressBook;
- (_Bool)isConcurrent;
- (void)dealloc;

@end

