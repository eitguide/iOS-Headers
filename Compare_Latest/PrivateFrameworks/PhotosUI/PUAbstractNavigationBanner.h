/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIView;

@interface PUAbstractNavigationBanner : NSObject
{
    id <PUAbstractNavigationBannerDelegate> _delegate;
}

@property(nonatomic) __weak id <PUAbstractNavigationBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *view;
@property(readonly, nonatomic) double height;

@end

