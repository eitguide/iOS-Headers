/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "BBObserverDelegate-Protocol.h"

@class BBBulletin, BBObserver, NSDate, NSTimer;

@interface SBLockScreenTimerViewController : UIViewController <BBObserverDelegate>
{
    _Bool _enabled;
    NSTimer *_updateTimer;
    NSDate *_endDate;
    BBObserver *_observer;
    id <SBLockScreenTimerViewControllerDelegate> _delegate;
    BBBulletin *_timerBulletin;
}

@property(retain) BBBulletin *timerBulletin; // @synthesize timerBulletin=_timerBulletin;
@property id <SBLockScreenTimerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)setContentAlpha:(double)arg1;
- (void)_updateTimerLabelView;
- (void)_updateTimerFired;
- (void)_startTimer;
- (void)_stopTimer;
- (_Bool)_isEndDateValid;
- (id)timerView;
- (void)setEndDate:(id)arg1;
- (void)setTimerHidden:(_Bool)arg1;
- (_Bool)isTimerActive;
- (void)setEnabled:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

