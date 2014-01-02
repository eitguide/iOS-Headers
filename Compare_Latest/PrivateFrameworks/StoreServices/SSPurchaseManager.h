/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, SSXPCConnection;

@interface SSPurchaseManager : NSObject
{
    NSObject<OS_dispatch_queue> *_completionBlockQueue;
    id <SSPurchaseManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_managerIdentifier;
    SSXPCConnection *_requestConnection;
    SSXPCConnection *_responseConnection;
}

- (void)_sendMessage:(long long)arg1 withPurchases:(id)arg2 afterPurchase:(id)arg3 completionBlock:(id)arg4;
- (void)_sendMessage:(long long)arg1 withPurchaseIdentifiers:(id)arg2 afterPurchase:(id)arg3 completionBlock:(id)arg4;
- (void)_sendCompletionBlock:(id)arg1 forStandardReply:(void)arg2;
- (void)_sendCompletionBlock:(id)arg1 forGetPurchasesReply:(void)arg2;
- (id)_responseConnection;
- (id)_requestConnection;
- (_Bool)_resultForReply:(id)arg1 error:(id *)arg2;
- (void)_reconnectForDaemonLaunch;
- (id)_newEncodedArrayWithPurchases:(id)arg1;
- (id)_newEncodedArrayWithPurchaseIdentifiers:(id)arg1;
- (void)_handleMessage:(id)arg1 fromConnection:(id)arg2;
- (void)_connectToDaemon;
@property id <SSPurchaseManagerDelegate> delegate;
- (void)movePurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(id)arg3;
@property(readonly) NSString *managerIdentifier;
- (void)insertPurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(id)arg3;
- (void)getPurchasesUsingBlock:(id)arg1;
- (void)cancelPurchases:(id)arg1 withCompletionBlock:(id)arg2;
- (void)addPurchases:(id)arg1 withCompletionBlock:(id)arg2;
- (void)dealloc;
- (id)initWithManagerIdentifier:(id)arg1;
- (id)init;

@end

