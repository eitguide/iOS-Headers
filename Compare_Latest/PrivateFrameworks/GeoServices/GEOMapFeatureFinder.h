/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder;

// Not exported
@interface GEOMapFeatureFinder : GEOMapRequest
{
    CDStruct_2c43369c _coordinate;
    GEOMapTileFinder *_tileFinder;
    id _roadHandler;
    id _pointHandler;
    id _polygonHandler;
    _Bool _ignoreUnnamedFeatures;
}

@property(nonatomic) _Bool ignoreUnnamedFeatures; // @synthesize ignoreUnnamedFeatures=_ignoreUnnamedFeatures;
@property(copy, nonatomic) id polygonHandler; // @synthesize polygonHandler=_polygonHandler;
@property(copy, nonatomic) id pointHandler; // @synthesize pointHandler=_pointHandler;
@property(copy, nonatomic) id roadHandler; // @synthesize roadHandler=_roadHandler;
- (id).cxx_construct;
- (void)findFeatures:(id)arg1 pointHandler:(void)arg2 polygonHandler:(id)arg3 completionHandler:(void)arg4;
- (void)_pickRoadInTile:(id)arg1 tileRect:(const CDStruct_90e2a262 *)arg2 localPoint:(const Vec2Imp_1782d7e3 *)arg3;
@property(readonly, nonatomic) GEOMapAccess *map;
- (void)cancel;
- (void)dealloc;
- (id)initWithMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2;

@end

