/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEORPResolution, NSString;

@interface GEORPProblemStatus : PBCodable <NSCopying>
{
    double _creationDate;
    NSString *_problemID;
    GEORPResolution *_problemResolution;
    int _problemState;
    struct {
        unsigned int creationDate:1;
        unsigned int problemState:1;
    } _has;
}

@property(retain, nonatomic) GEORPResolution *problemResolution; // @synthesize problemResolution=_problemResolution;
@property(nonatomic) int problemState; // @synthesize problemState=_problemState;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *problemID; // @synthesize problemID=_problemID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasProblemResolution;
@property(nonatomic) _Bool hasProblemState;
@property(nonatomic) _Bool hasCreationDate;
@property(readonly, nonatomic) _Bool hasProblemID;
- (void)dealloc;

@end

