/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSAttributedString, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel, UIView, _UIButtonMaskAnimationView;

@interface UIButton : UIControl <NSCoding>
{
    struct __CFDictionary *_contentLookup;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _imageEdgeInsets;
    UIImageView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_titleView;
    _Bool _initialized;
    unsigned long long _lastDrawingControlState;
    struct {
        unsigned int reversesTitleShadowWhenHighlighted:1;
        unsigned int adjustsImageWhenHighlighted:1;
        unsigned int adjustsImageWhenDisabled:1;
        unsigned int autosizeToFit:1;
        unsigned int disabledDimsImage:1;
        unsigned int showsTouchWhenHighlighted:1;
        unsigned int buttonType:8;
        unsigned int shouldHandleScrollerMouseEvent:1;
        unsigned int titleFrozen:1;
    } _buttonFlags;
    _UIButtonMaskAnimationView *_maskAnimationView;
    UIView *_selectionView;
    UIFont *_lazyTitleViewFont;
    NSArray *_contentConstraints;
    struct UIEdgeInsets _internalTitlePaddingInsets;
}

+ (id)_defaultImageColorForState:(unsigned long long)arg1 button:(id)arg2;
+ (id)_defaultTitleColorForState:(unsigned long long)arg1 button:(id)arg2;
+ (id)_defaultBackgroundImageForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultImageForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_xImage;
+ (id)_minusImage;
+ (id)_checkmarkImage;
+ (id)_questionMarkImage;
+ (id)_exclamationMarkImage;
+ (id)_plusImage;
+ (id)_infoDarkImage;
+ (id)_infoLightImage;
+ (id)_detailDisclosureImage;
+ (id)_selectedIndicatorImage;
+ (void)_setVisuallyHighlighted:(_Bool)arg1 forViews:(id)arg2 initialPress:(_Bool)arg3;
+ (void)_setVisuallyHighlighted:(_Bool)arg1 forViews:(id)arg2 initialPress:(_Bool)arg3 baseAlpha:(double)arg4;
+ (id)_defaultNormalTitleShadowColor;
+ (id)_defaultNormalTitleColor;
+ (id)buttonWithType:(long long)arg1;
@property(nonatomic, setter=_setInternalTitlePaddingInsets:) struct UIEdgeInsets _internalTitlePaddingInsets; // @synthesize _internalTitlePaddingInsets;
@property(copy, nonatomic, setter=_setContentConstraints:) NSArray *_contentConstraints; // @synthesize _contentConstraints;
- (id)_letterpressStyleForState:(unsigned long long)arg1;
- (id)_attributedTitleForState:(unsigned long long)arg1;
- (id)_shadowColorForState:(unsigned long long)arg1;
- (id)_imageColorForState:(unsigned long long)arg1;
- (id)_titleColorForState:(unsigned long long)arg1;
- (id)_titleForState:(unsigned long long)arg1;
- (id)_backgroundForState:(unsigned long long)arg1 usesBackgroundForNormalState:(_Bool *)arg2;
- (id)_imageForState:(unsigned long long)arg1 usesImageForNormalState:(_Bool *)arg2;
- (void)_takeContentFromArchivableContent:(id)arg1;
- (id)_archivableContent:(id *)arg1;
- (id)_contentForState:(unsigned long long)arg1;
- (void)_setAttributedTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setBackground:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
- (void)_updateEffectsForImageView:(id)arg1 background:(_Bool)arg2;
- (_Bool)_shouldDefaultToTemplatesForImageViewBackground:(_Bool)arg1;
- (double)_drawingStrokeForState:(unsigned long long)arg1;
- (void)_setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2;
- (long long)_drawingStyleForState:(unsigned long long)arg1;
- (void)_setDrawingStyle:(long long)arg1 forState:(unsigned long long)arg2;
- (long long)_drawingStyleForStroke:(double)arg1;
- (double)_drawingStrokeForStyle:(long long)arg1;
- (struct CGRect)_highlightBounds;
- (id)image;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)_titleView;
- (id)_imageView;
- (id)_backgroundView;
- (void)_setTitleShadowOffset:(struct CGSize)arg1;
- (struct CGSize)_titleShadowOffset;
- (void)_setLineBreakMode:(long long)arg1;
- (long long)_lineBreakMode;
- (void)_setFont:(id)arg1;
- (id)_font;
- (void)_setLetterpressStyle:(id)arg1 forState:(unsigned long long)arg2;
- (void)crossfadeToImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (struct CGPoint)pressFeedbackPosition;
- (void)setShowPressFeedback:(_Bool)arg1;
- (void)setDisabledDimsImage:(_Bool)arg1;
- (_Bool)autosizesToFit;
- (void)setAutosizesToFit:(_Bool)arg1;
- (void)_setShouldHandleScrollerMouseEvent:(_Bool)arg1;
- (_Bool)_alwaysHandleScrollerMouseEvent;
- (void)_titleAttributesChanged;
- (long long)_buttonType;
- (void)_setButtonType:(long long)arg1;
- (void)_setupTitleView;
- (id)_newLabelWithFrame:(struct CGRect)arg1;
- (void)_setupImageView;
- (id)_setupBackgroundView;
- (id)_newImageViewWithFrame:(struct CGRect)arg1;
- (void)setTitleShadowOffset:(struct CGSize)arg1;
- (struct CGSize)titleShadowOffset;
- (void)setLineBreakMode:(long long)arg1;
- (long long)lineBreakMode;
- (void)setFont:(id)arg1;
- (id)font;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)viewForBaselineLayout;
- (void)updateConstraints;
- (id)_titleOrImageViewForBaselineLayout;
- (void)_setContentHuggingPriorities:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)_titleRectForContentRect:(struct CGRect)arg1 calculatePositionForEmptyTitle:(_Bool)arg2;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) NSAttributedString *currentAttributedTitle;
@property(readonly, nonatomic) UIImage *currentBackgroundImage;
@property(readonly, nonatomic) UIImage *currentImage;
@property(readonly, nonatomic) UIColor *currentTitleShadowColor;
@property(readonly, nonatomic) UIColor *_currentImageColor;
@property(readonly, nonatomic) UIColor *currentTitleColor;
@property(readonly, nonatomic) NSString *currentTitle;
- (id)attributedTitleForState:(unsigned long long)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (id)imageForState:(unsigned long long)arg1;
- (id)titleShadowColorForState:(unsigned long long)arg1;
- (id)titleColorForState:(unsigned long long)arg1;
- (id)titleForState:(unsigned long long)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect)_clippedHighlightBounds;
- (struct CGRect)_highlightRectForImageRect:(struct CGRect)arg1;
- (struct CGRect)_highlightRectForTextRect:(struct CGRect)arg1;
- (void)_setTitleFrozen:(_Bool)arg1;
- (_Bool)_isTitleFrozen;
- (void)_beginTitleAnimation;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (_Bool)_hasDrawingStyle;
- (double)_borderWidthForState:(unsigned long long)arg1 bounds:(struct CGRect)arg2;
- (id)_borderColorForState:(unsigned long long)arg1;
- (id)_fadeOutAnimationWithKeyPath:(id)arg1;
- (id)_transitionAnimationWithKeyPath:(id)arg1;
- (void)_willMoveToWindow:(id)arg1;
- (void)_setupDrawingStyleForState:(unsigned long long)arg1;
- (struct CGRect)_selectedIndicatorBounds;
- (id)_selectedIndicatorViewWithImage:(id)arg1;
- (double)_selectedIndicatorAlpha;
- (void)_updateSelectionViewForState:(unsigned long long)arg1;
- (void)_setupPressednessForState:(unsigned long long)arg1;
- (void)_updateMaskState;
- (_Bool)_hasHighlightColor;
- (double)_highlightCornerRadius;
- (struct UIEdgeInsets)_outsetInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_pathImageEdgeInsets;
- (struct UIEdgeInsets)_pathTitleEdgeInsets;
- (void)tintColorDidChange;
- (_Bool)_isModernButton;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
@property(readonly, nonatomic) UIImageView *imageView;
@property(readonly, nonatomic) UILabel *titleLabel;
- (_Bool)_likelyToHaveTitle;
- (_Bool)_canHaveTitle;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @dynamic imageEdgeInsets;
@property(nonatomic) _Bool showsTouchWhenHighlighted;
@property(nonatomic) _Bool adjustsImageWhenDisabled; // @dynamic adjustsImageWhenDisabled;
@property(nonatomic) _Bool adjustsImageWhenHighlighted; // @dynamic adjustsImageWhenHighlighted;
@property(nonatomic) _Bool reversesTitleShadowWhenHighlighted; // @dynamic reversesTitleShadowWhenHighlighted;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @dynamic titleEdgeInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @dynamic contentEdgeInsets;
- (void)_applyAppropriateChargeForButtonType;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) long long buttonType;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)_invalidateContentConstraints;
- (struct UIEdgeInsets)_combinedContentPaddingInsets;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;

@end

