//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOAttributeKeyValue : PBCodable <NSCopying>
{
    NSString *_attributeKey;
    NSString *_attributeValue;
}

@property(retain, nonatomic) NSString *attributeValue; // @synthesize attributeValue=_attributeValue;
@property(retain, nonatomic) NSString *attributeKey; // @synthesize attributeKey=_attributeKey;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end
