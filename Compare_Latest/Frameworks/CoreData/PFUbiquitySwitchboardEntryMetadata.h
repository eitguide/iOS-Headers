/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSPersistentStoreCoordinator, NSSQLCore, NSSet, NSString, PFUbiquityLocation, PFUbiquityRecordsImporterSchedulingContext, PFUbiquitySwitchboardCacheWrapper, _PFUbiquityRecordsExporter, _PFUbiquityRecordsImporter;

// Not exported
@interface PFUbiquitySwitchboardEntryMetadata : NSObject
{
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    NSString *_activeModelVersionHash;
    NSMutableSet *_stores;
    NSPersistentStoreCoordinator *_privatePSC;
    NSSQLCore *_privateStore;
    _PFUbiquityRecordsImporter *_importer;
    _PFUbiquityRecordsExporter *_exporter;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
    PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;
    _Bool _useLocalStorage;
    _Bool _useLocaAccount;
    NSObject<OS_dispatch_queue> *_privateQueue;
    _Bool _useLocalAccount;
}

@property(nonatomic) _Bool useLocalAccount; // @synthesize useLocalAccount=_useLocalAccount;
@property(nonatomic) _Bool useLocalStorage; // @synthesize useLocalStorage=_useLocalStorage;
@property(readonly, nonatomic) PFUbiquityRecordsImporterSchedulingContext *schedulingContext; // @synthesize schedulingContext=_schedulingContext;
@property(readonly, nonatomic) NSSet *stores; // @synthesize stores=_stores;
@property(readonly, nonatomic) NSSQLCore *privateStore; // @synthesize privateStore=_privateStore;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *privatePSC; // @synthesize privatePSC=_privatePSC;
@property(readonly, nonatomic) NSString *activeModelVersionHash; // @synthesize activeModelVersionHash=_activeModelVersionHash;
@property(retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly, nonatomic) _PFUbiquityRecordsExporter *exporter; // @synthesize exporter=_exporter;
@property(readonly, nonatomic) _PFUbiquityRecordsImporter *importer; // @synthesize importer=_importer;
@property(retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *cacheWrapper; // @synthesize cacheWrapper=_cacheWrapper;
- (void)removePersistentStore:(id)arg1;
- (void)addPersistentStore:(id)arg1;
- (void)dealloc;
- (void)tearDown;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 localRootLocation:(id)arg3 storeName:(id)arg4 andPrivateQueue:(id)arg5;

@end

