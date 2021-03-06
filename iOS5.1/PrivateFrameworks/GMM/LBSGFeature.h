/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class LBSGAddress, LBSGLatLng, LBSGRectangle, NSString;

@interface LBSGFeature : PBCodable
{
    NSString *_name;
    int _featureType;
    LBSGAddress *_address;
    LBSGRectangle *_bounds;
    LBSGLatLng *_center;
}

@property(retain, nonatomic) LBSGLatLng *center; // @synthesize center=_center;
@property(retain, nonatomic) LBSGRectangle *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) LBSGAddress *address; // @synthesize address=_address;
@property(nonatomic) int featureType; // @synthesize featureType=_featureType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCenter;
@property(readonly, nonatomic) BOOL hasBounds;
- (void)dealloc;

@end

