/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

// Not exported
@interface __NSHostExtraIvars : NSObject
{
    NSString *thingToResolve;
    int resolveType;
    NSObject<OS_dispatch_queue> *resolveQueue;
    NSObject<OS_dispatch_queue> *cacheAccessQueue;
    NSObject<OS_dispatch_queue> *callbackQueue;
    _Bool startedResolving;
}

@property _Bool startedResolving; // @synthesize startedResolving;
@property(readonly) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue;
@property(readonly) NSObject<OS_dispatch_queue> *cacheAccessQueue; // @synthesize cacheAccessQueue;
@property(readonly) NSObject<OS_dispatch_queue> *resolveQueue; // @synthesize resolveQueue;
@property(retain, nonatomic) NSString *thingToResolve; // @synthesize thingToResolve;
@property(nonatomic) int resolveType; // @synthesize resolveType;
- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (id)init;

@end

