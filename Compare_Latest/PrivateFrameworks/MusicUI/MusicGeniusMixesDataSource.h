/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicUI/MusicQueryDataSource.h>

@class NSMutableArray;

@interface MusicGeniusMixesDataSource : MusicQueryDataSource
{
    NSMutableArray *_mixes;
}

- (void).cxx_destruct;
- (_Bool)_updateQueryPredicatesAndOrdering;
- (_Bool)showsIndexBar;
- (id)playbackContextForIndex:(unsigned long long)arg1;
- (void)invalidateWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3;
- (_Bool)isEmpty;
- (unsigned long long)indexOfEntity:(id)arg1;
- (_Bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1;
- (id)entities;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;
- (void)deleteEntityAtIndex:(unsigned long long)arg1;
- (id)dataSourceFromEntityAtIndex:(unsigned long long)arg1;
- (_Bool)canSelectEntityAtIndex:(unsigned long long)arg1;

@end

