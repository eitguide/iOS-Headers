/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UITargetedProxy.h>

@class NSObject<OS_dispatch_queue>;

// Not exported
@interface _UIQueueRedirectingProxy : _UITargetedProxy
{
    NSObject<OS_dispatch_queue> *_targetQueue;
}

+ (id)proxyForwardingMessagesToObject:(id)arg1 onQueue:(id)arg2;
- (id)description;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end

