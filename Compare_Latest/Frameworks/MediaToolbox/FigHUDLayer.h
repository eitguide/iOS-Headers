/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@interface FigHUDLayer : CALayer
{
    struct __CTFont *_Font;
    double _FontSize;
    struct __CFDictionary *_TextAttributes;
    struct __CFArray *_Labels;
    struct __CFArray *_Values;
    struct __CFArray *_LabelColors;
    struct __CFArray *_ValueColors;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (void)setValueAtIndex:(int)arg1 format:(id)arg2;
- (void)setValue:(struct __CFString *)arg1 atIndex:(int)arg2;
- (struct __CFArray *)getLabels;
- (struct __CFArray *)getValues;
- (long long)addLine:(struct __CFString *)arg1 withLabelColorIndex:(int)arg2 withValueColorIndex:(int)arg3;
- (long long)addLine:(struct __CFString *)arg1 withColorIndex:(int)arg2;
- (void)resetLines;
- (void)setFont:(struct __CFString *)arg1 withPointSize:(double)arg2;
- (void)dealloc;
- (id)init;

@end

