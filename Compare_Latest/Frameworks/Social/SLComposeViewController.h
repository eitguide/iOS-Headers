/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SLSheetViewHostProtocol-Protocol.h"

@class NSLayoutConstraint, NSMutableDictionary, NSString, SLRemoteComposeViewController, SLService, UIView;

@interface SLComposeViewController : UIViewController <SLSheetViewHostProtocol>
{
    NSLayoutConstraint *_keyboardTopConstraint;
    UIView *_keyboardTrackingView;
    long long _savedStatusBarStyle;
    NSMutableDictionary *_delayedActions;
    _Bool _wasPresented;
    id _completionHandler;
    _Bool _didFailLoadingRemoteViewController;
    SLService *_service;
    long long _numVideosAdded;
    long long _numImagesAdded;
    long long _numURLsAdded;
    NSString *_serviceType;
    SLRemoteComposeViewController *_remoteViewController;
}

+ (_Bool)canShareItems:(id)arg1 forServiceType:(id)arg2;
+ (id)composeViewControllerForServiceType:(id)arg1;
+ (_Bool)configurationSupportsShareSheetOfType:(id)arg1;
+ (_Bool)isAvailableForServiceType:(id)arg1;
@property(retain) SLRemoteComposeViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (_Bool)canSendTweet;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_useCustomDimmingView;
- (void)remoteController:(id)arg1 didLoadWithError:(id)arg2;
- (void)_handleRemoteViewFailure;
- (void)remoteViewControllerLoadDidTimeout;
- (void)didLoadSheetViewController;
- (void)loadServiceViewControllerWithClassName:(id)arg1 fromServiceBundleWithIdentifier:(id)arg2;
- (void)shouldShowNetworkActivityIndicator:(id)arg1;
- (void)sheetDidSendWithSucess:(id)arg1 error:(id)arg2;
- (void)sheetFailedWithError:(id)arg1;
- (void)userDidPost;
- (void)userDidCancel;
- (void)completeWithResult:(long long)arg1;
- (id)_delayedActions;
- (void)_performActionsForEvent:(id)arg1;
- (void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3;
- (void)_addDelayedAction:(id)arg1 forEvent:(void)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)addURL:(id)arg1 withPreviewImage:(id)arg2;
- (id)addDownSampledImageDataByProxyWithPreviewImage:(SEL)arg1;
- (_Bool)addAttachment:(id)arg1;
- (_Bool)removeAllURLs;
- (_Bool)addURL:(id)arg1;
- (_Bool)removeAllImages;
- (_Bool)addImage:(id)arg1;
- (_Bool)addImageAsset:(id)arg1;
- (id)_urlForUntypedAsset:(id)arg1;
- (_Bool)supportsVideoAsset:(id)arg1;
- (_Bool)supportsImageAsset:(id)arg1;
- (void)_resetAttachmentCountForType:(int)arg1;
- (void)_incrementAttachmentCountForType:(int)arg1;
- (_Bool)_canAddAttachment:(id)arg1;
- (long long)_countForAttachmentType:(int)arg1;
- (long long)_limitForAttachmentType:(int)arg1;
- (_Bool)setInitialText:(id)arg1;
- (_Bool)canAddContent;
- (void)dealloc;
- (id)initWithServiceViewControllerClassName:(id)arg1 hostingBundleIdentifer:(id)arg2;
- (id)initWithServiceType:(id)arg1;

@end

