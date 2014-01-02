/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_semaphore>, NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSURL, PFUbiquityBaseline, PFUbiquityContainerIdentifier, PFUbiquityKnowledgeVector, PFUbiquityLocation, PFUbiquityMigrationAssistant, PFUbiquityMigrationManager, PFUbiquityPeerReceipt, PFUbiquityPeerState, PFUbiquityStoreMetadata, PFUbiquitySwitchboardEntry, _PFUbiquityStack;

// Not exported
@interface PFUbiquitySetupAssistant : NSObject
{
    NSMutableDictionary *_options;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    NSString *_storeType;
    NSURL *_storeURL;
    NSURL *_actualStoreFileURL;
    NSMutableDictionary *_storeMetadataDict;
    _Bool _needsMetadataWrite;
    PFUbiquityKnowledgeVector *_storeKV;
    _Bool _ubiquityEnabled;
    id <NSObject><NSCopying><NSCoding> _ubiquityIdentityToken;
    NSURL *_ubiquityRootURL;
    NSString *_ubiquityRootSubpath;
    NSString *_ubiquityName;
    NSString *_ubiquityContainerIdentifier;
    NSString *_localPeerID;
    NSString *_modelVersionHash;
    NSString *_previousModelVersionHash;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeerState *_localPeerState;
    PFUbiquityKnowledgeVector *_metaKV;
    PFUbiquityBaseline *_baseline;
    _Bool _baselineFileExistsInCloud;
    _Bool _hasUploadingBaseline;
    _Bool _monitorUploadingBaselineAsync;
    _Bool _didBaselineCopy;
    PFUbiquityKnowledgeVector *_baselineKV;
    _Bool _votedOffIsland;
    _Bool _reapUbiquitousLogs;
    _Bool _respondToBaselineRoll;
    _Bool _storeFileExists;
    _Bool _storeFileIsReadOnly;
    _Bool _hasStoreMetadataFile;
    _Bool _hasStoreMetadataEntry;
    _Bool _hasContainerUUID;
    _Bool _hasContainerUUIDInStore;
    _Bool _needsMetadataRecovery;
    PFUbiquityPeerReceipt *_localPeerReceipt;
    PFUbiquityKnowledgeVector *_receiptKV;
    PFUbiquityContainerIdentifier *_containerIdentifier;
    NSString *_preStoreContainerUUID;
    _Bool _usedExistingUUIDMapping;
    _Bool _hasLocalTransactionLogs;
    _Bool _hasMigrationOptions;
    _Bool _didMigrateBaseline;
    _Bool _storeWasMigrated;
    PFUbiquityMigrationAssistant *_migrationAssistant;
    PFUbiquityMigrationManager *_migrationManager;
    _Bool _replayLogsSynchronously;
    _Bool _useLocalAccount;
    _Bool _seedStore;
    NSURL *_seedStoreURL;
    _Bool _haveExistingUUIDMappings;
    _Bool _abortSetup;
    PFUbiquitySwitchboardEntry *_entry;
    _Bool _gotExportNotification;
    int _sideLoadLock;
    NSMutableSet *_logLocationsExportedDuringSideLoad;
    NSMutableDictionary *_gidToRid;
    NSMutableDictionary *_entityNameToGidSet;
    NSObject<OS_dispatch_semaphore> *_initialSyncSemaphore;
    int _initialSyncComplete;
    NSMutableArray *_queryLocations;
    _Bool _notifyAboutSetupProgress;
    long long _numSetupTries;
    unsigned long long _retryDelaySec;
    _Bool _failSetup;
    NSError *_failSetupError;
    _Bool _gotAccountChange;
    _Bool _cacheFilePresenterForUbiquityRoot;
}

+ (id)createBaselineFromMostRecentLocation:(id)arg1 localPeerID:(id)arg2 error:(id *)arg3;
+ (void)cleanUserDefaultsForStore:(id)arg1;
+ (void)setContainerIdentifierUUID:(id)arg1 forIdentityToken:(id)arg2 forStoreName:(id)arg3;
+ (id)createActualStoreURLForStoreURL:(id)arg1 localPeerID:(id)arg2 containerIdentifier:(id)arg3 andStoreName:(id)arg4;
+ (id)findContainerIDForToken:(id)arg1 storeName:(id)arg2 haveExistingMappings:(_Bool *)arg3;
+ (void)removeUbiquityMetadataFromStore:(id)arg1;
+ (_Bool)ubiquityMetadataTablesPresentInStore:(id)arg1;
+ (_Bool)doBasicSanityCheckForUbiquityRootURL:(id)arg1 withError:(id *)arg2;
+ (id)createDefaultLocalPeerID;
+ (id)generateMachineUUIDString;
+ (void)initialize;
@property(nonatomic) _Bool cacheFilePresenterForUbiquityRoot; // @synthesize cacheFilePresenterForUbiquityRoot=_cacheFilePresenterForUbiquityRoot;
@property(retain, nonatomic) NSError *failSetupError; // @synthesize failSetupError=_failSetupError;
@property(nonatomic) _Bool failSetup; // @synthesize failSetup=_failSetup;
@property(nonatomic) unsigned long long retryDelaySec; // @synthesize retryDelaySec=_retryDelaySec;
@property(readonly, nonatomic) PFUbiquityKnowledgeVector *storeKV; // @synthesize storeKV=_storeKV;
@property(nonatomic) _Bool abortSetup; // @synthesize abortSetup=_abortSetup;
@property(readonly, nonatomic) NSURL *actualStoreFileURL; // @synthesize actualStoreFileURL=_actualStoreFileURL;
@property(nonatomic) _Bool storeWasMigrated; // @synthesize storeWasMigrated=_storeWasMigrated;
@property(readonly, nonatomic) _Bool useLocalAccount; // @synthesize useLocalAccount=_useLocalAccount;
@property(readonly, nonatomic) PFUbiquityContainerIdentifier *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, nonatomic) PFUbiquityLocation *localRootLocation; // @synthesize localRootLocation=_localRootLocation;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly, nonatomic) NSURL *ubiquityRootURL; // @synthesize ubiquityRootURL=_ubiquityRootURL;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly, nonatomic) _Bool needsMetadataRecovery; // @synthesize needsMetadataRecovery=_needsMetadataRecovery;
@property(readonly, nonatomic) _Bool ubiquityEnabled; // @synthesize ubiquityEnabled=_ubiquityEnabled;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
- (void)_setUbiquityRootLocation:(id)arg1 storeName:(id)arg2 localPeerID:(id)arg3 andModelVersionHash:(id)arg4;
- (void)initialSyncComplete;
- (_Bool)isInitialSyncComplete;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (void)ubiquityIdentityTokenChanged:(id)arg1;
- (id)getCurrentUbiquityIdentityToken;
- (_Bool)respondToBaselineRoll:(id *)arg1;
- (_Bool)seedStore:(id)arg1 error:(id *)arg2;
- (_Bool)pruneStagingDirectoryForStore:(id)arg1 error:(id *)arg2;
- (_Bool)checkKnowledgeVectorsAndBaselineWithStore:(id)arg1 error:(id *)arg2;
- (void)exportedLog:(id)arg1;
- (_Bool)tryToReplaceLocalStore:(id)arg1 withStoreSideLoadedByImporter:(id)arg2;
- (_Bool)rewriteTransactionLogs:(id)arg1 toMatchStore:(id)arg2 error:(id *)arg3;
- (_Bool)moveLocalLogFilesToUbiquityLocation:(id *)arg1;
- (id)createSetOfLocalLogLocations:(id *)arg1;
- (_Bool)sideLoadStore:(id)arg1 error:(id *)arg2;
- (_Bool)initializeStack:(id *)arg1;
- (_Bool)migrateMetadataRoot:(id *)arg1;
- (void)removeEntriesFromDictionary:(id)arg1 withBigramSnapshot:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inBigramManagedObjectContext:(id)arg2;
- (void)updateDictionary:(id)arg1 withBigramSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryJPManagedObjectContext:(id)arg2;
- (void)updateDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryManagedObjectContext:(id)arg2;
- (void)updateDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withShortcutSnapshot:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inUserDictionaryManagedObjectContext:(id)arg2;
- (void)updateDictionary:(id)arg1 withShortcutSnapshot:(id)arg2;
- (_Bool)detectAndFixForkedContainer:(id *)arg1;
- (_Bool)attemptMetadataRecoveryForStore:(id)arg1 error:(id *)arg2;
- (_Bool)checkAndPerformMigrationForStore:(id)arg1 error:(id *)arg2;
- (_Bool)initializeBaselineForStore:(id)arg1 error:(id *)arg2;
- (_Bool)canReadFromUbiquityRootLocation:(id *)arg1;
- (_Bool)initializeReceiptFile:(id *)arg1;
- (_Bool)initializeStoreKnowledgeVectorFromStore:(id)arg1 error:(id *)arg2;
- (_Bool)cleanUpFromFailedSetup:(id *)arg1;
- (_Bool)finishSetupForStore:(id)arg1 error:(id *)arg2;
- (void)finishSetupWithRetry:(id)arg1;
- (_Bool)initializeContainerIdentifierWithStore:(id)arg1 error:(id *)arg2;
- (_Bool)performCoordinatorPostStoreSetup:(id)arg1 error:(id *)arg2;
- (_Bool)doPostValidationInit:(id *)arg1;
- (_Bool)validateOptionsWithError:(id *)arg1;
- (id)migrationAssistant;
- (id)longDescription;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1 andStoreOptions:(id)arg2 forPersistentStoreOfType:(id)arg3 atURL:(id)arg4;
- (id)init;

@end

