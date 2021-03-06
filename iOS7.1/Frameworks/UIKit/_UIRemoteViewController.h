//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIActionSheetDelegate.h"
#import "XPCProxyTarget.h"
#import "_UIRemoteViewController_TextEffectsOperatorInterface.h"
#import "_UIRemoteViewController_ViewControllerOperatorInterface.h"

@class NSArray, NSError, NSMutableArray, NSString, UIActionSheet, UIDimmingView, UIView, _UIAsyncInvocation, _UIRemoteView, _UISizeTrackingView, _UITextEffectsRemoteView, _UITextServiceSession, _UIViewServiceInterface;

@interface _UIRemoteViewController : UIViewController <XPCProxyTarget, _UIRemoteViewController_ViewControllerOperatorInterface, _UIRemoteViewController_TextEffectsOperatorInterface, UIActionSheetDelegate>
{
    NSString *_serviceBundleIdentifier;
    _UIViewServiceInterface *_serviceInterface;
    id _serviceViewControllerProxy;
    id _serviceViewControllerControlMessageProxy;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    unsigned int _serviceAccessibilityServerPort;
    unsigned int _serviceRegisteredScrollToTopViewCount;
    id _viewControllerOperatorProxy;
    _UIAsyncInvocation *_viewControllerOperatorHalfDisconnectionInvocation;
    id _textEffectsOperatorProxy;
    _UIAsyncInvocation *_textEffectsOperatorHalfDisconnectionInvocation;
    BOOL _fencingCurrentTransaction;
    int _preFencedCommitActionsLock;
    NSMutableArray *_preFencedCommitActions;
    _UISizeTrackingView *_sizeTrackingView;
    _UIRemoteView *_serviceViewControllerRemoteView;
    _UITextEffectsRemoteView *_fullScreenTextEffectsRemoteView;
    _UITextEffectsRemoteView *_textEffectsAboveStatusBarRemoteView;
    UIView *_fullScreenTextEffectsSnapshotView;
    BOOL _snapshotTextEffectsAfterRotation;
    unsigned int _serviceScreenDisplayID;
    _UIAsyncInvocation *_terminationInvocation;
    int _terminationErrorLock;
    NSError *_terminationError;
    UIActionSheet *_hostedActionSheet;
    _UITextServiceSession *_textServiceSession;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    UIDimmingView *_hostedDimmingView;
    UIView *_touchGrabbingView;
    int _preferredStatusBarStyle;
    BOOL _prefersStatusBarHidden;
    BOOL _isFocusDeferred;
    NSString *_deferredDisplayUUID;
    unsigned int _deferredContextID;
}

+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)_shouldUseXPCObjects;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
- (void)restoreStateForSession:(id)arg1 anchor:(id)arg2;
- (void)saveStateForSession:(id)arg1 anchor:(id)arg2;
- (void)__dismissTextServiceSessionAnimated:(BOOL)arg1;
- (void)__showServiceForText:(id)arg1 type:(int)arg2 fromRectValue:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)_updateTintColor;
- (void)_appearanceInvocationsDidChange:(id)arg1;
- (id)_appearanceSource;
- (void)__viewServiceDidUpdateTintColor:(id)arg1 duration:(double)arg2;
- (BOOL)_customizesForPresentationInPopover;
- (void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg1;
- (void)__viewServicePopoverDidChangeContentSize:(struct CGSize)arg1 animated:(BOOL)arg2 fenceSendRight:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__sendNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)__setViewServiceIsDisplayingPopover:(BOOL)arg1;
- (void)__setSupportedInterfaceOrientations:(id)arg1;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(int)arg1 hidden:(BOOL)arg2;
- (BOOL)prefersStatusBarHidden;
- (int)preferredStatusBarStyle;
- (BOOL)_requiresKeyboardWindowWhenFirstResponder;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didRotateFromInterfaceOrientation:(int)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3;
- (void)_willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (void)_willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (BOOL)_ignoreAppSupportedOrientations;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_setDeferred:(BOOL)arg1 forDisplayUUID:(id)arg2;
- (id)_clientDeferralProperties;
- (id)_hostDeferralProperties;
- (void)__willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_addPreFencedCommitAction:(CDUnknownBlockType)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)__dismissActionSheetWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)__presentActionSheetFromYCoordinate:(float)arg1 withTitle:(id)arg2 buttonTitles:(id)arg3 cancelButtonIndex:(int)arg4 destructiveButtonIndex:(int)arg5 style:(int)arg6;
- (void)_firstResponderDidChange:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)_serviceHasScrollToTopView;
- (void)_scrollToTopFromTouchAtViewLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)dealloc;
- (void)_terminateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (id)disconnect;
- (id)_terminateWithError:(id)arg1;
- (void)_updateTouchGrabbingView;
- (void)_applicationWillDeactivate:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_snapshotAndRemoveTextEffectsRemoteView;
- (void)_restoreTextEffectsRemoteView;
- (void)_applicationDidFinishSuspendSnapshot:(id)arg1;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_statusBarHeightDidChange:(id)arg1;
- (void)_statusBarOrientationDidChange:(id)arg1;
@property(readonly, nonatomic) CDStruct_4c969caf serviceAuditToken;
@property(readonly, nonatomic) int serviceProcessIdentifier;
@property(readonly, nonatomic) NSString *serviceBundleIdentifier;
- (void)synchronizeAnimationsInActions:(CDUnknownBlockType)arg1;
- (void)loadView;
- (void)_awakeWithConnectionInfo:(id)arg1;
- (id)_initWithViewServiceBundleIdentifier:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (id)serviceViewControllerProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serviceViewControllerProxy;
- (void)viewServiceSupportedInterfaceOrientationsDidChange;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

