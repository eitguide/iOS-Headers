/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUGradientButton.h>

@class NSString, UIImageView;

@interface SUReviewsButton : SUGradientButton
{
    UIImageView *_disclosureView;
    float _userRating;
    long long _userRatingCount;
    NSString *_userRatingCountString;
}

@property(retain, nonatomic) NSString *userRatingCountString; // @synthesize userRatingCountString=_userRatingCountString;
@property(nonatomic) long long userRatingCount; // @synthesize userRatingCount=_userRatingCount;
@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (void)reloadView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

