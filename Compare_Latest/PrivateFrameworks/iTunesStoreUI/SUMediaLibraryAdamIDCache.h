/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface SUMediaLibraryAdamIDCache : NSObject
{
    NSMutableSet *_adamIDs;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _isPopulated;
}

+ (id)sharedCache;
- (void)_populateCache;
- (void)_libraryChangedNotification:(id)arg1;
- (void)populateCache;
- (void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionBlock:(id)arg3;
- (void)getIntersectionWithSet:(id)arg1 completionBlock:(id)arg2;
- (void)getContainsAdamID:(id)arg1 completionBlock:(id)arg2;
- (void)dealloc;
- (id)init;

@end

