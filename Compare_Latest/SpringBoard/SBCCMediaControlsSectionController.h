/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBControlCenterSectionViewController.h"

#import "MPUSystemMediaControlsDelegate-Protocol.h"

@class MPUSystemMediaControlsViewController;

@interface SBCCMediaControlsSectionController : SBControlCenterSectionViewController <MPUSystemMediaControlsDelegate>
{
    MPUSystemMediaControlsViewController *_systemMediaViewController;
}

- (void)systemMediaControlsViewController:(id)arg1 didReceiveTapOnControlType:(long long)arg2;
- (void)viewDidLoad;
- (struct CGSize)contentSizeForOrientation:(long long)arg1;
- (id)sectionIdentifier;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

