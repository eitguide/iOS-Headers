/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIToolbar.h>

@interface UIToolbar (UIButtonBarPrivate)
+ (double)defaultHeightForBarSize:(int)arg1;
+ (double)defaultSelectionModeHeight;
+ (double)defaultHeight;
+ (id)defaultButtonFont;
+ (Class)defaultTextButtonClass;
+ (Class)defaultButtonClass;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (struct CGRect)_frameOfBarButtonItem:(id)arg1;
- (void)_setForceTopBarAppearance:(_Bool)arg1;
- (void)setButtonItems:(id)arg1;
- (id)buttonItems;
- (void)drawRect:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_frameOrCenterChanged;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:(_Bool)arg1 wasMinibar:(_Bool)arg2;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)animateWithDuration:(float)arg1 forButton:(int)arg2;
- (void)setOnStateForButton:(_Bool)arg1 forButton:(int)arg2;
- (_Bool)onStateForButton:(int)arg1;
- (void)setBadgeAnimated:(_Bool)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)setButtonBarTrackingMode:(int)arg1;
- (void)getVisibleButtonTags:(int *)arg1 count:(unsigned int *)arg2 maxItems:(unsigned int)arg3;
- (int)currentButtonGroup;
- (void)showButtonGroup:(int)arg1 withDuration:(double)arg2;
- (void)registerButtonGroup:(int)arg1 withButtons:(int *)arg2 withCount:(int)arg3;
- (void)showButtons:(int *)arg1 withCount:(int)arg2 withDuration:(double)arg3;
- (void)_buttonBarFinishedAnimating;
- (void)positionButtons:(id)arg1 tags:(int *)arg2 count:(int)arg3 group:(int)arg4;
- (id)createButtonWithDescription:(id)arg1;
- (id)initInView:(id)arg1 withItemList:(id)arg2;
- (id)initInView:(id)arg1 withFrame:(struct CGRect)arg2 withItemList:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_subclassImplementsDrawRect;
@end

