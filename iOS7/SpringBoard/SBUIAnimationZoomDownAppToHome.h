/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBUIAnimationZoomDownApp.h"

@class SBIconZoomAnimator;

@interface SBUIAnimationZoomDownAppToHome : SBUIAnimationZoomDownApp
{
    SBIconZoomAnimator *_zoomAnimator;
}

- (void)cleanupZoom;
- (void)animateZoomWithCompletion:(id)arg1;
- (_Bool)_shouldUpdateStatusBarOnContentRestore;
- (void)prepareZoom;
- (void)dealloc;

@end

