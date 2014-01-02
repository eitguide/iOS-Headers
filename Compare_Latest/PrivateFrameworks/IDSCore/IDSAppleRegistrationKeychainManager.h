/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMTimer, NSArray, NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface IDSAppleRegistrationKeychainManager : NSObject
{
    NSMutableDictionary *_smsSignatures;
    NSMutableDictionary *_authenticationCerts;
    NSMutableArray *_registrationData;
    IMTimer *_purgeTimer;
    NSRecursiveLock *_lock;
    id _purgeCancelBlock;
    id _purgeEnqueueBlock;
    _Bool _loaded;
}

+ (id)keychainAccessGroupForVersion:(unsigned long long)arg1;
+ (id)keychainAccountForVersion:(unsigned long long)arg1;
+ (id)keychainServiceForVersion:(unsigned long long)arg1;
+ (id)sharedInstance;
- (void)setSMSSignature:(id)arg1 mainID:(id)arg2;
- (id)smsSignatureAndMainID:(id *)arg1;
- (void)setAuthenticationCert:(id)arg1 forID:(id)arg2;
- (id)authenticationCertForID:(id)arg1;
- (_Bool)removeAllRegistrations;
- (_Bool)removeRegistration:(id)arg1;
- (_Bool)addRegistration:(id)arg1;
@property(readonly, nonatomic) NSArray *registrations; // @dynamic registrations;
- (id)registrationWithServiceType:(id)arg1 registrationType:(long long)arg2 value:(id)arg3;
- (void)reloadFromKeychain;
- (void)_reloadFromDictionary:(id)arg1;
- (void)_loadIfNeeded;
- (void)_setPurgeTimer;
- (void)_flush;
- (_Bool)saveToKeychain;
- (_Bool)_saveToKeychain;
- (_Bool)__saveToKeychain;
- (void)systemDidFinishMigration;
- (void)dealloc;
- (id)init;

@end

