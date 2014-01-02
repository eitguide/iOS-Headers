/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class UIColor, UIImage;

@interface RUCountdownFillLayer : CALayer
{
    UIImage *_fillImage;
    double _fillShadowBlur;
    UIColor *_fillShadowColor;
    double _fillValue;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(nonatomic) double fillValue; // @synthesize fillValue=_fillValue;
@property(retain, nonatomic) UIColor *fillShadowColor; // @synthesize fillShadowColor=_fillShadowColor;
@property(nonatomic) double fillShadowBlur; // @synthesize fillShadowBlur=_fillShadowBlur;
@property(retain, nonatomic) UIImage *fillImage; // @synthesize fillImage=_fillImage;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithLayer:(id)arg1;

@end

