/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIColor;

@interface SKUIGiftDashView : UIView
{
    UIColor *_dashColor;
    struct CGSize _dashSize;
    double _dashSpacing;
}

@property(nonatomic) double dashSpacing; // @synthesize dashSpacing=_dashSpacing;
@property(nonatomic) struct CGSize dashSize; // @synthesize dashSize=_dashSize;
@property(copy, nonatomic) UIColor *dashColor; // @synthesize dashColor=_dashColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

