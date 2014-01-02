/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WebNotificationPrivate;

// Not exported
@interface WebNotification : NSObject
{
    WebNotificationPrivate *_private;
}

- (void)dispatchErrorEvent;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchShowEvent;
- (unsigned long long)notificationID;
- (id)origin;
- (id)dir;
- (id)lang;
- (id)iconURL;
- (id)tag;
- (id)body;
- (id)title;
- (id)init;

@end

