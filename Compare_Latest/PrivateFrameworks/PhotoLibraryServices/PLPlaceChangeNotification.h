/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>

@class NSArray, PLPlace;

@interface PLPlaceChangeNotification : PLAssetContainerChangeNotification
{
    PLPlace *_fromPlace;
    PLPlace *_toPlace;
    NSArray *_changedObjects;
    PLAssetContainerChangeNotification *_backingNotifiation;
}

+ (id)notificationForFromPlace:(id)arg1 toPlace:(id)arg2 changedObjects:(id)arg3 fromAlbumChangeNotification:(id)arg4;
- (id)_changedObjects;
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (void)dealloc;
- (id)initWithFromPlace:(id)arg1 toPlace:(id)arg2 changedObjects:(id)arg3 fromAlbumChangeNotification:(id)arg4;
- (_Bool)titleDidChange;
- (struct NSObject *)album;
- (id)object;
- (id)init;

@end

