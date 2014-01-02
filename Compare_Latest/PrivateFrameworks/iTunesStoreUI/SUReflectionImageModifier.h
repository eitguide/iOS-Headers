/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUImageModifier.h>

@class UIGradient;

@interface SUReflectionImageModifier : SUImageModifier
{
    UIGradient *_gradient;
    double _reflectionHeight;
}

@property(nonatomic) double reflectionHeight; // @synthesize reflectionHeight=_reflectionHeight;
@property(retain, nonatomic) UIGradient *gradient; // @synthesize gradient=_gradient;
- (void)drawAfterImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (struct CGRect)imageFrameForImage:(id)arg1 currentFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (struct CGSize)finalSizeForSize:(struct CGSize)arg1 originalSize:(struct CGSize)arg2;
- (void)dealloc;

@end

