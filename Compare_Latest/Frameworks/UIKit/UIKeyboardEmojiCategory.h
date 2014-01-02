/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

// Not exported
@interface UIKeyboardEmojiCategory : NSObject
{
    int _categoryType;
    NSArray *_emoji;
    long long _lastVisibleFirstEmojiIndex;
}

+ (id)localizedStringForKey:(id)arg1;
+ (id)categoryForType:(int)arg1;
+ (id)emojiRecentsFromPreferences;
+ (_Bool)hasVariantsForEmoji:(id)arg1;
+ (id)categories;
+ (long long)numberOfCategories;
@property(nonatomic) long long lastVisibleFirstEmojiIndex; // @synthesize lastVisibleFirstEmojiIndex=_lastVisibleFirstEmojiIndex;
@property(retain) NSArray *emoji; // @synthesize emoji=_emoji;
@property int categoryType; // @synthesize categoryType=_categoryType;
- (id)description;
@property(readonly, getter=recentDescription) NSString *recentDescription;
@property(readonly, getter=displaySymbol) NSString *displaySymbol;
@property(readonly, getter=displayName) NSString *displayName;
@property(readonly, nonatomic, getter=name) NSString *name;
- (void)dealloc;
- (void)releaseCategories;

@end

