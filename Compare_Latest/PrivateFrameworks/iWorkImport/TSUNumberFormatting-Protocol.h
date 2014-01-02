/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"
#import "TSUDataFormat-Protocol.h"

@protocol TSUNumberFormatting <TSUDataFormat, NSObject>
- (_Bool)isEquivalent:(id)arg1;
- (id)stringFromString:(id)arg1;
- (id)chartLabelStringFromDouble:(double)arg1;
- (id)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3;
- (id)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2;
- (id)stringFromDouble:(double)arg1;
- (_Bool)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1;
- (_Bool)usesTabs;
- (_Bool)hasValidDecimalPlaces;
- (void)setFormatName:(id)arg1;
- (_Bool)baseUseMinusSign;
- (unsigned short)basePlaces;
- (unsigned short)base;
- (_Bool)customFormatShouldAutoInsertPercentSymbol;
- (_Bool)usesTextFormatForValue:(double)arg1;
- (_Bool)canFormatText;
- (_Bool)isTextFormat;
- (double)scaleFactor;
- (_Bool)usesAccountingStyle;
- (int)fractionAccuracy;
- (_Bool)showThousandsSeparator;
- (int)negativeStyle;
- (id)currencyCode;
- (id)formatString;
- (id)suffixString;
- (unsigned short)decimalPlaces;
- (int)valueType;
- (id)customNumberFormatTokens;
- (_Bool)isCustom;
- (id)formatName;
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1 andNegativeStyle:(int)arg2;
- (id)numberFormatBySettingUseAccountingStyle:(_Bool)arg1;
- (id)numberFormatBySettingFractionAccuracy:(int)arg1;
- (id)numberFormatBySettingShowThousandsSeparator:(_Bool)arg1;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (id)numberFormatBySettingSuffixString:(id)arg1;
- (id)numberFormatBySettingCurrencyCode:(id)arg1;
- (id)numberFormatByIncrementingDecimalPlaces:(short)arg1;
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1;
- (id)numberFormatBySettingValueType:(int)arg1;
@end

