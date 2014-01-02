/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBStarkLauncherViewController.h"

#import "SBStarkKnobLauncherCellDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class SBIcon, UINavigationBar, UITableView;

@interface SBStarkKnobLauncherViewController : SBStarkLauncherViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, SBStarkKnobLauncherCellDelegate>
{
    UITableView *_tableView;
    UINavigationBar *_navBar;
    SBIcon *_lastHighlightedIcon;
}

- (_Bool)starkKnobLauncherCellDisplaysBadges:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)iconShowsDisclosureIndicator:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)relayoutIcons;
- (id)prefixFakeIcons;
- (_Bool)obscuresControlBar;
- (_Bool)hidesAutomatically;
- (id)_rowIndexPathForIcon:(id)arg1;
- (void)_launchIcon:(id)arg1;
- (void)dealloc;

@end

