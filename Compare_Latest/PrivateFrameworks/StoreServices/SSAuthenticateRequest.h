/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding-Protocol.h"

@class SSAuthenticationContext;

@interface SSAuthenticateRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext *_authenticationContext;
}

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(id)arg1;
- (_Bool)start;
- (void)startWithAuthenticateResponseBlock:(id)arg1;
@property(readonly) SSAuthenticationContext *authenticationContext;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)arg1;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(nonatomic) id <SSAuthenticateRequestDelegate> delegate; // @dynamic delegate;

@end

