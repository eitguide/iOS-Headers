/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ISStoreURLOperation.h"

@class SBKRequest;

// Not exported
@interface SBKSyncTransactionURLOperation : ISStoreURLOperation
{
    _Bool _shouldAuthenticate;
    SBKRequest *_SBKRequest;
}

+ (id)operationWithRequest:(id)arg1 delegate:(id)arg2;
@property(retain, nonatomic) SBKRequest *SBKRequest; // @synthesize SBKRequest=_SBKRequest;
- (void).cxx_destruct;
- (id)description;
@property(nonatomic) _Bool shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;
- (id)_init;
- (id)init;

@end

