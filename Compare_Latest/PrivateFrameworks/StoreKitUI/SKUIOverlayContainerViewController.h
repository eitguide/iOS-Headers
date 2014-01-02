/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSMutableArray, UIControl, UITapGestureRecognizer;

@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate>
{
    UIControl *_backstopView;
    _Bool _isAdjustingViewsForDismiss;
    long long _selectedViewControllerIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_viewControllers;
}

@property(readonly, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (id)_viewControllerForPoint:(struct CGPoint)arg1;
- (void)_slideInViewController:(id)arg1 withCompletionBlock:(id)arg2;
- (id)_selectedViewController;
- (void)_removeChildren;
- (void)_pushViewController:(id)arg1;
- (void)_positionViewControllersForOrientation:(long long)arg1;
- (void)_popViewControllers;
- (double)_overlaySpacingForOrientation:(long long)arg1;
- (long long)_indexOfViewControllerForPoint:(struct CGPoint)arg1;
- (struct CGRect)_frameToCenterViewController:(id)arg1;
- (void)_fadeInViewController:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_frameAction:(id)arg1;
- (void)_tapAction:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)loadView;
- (void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(id)arg3;
- (void)showViewControllers:(id)arg1;
- (void)showViewController:(id)arg1 withCompletionBlock:(id)arg2;
- (void)dismissWithFadeTransitionCompletionBlock:(id)arg1;
- (void)dismissWithFlipTransition:(id)arg1 completionBlock:(id)arg2;
@property(readonly, nonatomic) UIControl *backstopControl;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

