/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UIModalItemContentView.h"

#import "RUTrackActioning-Protocol.h"
#import "RUTrackActionsDelegate-Protocol.h"

@class NSString, RUTrackActionsView, UIImage, _UIBackdropView;

@interface _RUTrackActionsModalItemContentView : _UIModalItemContentView <RUTrackActioning, RUTrackActionsDelegate>
{
    _UIBackdropView *_backdropView;
    RUTrackActionsView *_trackActionsView;
    id <RUTrackActionsDelegate> _trackActionsDelegate;
}

+ (struct CGSize)artworkSize;
@property(nonatomic) __weak id <RUTrackActionsDelegate> trackActionsDelegate; // @synthesize trackActionsDelegate=_trackActionsDelegate;
- (void).cxx_destruct;
- (void)trackActioningObjectDidChangeContentSize:(id)arg1;
- (void)trackActioningObject:(id)arg1 didSelectAction:(long long)arg2 atIndex:(long long)arg3;
@property(copy, nonatomic) NSString *songText;
@property(nonatomic) long long onActions;
@property(nonatomic) long long enabledActions;
@property(retain, nonatomic) UIImage *artworkImage;
@property(copy, nonatomic) NSString *artistText;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) long long cancelIndex;
- (long long)actionForButtonIndex:(long long)arg1;
- (void)_layoutViewHierarchy;
- (void)setPresentingViewController:(id)arg1;
- (void)setModalItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

