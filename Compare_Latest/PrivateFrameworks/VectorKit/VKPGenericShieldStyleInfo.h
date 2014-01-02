/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

// Not exported
@interface VKPGenericShieldStyleInfo : PBCodable
{
    CDStruct_fae3dc92 _textDropShadowOffsets;
    unsigned int _backgroundColor;
    unsigned int _borderColor;
    int _style;
    unsigned int _textColor;
    unsigned int _textDropShadowColor;
    float _textDropShadowSize;
    unsigned int _textStrokeColor;
    float _textStrokeSize;
    struct {
        unsigned int backgroundColor:1;
        unsigned int borderColor:1;
        unsigned int style:1;
        unsigned int textColor:1;
        unsigned int textDropShadowColor:1;
        unsigned int textDropShadowSize:1;
        unsigned int textStrokeColor:1;
        unsigned int textStrokeSize:1;
    } _has;
}

@property(nonatomic) float textDropShadowSize; // @synthesize textDropShadowSize=_textDropShadowSize;
@property(nonatomic) unsigned int textStrokeColor; // @synthesize textStrokeColor=_textStrokeColor;
@property(nonatomic) float textStrokeSize; // @synthesize textStrokeSize=_textStrokeSize;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTextDropShadowColor;
@property(nonatomic) unsigned int textDropShadowColor; // @synthesize textDropShadowColor=_textDropShadowColor;
@property(nonatomic) _Bool hasTextDropShadowSize;
- (void)setTextDropShadowOffsets:(float *)arg1 count:(unsigned long long)arg2;
- (float)textDropShadowOffsetAtIndex:(unsigned long long)arg1;
- (void)addTextDropShadowOffset:(float)arg1;
- (void)clearTextDropShadowOffsets;
@property(readonly, nonatomic) float *textDropShadowOffsets;
@property(readonly, nonatomic) unsigned long long textDropShadowOffsetsCount;
@property(nonatomic) _Bool hasTextStrokeColor;
@property(nonatomic) _Bool hasTextStrokeSize;
@property(nonatomic) _Bool hasTextColor;
@property(nonatomic) unsigned int textColor; // @synthesize textColor=_textColor;
@property(nonatomic) _Bool hasBorderColor;
@property(nonatomic) unsigned int borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) _Bool hasBackgroundColor;
@property(nonatomic) unsigned int backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool hasStyle;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)dealloc;

@end

