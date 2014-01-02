/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class UIImageView, UIView;

@interface RemoteUITableViewCell : UITableViewCell
{
    UIImageView *_invalidRowView;
    _Bool _forceFullDetailLabel;
    _Bool _leftAlignDetailLabel;
    long long _remoteUIAccessoryType;
    UIView *_remoteUIAccessoryView;
}

@property(retain, nonatomic) UIView *remoteUIAccessoryView; // @synthesize remoteUIAccessoryView=_remoteUIAccessoryView;
@property(nonatomic) long long remoteUIAccessoryType; // @synthesize remoteUIAccessoryType=_remoteUIAccessoryType;
@property(nonatomic) _Bool leftAlignDetailLabel; // @synthesize leftAlignDetailLabel=_leftAlignDetailLabel;
@property(nonatomic) _Bool forceFullSizeDetailLabel; // @synthesize forceFullSizeDetailLabel=_forceFullDetailLabel;
- (void)dealloc;
- (void)setRowInvalid:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_accessoriesChanged;

@end

