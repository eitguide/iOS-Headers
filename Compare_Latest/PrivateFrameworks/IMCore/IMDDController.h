/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface IMDDController : NSObject
{
    NSObject<OS_dispatch_queue> *_scannerQueue;
}

+ (id)sharedInstance;
- (void)scanMessage:(id)arg1 waitUntilDone:(_Bool)arg2 completionBlock:(id)arg3;
- (_Bool)_scanMessageUsingScanner:(id)arg1 attributedString:(id)arg2;
- (void)scanMessage:(id)arg1 completionBlock:(id)arg2;
- (id)scannerQueue;
- (struct __DDScanner *)sharedScanner;
- (void)dealloc;
- (id)init;

@end

