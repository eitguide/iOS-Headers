/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBLockOverlayViewController.h"

@class NSString, NSTimer;

@interface SBLockScreenDeviceBlockViewController : SBLockOverlayViewController
{
    NSTimer *_updateTimer;
}

- (void)_scheduleTimerIfNecessaryAndUpdateSubtitle;
- (void)_clearTimer;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(readonly, nonatomic) NSString *slideToUnlockText;
- (void)dealloc;

@end

