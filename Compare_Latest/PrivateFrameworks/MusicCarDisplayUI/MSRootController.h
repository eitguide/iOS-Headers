/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MPAVController, MSBrowserViewController, NSArray, UIViewController, UIWindow;

@interface MSRootController : NSObject
{
    UIWindow *_carDisplayWindow;
    MSBrowserViewController *_browserViewController;
    UIViewController *_dummyFlipViewController;
    NSArray *_tabs;
    MPAVController *_player;
    id <MSCarDisplayServiceProvider> _serviceProvider;
}

@property(nonatomic) __weak id <MSCarDisplayServiceProvider> serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_tabsDidChange:(id)arg1;
- (void)showNowPlaying;
- (void)dealloc;
- (id)initWithScreen:(id)arg1 tabs:(id)arg2;
- (id)initWithTabs:(id)arg1;

@end

