/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVTaskGroup.h"

#import "CoreDAVPostTaskDelegate-Protocol.h"

@class CalDAVCalendarServerInviteNotificationItem, NSURL;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate>
{
    CalDAVCalendarServerInviteNotificationItem *_invitation;
    _Bool _acceptInvitation;
    NSURL *_calendarHomeURL;
    NSURL *_sharedAs;
}

@property(retain, nonatomic) NSURL *sharedAs; // @synthesize sharedAs=_sharedAs;
@property(retain) NSURL *calendarHomeURL; // @synthesize calendarHomeURL=_calendarHomeURL;
@property _Bool acceptInvitation; // @synthesize acceptInvitation=_acceptInvitation;
@property(retain) CalDAVCalendarServerInviteNotificationItem *invitation; // @synthesize invitation=_invitation;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)generateReply;
- (void)startTaskGroup;
- (id)description;
- (void)dealloc;
- (id)initWithInvitation:(id)arg1 acceptInvitation:(_Bool)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;

// Remaining properties
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;

@end

