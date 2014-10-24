//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKDSystemAvailabilityWatcher.h"

@class CKDURLRequest, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CKDTokenRegistrationScheduler : NSObject <CKDSystemAvailabilityWatcher>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_callbackBlocks;
    NSMutableDictionary *_callbackTimers;
    NSObject<OS_dispatch_source> *_scheduleTimer;
    CKDURLRequest *_request;
}

+ (id)sharedScheduler;
@property(retain, nonatomic) CKDURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *scheduleTimer; // @synthesize scheduleTimer=_scheduleTimer;
@property(retain, nonatomic) NSMutableDictionary *callbackTimers; // @synthesize callbackTimers=_callbackTimers;
@property(retain, nonatomic) NSMutableDictionary *callbackBlocks; // @synthesize callbackBlocks=_callbackBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)ensureTokenRefreshForAppContainerTuple:(id)arg1 apsEnvironmentString:(id)arg2 useAPSPublicToken:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)forceTokenRefreshForAllClients;
- (void)unregisterAllTokensWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unregisterTokenForAppContainerTuple:(id)arg1;
- (void)handlePushTokenDidUpdate:(id)arg1;
- (void)handlePublicPushTokenDidUpdate:(id)arg1;
- (void)refreshAllClientsNow;
- (void)scheduleTokenRefresh;
- (void)_scheduleTokenRefresh;
- (void)_removeToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 usesAPSPublicToken:(int)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_refreshToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 usesAPSPublicToken:(int)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)tokenRefreshChanged;
- (void)systemAvailabilityChanged:(BOOL)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
