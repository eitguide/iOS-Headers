/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class SUReflectionView, UIImageView;

@interface SUReflectionImageView : UIView
{
    double _reflectionHeight;
    double _spacing;
    double _reflectionAlpha;
    _Bool _useImageSize;
    unsigned int _nonSquareImage:1;
    UIImageView *_imageView;
    SUReflectionView *_reflection;
}

@property(nonatomic) double reflectionSpacing; // @synthesize reflectionSpacing=_spacing;
- (void)setUseImageSize:(_Bool)arg1;
- (void)setReflectionVisible:(_Bool)arg1;
- (void)setReflectionAlphaWhenVisible:(double)arg1;
@property(nonatomic) _Bool nonSquareImage;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)initWithReflectionHeight:(double)arg1 spacing:(double)arg2;
- (id)init;

@end

