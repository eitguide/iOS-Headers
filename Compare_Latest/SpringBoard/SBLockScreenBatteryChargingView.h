/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class SBLockScreenBatteryFillView, _UIBackdropView, _UILegibilityLabel, _UILegibilitySettings;

@interface SBLockScreenBatteryChargingView : UIView
{
    UIView *_batteryContainerView;
    _UIBackdropView *_batteryBlurView;
    SBLockScreenBatteryFillView *_batteryFillView;
    _UILegibilityLabel *_chargePercentLabel;
    _UILegibilitySettings *_legibilitySettings;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (double)_chargingTextBaselineOffset;
- (id)_chargePercentFont;
- (void)layoutSubviews;
- (struct CGPoint)_batteryOrigin;
@property(nonatomic) _Bool batteryVisible;
- (void)_setChargeString:(id)arg1;
- (void)setChargePercentage:(long long)arg1 detailed:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

