/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol ACDAccountAuthenticationPlugin <NSObject>
- (void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(id)arg3;

@optional
- (id)credentialForAccount:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (id)credentialForAccount:(id)arg1 client:(id)arg2;
- (void)verifyCredentialsForAccount:(id)arg1 client:(id)arg2 withHandler:(id)arg3;
- (void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(id)arg4;
- (id)renewalIDForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id *)arg4;
- (_Bool)isPushSupportedForAccount:(id)arg1;
- (void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(id)arg4;
@end

