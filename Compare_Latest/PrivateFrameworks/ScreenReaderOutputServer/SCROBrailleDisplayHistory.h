/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SCROBrailleDisplayHistory : NSObject
{
    struct __CFArray *_announcements;
    struct __CFArray *_unreadSnapshot;
    long long _currentIndex;
    long long _unreadCount;
}

+ (void)initialize;
- (void)moveToMostRecent;
- (_Bool)isOnMostRecent;
- (_Bool)_moveIndexBy:(long long)arg1;
- (_Bool)moveToPrevious;
- (_Bool)moveToNext;
- (id)currentString;
- (_Bool)hasUnread;
- (void)markSnapshotAsRead;
- (void)snapshotUnread;
- (void)addString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

