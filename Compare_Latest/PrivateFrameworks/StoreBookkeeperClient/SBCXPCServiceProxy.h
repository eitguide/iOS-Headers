/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSXPCConnection;

// Not exported
@interface SBCXPCServiceProxy : NSObject
{
    _Bool _isConnecting;
    id _serviceProxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSDictionary *_clientConfiguration;
    NSMutableDictionary *_pendingServiceCompletionHandlers;
    Class _serviceInterfaceClass;
}

@property(readonly) _Bool isConnecting; // @synthesize isConnecting=_isConnecting;
@property(readonly) Class serviceInterfaceClass; // @synthesize serviceInterfaceClass=_serviceInterfaceClass;
@property(readonly) NSMutableDictionary *pendingServiceCompletionHandlers; // @synthesize pendingServiceCompletionHandlers=_pendingServiceCompletionHandlers;
@property(readonly) NSDictionary *clientConfiguration; // @synthesize clientConfiguration=_clientConfiguration;
@property(readonly) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (oneway void)setClientConfiguration:(id)arg1;
- (void)sendMessage:(SEL)arg1 withClientCompletionHandler:(id)arg2 messageBlock:(void)arg3;
- (id)_enqueueMessage:(SEL)arg1 withClientCompletionHandler:(id)arg2;
- (void)_dequeueRequestWithEnqueuedToken:(id)arg1;
- (void)_invalidateOutstandingRequests:(id)arg1;
- (void)_onQueueInvalidateOutstandingRequests:(id)arg1;
- (void)_onQueueCloseServiceConnection;
@property(readonly) id serviceProxy; // @synthesize serviceProxy=_serviceProxy;
- (void)didConnectToServiceProxy;
- (void)closeServiceConnection;
- (void)_openServiceConnection;
- (void)dealloc;
- (id)initWithServiceInterfaceClass:(Class)arg1 clientConfiguration:(id)arg2;

@end

