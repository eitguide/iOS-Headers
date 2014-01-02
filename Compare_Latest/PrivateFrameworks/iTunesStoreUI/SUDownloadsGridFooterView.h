/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSArray, NSMutableArray, SULinkControl;

@interface SUDownloadsGridFooterView : UIView
{
    SULinkControl *_linkControl;
    NSMutableArray *_nativeButtons;
    NSArray *_scriptButtons;
}

@property(retain, nonatomic) NSArray *scriptButtons; // @synthesize scriptButtons=_scriptButtons;
- (void)_reloadNativeButtons;
- (id)_newNativeButton;
- (double)_maximumButtonHeight;
- (void)_linkControlAction:(id)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

