/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3Container, ML3DatabaseMetadata, ML3MusicLibrary_SQLiteDatabaseContext, ML3NondurableWriteSet, ML3UbiquitousDatabase, NSArray, NSMutableArray, NSString;

@interface ML3MusicLibrary : NSObject
{
    ML3MusicLibrary_SQLiteDatabaseContext *_mainDatabaseContext;
    ML3MusicLibrary_SQLiteDatabaseContext *_backgroundDatabaseContext;
    ML3UbiquitousDatabase *_ubiquitousDatabase;
    struct dispatch_queue_s *_backgroundQueue;
    struct _opaque_pthread_t {
        long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[596];
    } *_backgroundQueueOwner;
    NSString *_path;
    NSMutableArray *_pendingNotifyPostNames;
    NSString *_notifyName;
    int _notifyToken;
    NSString *_nonContentsNotifyName;
    int _nonContentsNotifyToken;
    NSString *_displayValuesNotifyName;
    int _displayValuesNotifyToken;
    NSString *_syncGenerationNotifyName;
    int _syncGenerationNotifyToken;
    BOOL _enableWrites;
    BOOL _requiresProcessAssertion;
    int _backupDisabledCount;
    BOOL _backupNeeded;
    BOOL _hasEverConnectedToDatabase;
    id _mcSettingsObserver;
    struct dispatch_queue_s *_nondurableConcurrentQueue;
    ML3NondurableWriteSet *_nondurableWriteSet;
    NSString *_artworkDirectory;
    char _artworkDirectoryFilesystemRepresentation[1024];
}

+ (unsigned int)readableArtworkFormatIDForArtworkFormatID:(unsigned int)arg1;
+ (struct MLArtworkFormatSpec)artworkFormatSpecForArtworkFormatID:(unsigned int)arg1;
+ (id)_autoFillTrackPredicate;
+ (void)enumerateSortMapTablesUsingBlock:(id)arg1;
+ (id)sectionIndexTitleForSectionHeader:(id)arg1;
+ (id)sectionIndexTitles;
+ (id)localizedSectionIndexTitleForSectionHeader:(id)arg1;
+ (id)localizedSectionHeaderForSectionHeader:(id)arg1;
+ (BOOL)executeSQL:(id)arg1 usingHandle:(struct sqlite3 *)arg2;
+ (BOOL)executeSQL:(id)arg1 usingHandle:(struct sqlite3 *)arg2 waitIfBusy:(BOOL)arg3;
+ (void)_stepStatement:(struct sqlite3_stmt *)arg1 hasRow:(char *)arg2 didFinish:(char *)arg3;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg1;
+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg1;
+ (void)closeDatabaseHandle:(struct sqlite3 *)arg1;
+ (struct sqlite3 *)_openedDatabaseHandleForPath:(id)arg1 enableWrites:(BOOL)arg2 forLibrary:(id)arg3;
+ (struct sqlite3 *)openedDatabaseHandleForPath:(id)arg1 enableWrites:(BOOL)arg2;
+ (id)mainDatabasePath;
+ (id)sharedLibrary;
+ (void)setImportationEnabled:(BOOL)arg1;
+ (BOOL)importationEnabled;
+ (void)initialize;
@property(readonly, nonatomic) BOOL hasEverConnectedToDatabase; // @synthesize hasEverConnectedToDatabase=_hasEverConnectedToDatabase;
@property(readonly) NSString *path; // @synthesize path=_path;
- (void)removeOrphanedTracks;
- (void)_scheduleCommitNondurableWritesAfterTimeInterval:(double)arg1;
- (BOOL)_commitNondurableWrites;
- (void)applyUbiquitousBookmarksToTrack:(id)arg1;
- (void)updateUbiquitousBookmarksFromTrack:(id)arg1;
- (void)updateUbiquitousBookmarksWithKey:(id)arg1 bookmarkTime:(id)arg2 timestamp:(double)arg3;
- (double)timestampForAppliedUbiquitousBookmarkKey:(id)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (id)appleIDForDSID:(unsigned long long)arg1;
- (BOOL)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2;
- (void)_accessAccountCacheDBForSQL:(id)arg1 usingBlock:(id)arg2;
- (BOOL)migrateLegacyArtworkFromArtworkBlobFilePath:(id)arg1;
- (BOOL)compactArtwork;
- (BOOL)deleteArtworkForCacheID:(id)arg1;
- (BOOL)deleteAllArtwork;
- (BOOL)insertArtworkWithImageData:(id)arg1 forCacheID:(id)arg2;
- (BOOL)_insertImageBytes:(const void *)arg1 length:(unsigned long)arg2 forCacheID:(id)arg3 formatID:(unsigned int)arg4 imageSubRect:(struct CGRect)arg5;
- (BOOL)_writeImageBytes:(const void *)arg1 length:(unsigned long)arg2 formatID:(unsigned int)arg3 cacheID:(id)arg4;
- (BOOL)hasArtworkForCacheID:(id)arg1 ensureArtworkFileExists:(BOOL)arg2;
- (BOOL)hasArtworkForCacheID:(id)arg1;
- (void)loadArtworkForCacheID:(id)arg1 formatID:(unsigned int)arg2 completionHandler:(id)arg3;
- (id)artworkDataForCacheID:(id)arg1 formatID:(unsigned int)arg2;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1;
@property(readonly) long long autoFilledTracksTotalSize;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 usingBlock:(id)arg2;
@property long long syncGenerationID;
@property(readonly) long long currentRevision;
@property(readonly) long long persistentID;
- (BOOL)updateSortMap;
- (long long)addStringToSortMap:(id)arg1;
- (BOOL)isReadable;
- (BOOL)_mustProcessLanguageChange;
@property(readonly) BOOL mediaRestrictionEnabled;
- (void)_postDisplayValuesChangeNotificationLocalOnly:(BOOL)arg1;
- (void)_postNonContentsChangeNotificationAndScheduleFlushLocalOnly:(BOOL)arg1;
- (void)_postChangeNotificationAndScheduleFlushLocalOnly:(BOOL)arg1;
- (void)_delayableNotifyPost:(id)arg1;
- (void)savePlaylistsSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (void)savePlaylists;
- (void)saveTrackMetadataSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (void)saveTrackMetadata;
@property(readonly) NSArray *preferredSubtitleTracks;
@property(readonly) NSArray *preferredAudioTracks;
@property(readonly) ML3DatabaseMetadata *databaseInfo;
@property(readonly) ML3Container *purchasedTracksPlaylist;
- (void)notifyDisplayValuesPropertyDidChange;
- (void)notifyNonContentsPropertyDidChange;
- (void)notifyContentsDidChange;
- (unsigned int)sectionIndexTitleIndexForSectionIndex:(unsigned int)arg1;
- (id)localizedSectionHeaderForSectionIndex:(unsigned int)arg1;
@property(readonly) NSArray *localizedSectionIndexTitles;
- (void)performTransactionKind:(int)arg1 waitIfBusy:(BOOL)arg2 withBlock:(id)arg3;
- (void)performTransactionKind:(int)arg1 withBlock:(id)arg2;
- (void)performTransactionAllowingWrites:(BOOL)arg1 withBlock:(id)arg2;
- (void)performTransactionWithBlock:(id)arg1;
@property(readonly, nonatomic, getter=isNondurableWritingActive) BOOL nondurableWritingActive;
- (void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(id)arg3;
- (void)prepareStatementForSQL:(id)arg1 usingBlock:(id)arg2;
- (id)groupingKeyForString:(id)arg1;
- (void)accessSortKeyBuilder:(id)arg1;
- (void)accessDatabaseUsingBlock:(id)arg1;
- (void)_accessDatabaseContextUsingBlock:(id)arg1;
- (void)reconnectToDatabase;
- (void)_dispatchBackgroundAsynchronouslyUsingBlock:(id)arg1;
- (void)_dispatchBackgroundSynchronouslyUsingBlock:(id)arg1;
- (void)_onBackgroundQueuePerformBlock:(id)arg1;
- (void)reconnectBackgroundDatabaseContext;
- (void)reconnectMainDatabaseContext;
- (id)backgroundQueue_backgroundDatabaseContext;
- (id)mainDatabaseContext;
- (BOOL)populateStaticItemsOfDynamicContainers;
- (BOOL)executeSQL:(id)arg1;
@property(readonly) BOOL requiresPostProcessing;
- (struct sqlite3 *)openedDatabaseHandle;
- (void)dealloc;
- (id)ubiquitousDatabase;
@property(readonly, nonatomic) BOOL writable;
- (void)updateTrackIntegrity;
- (void)migratePresignedValidity;
- (id)initWithPath:(id)arg1 enableWrites:(BOOL)arg2;

@end

