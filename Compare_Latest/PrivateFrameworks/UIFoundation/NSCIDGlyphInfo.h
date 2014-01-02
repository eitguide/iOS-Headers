/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIFoundation/NSGlyphInfo.h>

// Not exported
@interface NSCIDGlyphInfo : NSGlyphInfo
{
    unsigned short _cid;
    unsigned long long _collection;
}

+ (void)initialize;
+ (id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (id)initWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;

@end

