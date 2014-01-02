/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PCPersistentTimer;

@interface VSAssetUpdateListener : NSObject
{
    _Bool _isListening;
    PCPersistentTimer *_assetCleanupTimer;
}

+ (id)sharedListener;
- (void)removeAssetForLanguage:(id)arg1;
- (_Bool)assetDownloadStatus:(id)arg1 progress:(float *)arg2 size:(long long *)arg3;
- (int)assetStatusForLanguage:(id)arg1;
- (id)downloadingAssetLanguage;
- (void)downloadAssetForLanguage:(id)arg1;
- (void)_cancelAssetCleanupTimer;
- (void)_scheduleNextCleanupForDate:(id)arg1;
- (void)_updateNextCleanupDate;
- (void)_spokenLanguageChanged:(id)arg1;
- (void)_cleanupAssets;
- (void)_flushLanguageChanges;
- (void)stopListening;
- (void)startListening;
- (void)_rescheduleAssetCleanup;
- (void)dealloc;
- (id)_initShared;
- (id)init;

@end

