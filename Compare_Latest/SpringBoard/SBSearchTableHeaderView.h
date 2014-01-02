/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UILabel;

@interface SBSearchTableHeaderView : UIView
{
    UILabel *_titleLabel;
    UIView *_separatorView;
    NSString *_reuseIdentifier;
}

+ (double)heightForContentSizeCategory:(id)arg1;
+ (double)titleBaselineFromBottomForContentSizeCategory:(id)arg1;
+ (id)lineColor;
@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (_Bool)isUserInteractionEnabled;
- (void)dealloc;
@property(retain, nonatomic) NSString *title;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

@end

