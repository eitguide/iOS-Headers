/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIBarItem.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSSet, NSString, UIColor, UIImage, UIView;

@interface UIBarButtonItem : UIBarItem <NSCoding>
{
    NSString *_title;
    NSSet *_possibleTitles;
    SEL _action;
    id _target;
    UIImage *_image;
    UIImage *_landscapeImagePhone;
    struct UIEdgeInsets _imageInsets;
    struct UIEdgeInsets _landscapeImagePhoneInsets;
    double _width;
    UIView *_view;
    long long _tag;
    id _appearanceStorage;
    struct {
        unsigned int enabled:1;
        unsigned int style:3;
        unsigned int isSystemItem:1;
        unsigned int systemItem:7;
        unsigned int viewIsCustom:1;
        unsigned int isMinibarView:1;
        unsigned int disableAutosizing:1;
        unsigned int selected:1;
        unsigned int imageHasEffects:1;
    } _barButtonItemFlags;
    _Bool _flexible;
    _Bool _viewWantsLetterpressImage;
    _Bool _needsViewUpdateForLetterpressImage;
    double _toolbarCharge;
    double _minimumWidth;
    double _maximumWidth;
    NSSet *_possibleSystemItems;
    NSDictionary *_stylesForSizingTitles;
    UIBarButtonItem *__itemVariation;
}

+ (id)_appearanceBlindViewClasses;
@property(retain, nonatomic, setter=_setItemVariation:) UIBarButtonItem *_itemVariation; // @synthesize _itemVariation=__itemVariation;
@property(readonly, nonatomic) _Bool _needsViewUpdateForLetterpressImage; // @synthesize _needsViewUpdateForLetterpressImage;
@property(readonly, nonatomic) _Bool _viewWantsLetterpressImage; // @synthesize _viewWantsLetterpressImage;
@property(copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles; // @synthesize _stylesForSizingTitles;
@property(nonatomic, setter=_setFlexible:) _Bool _flexible; // @synthesize _flexible;
@property(nonatomic, setter=_setMaximumWidth:) double _maximumWidth; // @synthesize _maximumWidth;
@property(nonatomic, setter=_setMinimumWidth:) double _minimumWidth; // @synthesize _minimumWidth;
@property(nonatomic, setter=_setToolbarCharge:) double _toolbarCharge; // @synthesize _toolbarCharge;
- (void)setTag:(long long)arg1;
- (long long)tag;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) SEL action; // @synthesize action=_action;
- (struct UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (struct UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
@property(retain, nonatomic) UIColor *tintColor;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (id)_appearanceStorage;
@property(nonatomic) _Bool selected;
@property(copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet *possibleSystemItems; // @synthesize possibleSystemItems=_possibleSystemItems;
- (void)_setSystemItem:(long long)arg1;
@property(readonly, nonatomic) long long systemItem;
@property(readonly, nonatomic) _Bool isSystemItem;
@property(retain, nonatomic) UIView *customView;
@property(copy, nonatomic) NSSet *possibleTitles;
- (id)itemVariation;
@property(copy, nonatomic, setter=_setPossibleItemVariations:) NSSet *_possibleItemVariations;
@property(nonatomic) double width;
- (struct UIEdgeInsets)imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)landscapeImagePhoneInsets;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets)arg1;
- (id)landscapeImagePhone;
- (void)setLandscapeImagePhone:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
@property(nonatomic) long long style;
- (_Bool)isEnabled;
- (void)setEnabled:(_Bool)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomView:(id)arg1;
- (id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)init;

@end

