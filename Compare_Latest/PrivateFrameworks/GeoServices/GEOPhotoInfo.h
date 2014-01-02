/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface GEOPhotoInfo : PBCodable <NSCopying>
{
    int _size;
    NSString *_url;
    struct {
        unsigned int size:1;
    } _has;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int size; // @synthesize size=_size;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUrl;
@property(nonatomic) _Bool hasSize;
- (void)dealloc;

@end

