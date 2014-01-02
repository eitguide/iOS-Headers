/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSManagedObject, NSMutableDictionary, NSNumber, NSString, PFUbiquityImportContext, PFUbiquityKnowledgeVector;

// Not exported
@interface PFUbiquityRecordImportConflict : NSObject
{
    NSString *_conflictingObjectGlobalIDStr;
    NSManagedObject *_sourceObject;
    NSDictionary *_conflictingLogContent;
    PFUbiquityKnowledgeVector *_conflictingLogKnowledgeVector;
    PFUbiquityKnowledgeVector *_currentKnowledgeVector;
    int _conflictingLogTransactionType;
    NSDate *_conflictLogDate;
    NSNumber *_conflictingLogTransactionNumber;
    NSArray *_transactionHistory;
    NSDictionary *_globalIDIndexToLocalIDURIMap;
    PFUbiquityImportContext *_importContext;
    NSMutableDictionary *_relationshipsToObjectIDsToCheck;
}

+ (id)createTransactionLogForTransactionEntry:(id)arg1 withImportContext:(id)arg2 error:(id *)arg3;
+ (id)createSnapshotFromManagedObject:(id)arg1 withSourceObject:(id)arg2;
+ (int)resolvedTypeForConflictingLogType:(int)arg1 andLatestTransactionEntry:(id)arg2 skipObject:(_Bool *)arg3;
+ (id)electAncestorKnowledgeVectorForKnowledgeVector:(id)arg1 withExportingPeerID:(id)arg2 fromPeerSnapshotCollection:(id)arg3;
+ (void)initialize;
@property(readonly, nonatomic) NSDictionary *relationshipToObjectIDsToCheck; // @synthesize relationshipToObjectIDsToCheck=_relationshipsToObjectIDsToCheck;
@property(retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector; // @synthesize currentKnowledgeVector=_currentKnowledgeVector;
@property(retain, nonatomic) NSNumber *conflictingLogTransactionNumber; // @synthesize conflictingLogTransactionNumber=_conflictingLogTransactionNumber;
@property(retain, nonatomic) PFUbiquityKnowledgeVector *conflictingLogKnowledgeVector; // @synthesize conflictingLogKnowledgeVector=_conflictingLogKnowledgeVector;
@property(retain, nonatomic) PFUbiquityImportContext *importContext; // @synthesize importContext=_importContext;
@property(retain, nonatomic) NSDictionary *globalIDIndexToLocalIDURIMap; // @synthesize globalIDIndexToLocalIDURIMap=_globalIDIndexToLocalIDURIMap;
@property(retain, nonatomic) NSArray *transactionHistory; // @synthesize transactionHistory=_transactionHistory;
@property(retain, nonatomic) NSDate *conflictLogDate; // @synthesize conflictLogDate=_conflictLogDate;
@property(nonatomic) int conflictingLogTransactionType; // @synthesize conflictingLogTransactionType=_conflictingLogTransactionType;
@property(retain, nonatomic) NSDictionary *conflictingLogContent; // @synthesize conflictingLogContent=_conflictingLogContent;
@property(retain, nonatomic) NSManagedObject *sourceObject; // @synthesize sourceObject=_sourceObject;
@property(retain, nonatomic) NSString *conflictingObjectGlobalIDStr; // @synthesize conflictingObjectGlobalIDStr=_conflictingObjectGlobalIDStr;
- (id)description;
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)arg1 withValue:(id)arg2 withGlobalIDToLocalIDURIMap:(id)arg3 andTransactionLog:(id)arg4;
- (id)createSnapshotFromLogContent:(id)arg1 withTransactionLog:(id)arg2;
- (id)createSnapshotFromBaselineForEntry:(id)arg1 error:(id *)arg2;
- (id)createSnapshotDictionaryForObjectWithEntry:(id)arg1 inTransactionLog:(id)arg2 withError:(id *)arg3;
- (id)createSnapshotDictionaryFromLogEntry:(id)arg1 withError:(id *)arg2;
- (_Bool)resolveConflict:(id *)arg1;
- (_Bool)resolveMergeConflictForLogContent:(id)arg1 previousSnapshot:(id)arg2 andAncestorSnapshot:(id)arg3 withOldVersion:(unsigned int)arg4 andNewVersion:(unsigned int)arg5 error:(id *)arg6;
- (void)addObjectID:(id)arg1 forRelationship:(id)arg2;
- (void)addObjectIDsForDiff:(id)arg1 forRelationship:(id)arg2;
- (id)_newNormalizedSnapshot:(id)arg1 forObject:(id)arg2;
- (void)dealloc;
- (id)init;

@end

