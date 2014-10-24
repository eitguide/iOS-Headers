//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertControllerContaining.h"
#import "UIAlertControllerVisualStyleProviding.h"
#import "_UIAlertControllerTextFieldViewControllerContaining.h"

@class NSArray, NSAttributedString, NSMutableArray, NSObject<UIAlertControllerVisualStyleProviding>, NSSet, NSString, UIAlertAction, UIGestureRecognizer, UIPopoverController, UIView, _UIAlertControllerTextFieldViewController;

@interface UIAlertController : UIViewController <UIAlertControllerContaining, _UIAlertControllerTextFieldViewControllerContaining, UIAlertControllerVisualStyleProviding>
{
    NSString *_message;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedMessage;
    NSMutableArray *_actions;
    NSSet *_linkedAlertControllers;
    UIAlertAction *_cancelAction;
    int _resolvedStyle;
    int _preferredStyle;
    NSObject<UIAlertControllerVisualStyleProviding> *_styleProvider;
    UIViewController *_contentViewController;
    _UIAlertControllerTextFieldViewController *_textFieldViewController;
    BOOL _textFieldsHidden;
    UIGestureRecognizer *_backButtonDismissGestureRecognizer;
    id _ownedTransitioningDelegate;
    BOOL _shouldEnsureContentControllerViewIsVisibleOnAppearance;
    BOOL __shouldAllowNilParameters;
    BOOL __shouldFlipFrameForShimDismissal;
    UIAlertAction *__defaultAlertAction;
    UIPopoverController *__compatibilityPopoverController;
}

+ (BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (id)_alertControllerWithTitle:(id)arg1 message:(id)arg2;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(int)arg3;
+ (void)_setShouldUsePresentationController:(BOOL)arg1;
+ (BOOL)_shouldUsePresentationController;
@property BOOL _shouldFlipFrameForShimDismissal; // @synthesize _shouldFlipFrameForShimDismissal=__shouldFlipFrameForShimDismissal;
@property(nonatomic, setter=_setCompatibilityPopoverController:) UIPopoverController *_compatibilityPopoverController; // @synthesize _compatibilityPopoverController=__compatibilityPopoverController;
@property(setter=_setShouldAllowNilParameters:) BOOL _shouldAllowNilParameters; // @synthesize _shouldAllowNilParameters=__shouldAllowNilParameters;
@property(setter=_setDefaultAlertAction:) UIAlertAction *_defaultAlertAction; // @synthesize _defaultAlertAction=__defaultAlertAction;
@property(readonly) int _resolvedStyle; // @synthesize _resolvedStyle;
@property(nonatomic, setter=_setShouldEnsureContentControllerViewIsVisibleOnAppearance:) BOOL _shouldEnsureContentControllerViewIsVisibleOnAppearance; // @synthesize _shouldEnsureContentControllerViewIsVisibleOnAppearance;
@property(readonly) UIAlertAction *_cancelAction; // @synthesize _cancelAction;
@property(readonly) NSMutableArray *_actions; // @synthesize _actions;
- (void)viewDidDisappear;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_removeAllTextFields;
- (id)_textFieldViewController;
- (BOOL)_hasContentToDisplay;
- (id)_containedAlertController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
@property(retain, nonatomic) UIViewController *contentViewController;
- (float)_contentVerticalInsets;
@property(readonly) UIView *_dimmingView;
@property(readonly) UIView *_foregroundView;
- (id)cancelAction;
- (void)setCancelAction:(id)arg1;
@property(copy, nonatomic, getter=_attributedMessage, setter=_setAttributedMessage:) NSAttributedString *attributedMessage;
@property(copy, nonatomic, getter=_attributedTitle, setter=_setAttributedTitle:) NSAttributedString *attributedTitle;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (BOOL)_shouldFitWidthToContentViewControllerWidth;
- (BOOL)_shouldSizeToFillSuperview;
- (id)_alertControllerContainer;
- (BOOL)_viewControllerIsPresentedInPopover:(id)arg1;
- (BOOL)_isPresentedAsPopover;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_flipFrameForShimDismissalIfNecessary;
- (void)_updateViewFrameForLandscapePresentationInShimIfNecessary;
- (int)_modalPresentationStyleForResolvedStyle;
- (void)setModalPresentationStyle:(int)arg1;
- (void)_updateModalPresentationStyle;
- (BOOL)_requiresCustomPresentationController;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)linkedAlertControllers;
- (void)unlinkAlertController:(id)arg1;
- (void)linkAlertController:(id)arg1;
- (void)_dismissAnimated:(BOOL)arg1 triggeringAction:(id)arg2 triggeredByPopoverDimmingView:(BOOL)arg3;
- (void)_dismissAnimated:(BOOL)arg1 triggeringAction:(id)arg2;
- (void)_dismissFromPopoverDimmingView;
- (void)_dismissFromBackButton:(id)arg1;
- (void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg1;
- (BOOL)_canDismissWithGestureRecognizer;
- (id)_dismissGestureRecognizer;
- (void)_clearActionHandlers;
- (void)_fireOffActionOnTargetIfValidForAction:(id)arg1;
- (BOOL)_shouldDismissAction:(id)arg1;
- (void)_actionViewTapped:(id)arg1;
- (void)_actionViewHighlightChanged:(id)arg1;
- (id)visualStyleForAlertControllerStyle:(int)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;
@property(retain, nonatomic, getter=_styleProvider, setter=_setStyleProvider:) NSObject<UIAlertControllerVisualStyleProviding> *styleProvider;
@property(readonly) BOOL _shouldProvideDimmingView;
@property(nonatomic) int preferredStyle;
- (void)_uninstallBackGestureRecognizer;
- (void)_installBackGestureRecognizer;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_resolvedStyleChanged;
- (id)_currentDescriptor;
- (void)_updateProvidedStyle;
- (void)_reevaluateResolvedStyle;
- (id)_requiredNotificationsForRemoteServices;
- (void)viewDidLayoutSubviews;
- (void)_recomputePreferredContentSize;
- (id)_alertControllerView;
- (void)viewDidLoad;
@property(readonly) BOOL _shouldAlignToKeyboard;
- (void)_updateShouldAlignToKeyboard;
- (void)loadView;
- (void)_getRotationContentSettings:(CDStruct_f39609a0 *)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)dealloc;
- (void)setTextFieldsCanBecomeFirstResponder:(BOOL)arg1;
@property(setter=_setTextFieldsHidden:) BOOL _textFieldsHidden;
- (void)_returnKeyPressedInLastTextField;
@property(readonly, nonatomic) NSArray *textFields;
- (void)addTextFieldWithConfigurationHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *actions;
- (void)_actionChanged:(id)arg1;
- (void)_addActionWithTitle:(id)arg1 image:(id)arg2 style:(int)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_addActionWithTitle:(id)arg1 style:(int)arg2 handler:(CDUnknownBlockType)arg3 shouldDismissHandler:(CDUnknownBlockType)arg4;
- (void)_addActionWithTitle:(id)arg1 style:(int)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addAction:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
