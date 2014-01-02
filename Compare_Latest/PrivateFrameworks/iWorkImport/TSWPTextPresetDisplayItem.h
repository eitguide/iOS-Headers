/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, TSWPTextStylePreset;

// Not exported
@interface TSWPTextPresetDisplayItem : NSObject
{
    TSWPTextStylePreset *_preset;
    NSString *_displayName;
}

@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) TSWPTextStylePreset *preset; // @synthesize preset=_preset;
- (id)description;
- (void)saveToArchive:(struct TextPresetDisplayItemArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TextPresetDisplayItemArchive *)arg1 unarchiver:(id)arg2;
- (void)dealloc;
- (id)initWithPreset:(id)arg1 displayName:(id)arg2;

@end

