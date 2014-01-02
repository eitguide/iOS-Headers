/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSTimer;

@interface MLMediaLibraryWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_mediaLibraries;
    NSMutableDictionary *_transactionMap;
    NSOperationQueue *_templatedOperationsQueue;
    NSTimer *_watchdogTimer;
    id <MLMediaLibraryWriterDelegate> _delegate;
    double _transactionTimeout;
}

+ (id)writerErrorWithCode:(long long)arg1 description:(id)arg2;
@property(nonatomic) double transactionTimeout; // @synthesize transactionTimeout=_transactionTimeout;
@property(nonatomic) __weak id <MLMediaLibraryWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_watchdogTimerFired:(id)arg1;
- (_Bool)_shouldWatchdogTransaction:(id)arg1;
- (void)_tearDownWatchdogTimer;
- (void)_setupWatchdogTimer;
- (void)_destroyTransactionForIdentifier:(id)arg1 forceRelinquishConnection:(_Bool)arg2;
- (id)_transactionForProcessIdentifier:(int)arg1;
- (id)_transactionWithExistingLocalWriterConnection:(id)arg1;
- (void)_destroyTransaction:(id)arg1 forceRelinquishConnection:(_Bool)arg2;
- (id)_newTransactionForDatabaseAtPath:(id)arg1 fromXPCConnection:(id)arg2;
- (id)_mediaLibraryForPath:(id)arg1;
- (id)_transactionForIdentifier:(id)arg1;
- (void)reset;
- (void)cancelAllActiveDatabaseOperationsAndWaitUntilFinished:(_Bool)arg1;
- (void)cancelAllActiveTransactions;
- (void)cancelActiveTransactionForProcess:(int)arg1;
- (void)setConnectionsProfilingLevel:(int)arg1;
- (void)executeTemplatedDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 fromXPCConnection:(id)arg4 completionHandler:(id)arg5;
- (_Bool)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 error:(id *)arg3;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 error:(id *)arg5;
- (_Bool)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id *)arg4;
- (id)beginTransactionForDatabaseAtPath:(id)arg1 fromXPCConnection:(id)arg2 error:(id *)arg3;
@property(nonatomic) _Bool operationQueueEnabled;
- (id)description;
- (void)dealloc;
- (id)init;

@end

