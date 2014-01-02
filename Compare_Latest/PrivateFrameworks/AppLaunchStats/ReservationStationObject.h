/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DuetLoggerProtocol-Protocol.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface ReservationStationObject : NSObject <DuetLoggerProtocol>
{
    NSObject<OS_dispatch_queue> *rsDispatchQueue;
    long long lockTime;
    long long seqNum;
    int appType;
    id forceEndHandler;
    NSDate *timeStamp;
    NSString *bundleID;
    NSObject<OS_dispatch_source> *theTimer;
}

- (void).cxx_destruct;
- (void)logLight:(struct __aslclient *)arg1 withMsg:(struct __aslmsg *)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __aslclient *)arg1 withMsg:(struct __aslmsg *)arg2 withLevel:(int)arg3;
- (void)onTick;
- (void)setStationState:(id)arg1 seq:(long long)arg2 type:(int)arg3 didset:(_Bool *)arg4 release:(id)arg5;
- (void)setStation:(id)arg1 didSet:(_Bool *)arg2;
- (void)releaseStationWithAppID:(id)arg1 seqNum:(long long)arg2 withReleaseState:(_Bool *)arg3;
- (_Bool)isFree;
- (void)createTimer;
- (id)init:(id)arg1;

@end

