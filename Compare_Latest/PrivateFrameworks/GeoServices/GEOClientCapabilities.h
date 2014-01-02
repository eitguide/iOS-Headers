/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface GEOClientCapabilities : PBCodable <NSCopying>
{
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_hardwareModel;
    int _maxManeuverTypeSupported;
    struct {
        unsigned int maxManeuverTypeSupported:1;
    } _has;
}

@property(retain, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(retain, nonatomic) NSString *appMinorVersion; // @synthesize appMinorVersion=_appMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion; // @synthesize appMajorVersion=_appMajorVersion;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMaxManeuverTypeSupported;
@property(nonatomic) int maxManeuverTypeSupported; // @synthesize maxManeuverTypeSupported=_maxManeuverTypeSupported;
@property(readonly, nonatomic) _Bool hasHardwareModel;
@property(readonly, nonatomic) _Bool hasAppMinorVersion;
@property(readonly, nonatomic) _Bool hasAppMajorVersion;
- (void)dealloc;

@end

