/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKOverlayRenderer.h>

@interface MKTileOverlayRenderer : MKOverlayRenderer
{
}

- (void)reloadData;
- (void)drawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)canDrawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2;
- (id)initWithTileOverlay:(id)arg1;
- (id)initWithOverlay:(id)arg1;

@end

