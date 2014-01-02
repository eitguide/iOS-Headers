/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOLatLng;

@interface GEOLocation : PBCodable <NSCopying>
{
    double _course;
    double _heading;
    double _horizontalAccuracy;
    double _speed;
    double _timestamp;
    double _verticalAccuracy;
    int _altitude;
    GEOLatLng *_latLng;
    int _type;
    struct {
        unsigned int course:1;
        unsigned int heading:1;
        unsigned int horizontalAccuracy:1;
        unsigned int speed:1;
        unsigned int timestamp:1;
        unsigned int verticalAccuracy:1;
        unsigned int altitude:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) double course; // @synthesize course=_course;
@property(nonatomic) double heading; // @synthesize heading=_heading;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) int altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) GEOLatLng *latLng; // @synthesize latLng=_latLng;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCourse;
@property(nonatomic) _Bool hasHeading;
@property(nonatomic) _Bool hasSpeed;
@property(nonatomic) _Bool hasVerticalAccuracy;
@property(nonatomic) _Bool hasHorizontalAccuracy;
@property(nonatomic) _Bool hasAltitude;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasType;
- (void)dealloc;

@end

