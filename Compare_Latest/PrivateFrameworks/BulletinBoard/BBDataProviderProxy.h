/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBXPCConnectionDelegate-Protocol.h"
#import "XPCProxyTarget-Protocol.h"

@class BBDataProviderIdentity, BBXPCIncomingConnection, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface BBDataProviderProxy : NSObject <XPCProxyTarget, BBXPCConnectionDelegate>
{
    NSString *_sectionID;
    id <BBRemoteDataProvider> _dataProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    _Bool _dataProviderDidLoad;
    BBDataProviderIdentity *_identity;
    BBXPCIncomingConnection *_connection;
    NSMutableArray *_pendingRequests;
}

@property(retain, nonatomic) BBDataProviderIdentity *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) id <BBRemoteDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)deliverBulletinActionResponse:(id)arg1;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)attachmentAspectRatioForRecordID:(id)arg1 completion:(id)arg2;
- (void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(id)arg3;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id)arg3;
- (void)dataProviderDidLoad;
- (void)sectionIdentityWithCompletion:(id)arg1;
- (void)ping:(id)arg1;
- (void)updateSectionInfoWithHandler:(id)arg1;
- (void)updateClearedInfoWithHandler:(id)arg1;
- (void)reloadDefaultSectionInfo;
- (void)reloadSectionParameters;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
- (void)withdrawBulletinsWithRecordID:(id)arg1;
- (void)modifyBulletin:(id)arg1;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;
- (void)addBulletin:(id)arg1 interrupt:(_Bool)arg2;
- (void)invalidateBulletins;
- (void)_makeClientRequest:(id)arg1;
- (void)_makeServerRequest:(id)arg1;
- (void)_queue_makeServerRequest:(id)arg1;
- (void)_processPendingRequests;
- (id)_serverProxy;
- (void)connection:(id)arg1 connectionStateDidChange:(_Bool)arg2;
- (void)_updateIdentity:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)invalidate;
- (void)resume;
- (id)description;
- (void)dealloc;
- (id)initWithDataProvider:(id)arg1 identity:(id)arg2 queue:(id)arg3 dataProviderQueue:(id)arg4;

@end

