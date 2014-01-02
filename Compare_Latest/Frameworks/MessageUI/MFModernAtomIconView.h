/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSArray;

@interface MFModernAtomIconView : UIView
{
    NSArray *_iconImages;
    double _iconPadding;
    struct CGPoint _drawingOffset;
}

@property(nonatomic) struct CGPoint drawingOffset; // @synthesize drawingOffset=_drawingOffset;
@property(nonatomic) double iconPadding; // @synthesize iconPadding=_iconPadding;
@property(retain, nonatomic) NSArray *iconImages; // @synthesize iconImages=_iconImages;
- (double)preferredWidth;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

