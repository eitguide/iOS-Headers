/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOVoltaireMultiTileDownloader.h>

// Not exported
@interface GEOVoltaire3DMultiTileDownloader : GEOVoltaireMultiTileDownloader
{
}

- (struct _GEOTileKey)_tileKeyForURL:(id)arg1 edition:(unsigned int *)arg2 isLocalized:(_Bool *)arg3;
- (id)_localizationURLIfNecessaryForTileKey:(struct _GEOTileKey *)arg1;
- (id)_urlForTileKey:(struct _GEOTileKey *)arg1;
- (id)_baseURLStringForTileKey:(struct _GEOTileKey *)arg1;

@end

