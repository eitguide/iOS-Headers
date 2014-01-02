/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MPAVPlaylistFeeder <NSObject>
@property(readonly, nonatomic) unsigned long long nonRepeatingItemCount;
@property(readonly, nonatomic) unsigned long long itemCount;
@property(readonly, nonatomic) unsigned long long initialPlaybackQueueDepth;
- (_Bool)shouldReloadForChangeFromNetworkType:(long long)arg1 toNetworkType:(long long)arg2;
- (id)itemForIndex:(unsigned long long)arg1;
- (_Bool)hasItemForIndex:(unsigned long long)arg1;
- (void)assumeOwnershipOfItems:(id)arg1;
@end

