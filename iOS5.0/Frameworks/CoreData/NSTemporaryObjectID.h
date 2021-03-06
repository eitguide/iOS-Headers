/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSManagedObjectID.h>

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID
{
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)_storeDeallocated;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (Class)classForStore:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (int)version;
+ (id)retain;
+ (id)_retain_1;
+ (void)release;
+ (void)_release_1;
+ (unsigned int)allocateBatch:(id *)arg1 forEntity:(id)arg2 count:(unsigned int)arg3;
+ (id)initWithEntity:(id)arg1;
+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
- (id)retain;
- (void)release;
- (unsigned int)retainCount;
- (void)dealloc;
- (void)finalize;
- (id)initWithEntity:(id)arg1;
- (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)persistentStore;
- (void)_setPersistentStore:(id)arg1;
- (id)entity;
- (BOOL)isTemporaryID;
- (id)_storeIdentifier;
- (BOOL)_isPersistentStoreAlive;
- (id)_retainedURIString;
- (id)URIRepresentation;
- (id)_referenceData;

@end

