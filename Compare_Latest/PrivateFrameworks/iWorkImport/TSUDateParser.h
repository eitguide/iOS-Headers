/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

// Not exported
@interface TSUDateParser : NSObject
{
    NSMutableArray *mFormatCategories;
    struct __CFLocale *mLocale;
    _Bool mIsJapaneseLocale;
    struct __CFDateFormatter *mSpecialCaseFormatter;
}

+ (id)parserForDefaultLocale;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 successfulFormatString:(const struct __CFString **)arg2;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 preferredFormatString:(struct __CFString *)arg2 successfulFormatString:(const struct __CFString **)arg3 tryAggressiveFormats:(_Bool)arg4;
- (struct __CFDate *)newDateFromStringTryingFormats:(struct __CFString *)arg1 locale:(struct __CFLocale *)arg2 formats:(id)arg3 outSuccessfulFormatString:(const struct __CFString **)arg4;
- (struct __CFDateFormatter *)specialCaseDateFormatterForLocale:(struct __CFLocale *)arg1;
- (void)dealloc;
- (id)initWithLocale:(struct __CFLocale *)arg1;

@end

