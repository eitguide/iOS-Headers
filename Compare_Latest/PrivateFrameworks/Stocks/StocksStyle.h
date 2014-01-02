/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIColor, UIFont;

@interface StocksStyle : NSObject
{
    UIColor *_chartHighlightColor;
    UIFont *_mainFont;
    UIFont *_chartLabelFont;
}

+ (id)sharedStyle;
- (void).cxx_destruct;
- (id)chartLabelFont;
- (id)boldFontOfSize:(double)arg1;
- (id)mediumFontOfSize:(double)arg1;
- (id)fontOfSize:(double)arg1;
- (id)lightFontOfSize:(double)arg1;
- (id)chartHighlightColor;
- (id)lossColor;
- (id)gainColor;
- (void)resetLocale;
- (void)dealloc;
- (id)init;

@end

