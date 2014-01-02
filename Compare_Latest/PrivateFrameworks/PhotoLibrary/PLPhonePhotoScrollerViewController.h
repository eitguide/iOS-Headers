/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibrary/PLPhotoScrollerViewController.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class UIView;

@interface PLPhonePhotoScrollerViewController : PLPhotoScrollerViewController <UINavigationControllerDelegate>
{
    _Bool _isModalTransition;
    _Bool _didDisappearUnderModalTransition;
    UIView *_viewToRemoveForSlideShow;
}

- (_Bool)_isPerformingModalTransitionFromCamera;
- (_Bool)isModalTransitioning;
- (void)beginSlideshowByRemovingView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_emailComposeSheetIsReady;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithPhotoAtIndexPath:(id)arg1 inAssetContainerList:(id)arg2 lockStatusBar:(_Bool)arg3 delayImageLoading:(_Bool)arg4;

@end

