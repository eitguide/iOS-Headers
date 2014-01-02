/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XPCClientDelegate-Protocol.h"

@class NSObject<OS_dispatch_queue>, XPCClient;

@interface WPAdvertising : NSObject <XPCClientDelegate>
{
    long long _state;
    XPCClient *_connection;
    id <WPAdvertisingDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <WPAdvertisingDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XPCClient *connection; // @synthesize connection=_connection;
@property long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)connectionDied;
- (void)messageArrived:(id)arg1;
- (void)updateState:(long long)arg1;
- (void)deregisterService:(id)arg1;
- (void)registerService:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end

