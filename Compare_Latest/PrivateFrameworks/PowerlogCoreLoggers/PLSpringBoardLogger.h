/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PLLogger.h"

@interface PLSpringBoardLogger : PLLogger
{
    int blankStateToken;
    int lockStateToken;
    int lastBlankState;
    int lastLockState;
}

- (void)_noteScreenTimeChanged:(id)arg1;
- (void)log;
- (void)logSpringboardNotifications;
- (void)logWallPaperChange;
- (void)dealloc;
- (id)init;

@end

