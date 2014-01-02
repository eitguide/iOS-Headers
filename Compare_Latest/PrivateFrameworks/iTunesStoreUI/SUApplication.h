/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIApplication.h"

#import "UIApplicationDelegate-Protocol.h"

@class UIColor, UIWindow;

@interface SUApplication : UIApplication <UIApplicationDelegate>
{
    _Bool _terminateOnNextSuspend;
    UIWindow *_window;
    UIColor *_interactionTintColor;
}

@property(copy, nonatomic) UIColor *interactionTintColor; // @synthesize interactionTintColor=_interactionTintColor;
- (void)_teardownUI;
- (void)_setupUI;
- (void)_exitIfStoreNotAvailable;
- (void)_exitForStoreNotAvailable;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (void)_storeEnabledChangeNotification:(id)arg1;
- (double)defaultImageSnapshotExpiration;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)applicationSuspend:(struct __GSEvent *)arg1 settings:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) UIWindow *window;

@end

