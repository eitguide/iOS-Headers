//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GEORoute.h"

@interface GEORoute (MKGeoServicesExtras)
- (double)distanceBetweenStep:(id)arg1 andStep:(id)arg2;
- (double)distanceBetweenLocation:(CDStruct_c3b9c2ee)arg1 nextPointIndex:(unsigned int)arg2 toPointIndex:(unsigned int)arg3;
- (double)distanceBetweenRoutePointIndex:(unsigned int)arg1 toPointIndex:(unsigned int)arg2;
- (struct CGImage *)_mapKitImage;
@end

