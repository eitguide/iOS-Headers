/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface MFPStringFormat : NSObject
{
    int mAlignment;
    unsigned short mDigitSubstitutionLanguage;
    int mDigitSubstitutionMethod;
    unsigned int mFormatFlags;
    int mHotkeyPrefix;
    int mLineAlignment;
    float mFirstTabOffset;
    int mTabStopCount;
    float *mTabStops;
    int mTrimming;
}

- (void)setTrimming:(int)arg1;
- (int)trimming;
- (void)setTabStops:(const float *)arg1 count:(int)arg2;
- (const float *)tabStops;
- (int)tabStopCount;
- (void)setFirstTabOffset:(float)arg1;
- (float)firstTabOffset;
- (void)setLineAlignment:(int)arg1;
- (int)lineAlignment;
- (void)setHotkeyPrefix:(int)arg1;
- (int)hotkeyPrefix;
- (void)setFormatFlags:(unsigned int)arg1;
- (unsigned int)formatFlags;
- (void)setDigitSubstitutionMethod:(int)arg1;
- (int)digitSubstitutionMethod;
- (void)setDigitSubstitutionLanguage:(unsigned short)arg1;
- (unsigned short)digitSubstitutionLanguage;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (void)dealloc;
- (id)init;

@end

