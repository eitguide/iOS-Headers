/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBLockOverlayViewController.h"

#import "SBLockOverlayViewDelegate-Protocol.h"

@class NSString, SBLockOverlayView, SBSystemLocalNotificationAlert;

@interface SBLockScreenSystemAlertFullscreenViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate>
{
    SBSystemLocalNotificationAlert *_alertItem;
    SBLockOverlayView *_fullscreenAlertView;
    NSString *_title;
    NSString *_actionText;
}

@property(readonly, nonatomic) SBSystemLocalNotificationAlert *alertItem; // @synthesize alertItem=_alertItem;
- (void)snoozeAlertItemWithReason:(int)arg1;
- (void)lockButtonPressed:(id)arg1;
- (void)handleTapGestureFromView:(id)arg1;
- (void)deactivateAlertItem;
- (void)performUnlockAction;
- (void)loadView;
- (void)dealloc;
- (id)initWithSystemNotification:(id)arg1 title:(id)arg2 subtitle:(id)arg3;

@end

