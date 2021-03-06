//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface SKUISoftwareSwooshCellLayout : SKUIItemCellLayout
{
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    UILabel *_itemCountLabel;
    struct CGSize _maxImageSize;
    UIImageView *_overlayImageView;
    UILabel *_priceLabel;
    UIColor *_primaryTextColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    unsigned int _visibleFields;
}

@property(nonatomic) unsigned int visibleFields; // @synthesize visibleFields=_visibleFields;
@property(nonatomic) struct CGSize maxImageSize; // @synthesize maxImageSize=_maxImageSize;
- (void).cxx_destruct;
- (void)_removeOverlay;
- (void)_reloadHighlight;
- (void)_reloadPriceLabel;
- (id)_newDefaultLabel;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setItemState:(id)arg1 animated:(BOOL)arg2;
- (void)setItemOffer:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *price;
@property(copy, nonatomic) NSString *itemCountString;
- (void)setColoringWithColorScheme:(id)arg1;
@property(copy, nonatomic) NSString *category;
@property(copy, nonatomic) NSString *artistName;
- (struct CGSize)cellSizeForImageOfSize:(struct CGSize)arg1;
- (id)initWithCollectionViewCell:(id)arg1;

@end

