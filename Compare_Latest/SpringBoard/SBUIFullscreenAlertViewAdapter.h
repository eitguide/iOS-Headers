/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlertViewAdapter.h"

@interface SBUIFullscreenAlertViewAdapter : SBAlertViewAdapter
{
    _Bool _revealedContentBeneathForDismiss;
    _Bool _animatingOut;
}

- (void)setAlert:(id)arg1;
- (void)setShouldAnimateIn:(_Bool)arg1;
- (void)dismiss;
- (void)updateSpringBoardInPreparationForTransparentDismiss;
- (void)viewAnimatedOut;
- (_Bool)isAnimatingOut;
- (_Bool)shouldAnimateIconsIn;
- (void)alertDisplayWillBecomeVisible;
- (_Bool)isReadyToBeRemovedFromView;
- (id)alert;

@end

