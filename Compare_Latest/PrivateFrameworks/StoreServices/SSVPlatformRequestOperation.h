/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SSVPlatformContext;

@interface SSVPlatformRequestOperation : NSOperation
{
    NSMutableDictionary *_additionalParameters;
    SSVPlatformContext *_context;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemIdentifiers;
    NSString *_imageProfile;
    NSString *_keyProfile;
    id _responseBlock;
    NSString *_storeFrontSuffix;
}

- (void).cxx_destruct;
- (void)_makeLookupRequest;
- (void)_makeLocalMescalRequest;
- (void)_makeLocalJSSignRequest;
- (id)_lookupWithRequest:(id)arg1 error:(id *)arg2;
- (void)_enumerateQueryParametersUsingBlock:(id)arg1;
- (id)_callerValue;
- (void)main;
- (id)valueForRequestParameter:(id)arg1;
@property(copy) NSString *storeFrontSuffix;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
@property(copy) id responseBlock;
@property(copy) NSString *keyProfile;
@property(copy) NSArray *itemIdentifiers;
@property(copy) NSString *imageProfile;
- (id)initWithPlatformContext:(id)arg1;
- (id)init;

@end

