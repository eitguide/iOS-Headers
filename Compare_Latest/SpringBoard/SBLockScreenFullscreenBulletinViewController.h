/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBLockOverlayViewController.h"

#import "SBLockOverlayViewDelegate-Protocol.h"

@class SBAwayBulletinListItem, SBLockOverlayView;

@interface SBLockScreenFullscreenBulletinViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate>
{
    SBLockOverlayView *_bulletinView;
    SBAwayBulletinListItem *_bulletinItem;
}

@property(retain, nonatomic) SBAwayBulletinListItem *bulletinItem; // @synthesize bulletinItem=_bulletinItem;
- (void)handleTapGestureFromView:(id)arg1;
- (void)updateContent;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

