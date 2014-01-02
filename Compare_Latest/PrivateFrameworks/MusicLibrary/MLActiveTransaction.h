/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3DatabaseConnection, NSObject<OS_dispatch_semaphore>, NSUUID, NSXPCConnection;

// Not exported
@interface MLActiveTransaction : NSObject
{
    ML3DatabaseConnection *_connection;
    NSObject<OS_dispatch_semaphore> *_connectionSemaphore;
    unsigned long long _transactionTerminationRule;
    _Bool _inUseByOperation;
    _Bool _startedByOperation;
    _Bool _connectionInUse;
    NSUUID *_identifier;
    NSXPCConnection *_xpcConnection;
    double _lastUsedTime;
}

@property(readonly, nonatomic) _Bool connectionInUse; // @synthesize connectionInUse=_connectionInUse;
@property(nonatomic) _Bool startedByOperation; // @synthesize startedByOperation=_startedByOperation;
@property(nonatomic) _Bool inUseByOperation; // @synthesize inUseByOperation=_inUseByOperation;
@property(nonatomic) double lastUsedTime; // @synthesize lastUsedTime=_lastUsedTime;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_setTransactionTerminationRule:(unsigned long long)arg1;
- (unsigned long long)_transactionTerminationRule;
- (void)updateLastUsed;
- (id)relinquishConnection:(_Bool)arg1;
- (void)useConnectionWithBlock:(id)arg1;
- (void)checkInTransactionConnection:(id)arg1;
- (id)checkoutTransactionConnection;
- (id)description;
- (id)initWithConnection:(id)arg1 identifier:(id)arg2 xpcConnection:(id)arg3;
- (id)init;

@end

