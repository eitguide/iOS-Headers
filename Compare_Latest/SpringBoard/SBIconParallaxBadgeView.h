/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBIconBadgeView.h"

#import "_UISettingsKeyObserver-Protocol.h"

@class SBFParallaxSettings;

@interface SBIconParallaxBadgeView : SBIconBadgeView <_UISettingsKeyObserver>
{
    SBFParallaxSettings *_parallaxSettings;
}

- (void)_applyParallaxSettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end

