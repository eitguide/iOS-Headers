/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableDictionary, NSString;

@interface MCVPNPayloadBase : MCPayload
{
    _Bool _userNameRequired;
    _Bool _passwordRequired;
    _Bool _proxyUserNameRequired;
    _Bool _proxyPasswordRequired;
    _Bool _sharedSecretRequired;
    _Bool _pinRequired;
    NSMutableDictionary *_atom;
    NSString *_certificateUUID;
    NSString *_userNameKey;
    NSString *_passwordKey;
    NSString *_proxyUserNameKey;
    NSString *_proxyPasswordKey;
    NSString *_sharedSecretKey;
    NSString *_pinKey;
    NSString *_userName;
    NSString *_password;
    NSString *_proxyUserName;
    NSString *_proxyPassword;
    NSString *_sharedSecret;
    NSString *_pin;
}

@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(copy, nonatomic) NSString *sharedSecret; // @synthesize sharedSecret=_sharedSecret;
@property(copy, nonatomic) NSString *proxyPassword; // @synthesize proxyPassword=_proxyPassword;
@property(copy, nonatomic) NSString *proxyUserName; // @synthesize proxyUserName=_proxyUserName;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *pinKey; // @synthesize pinKey=_pinKey;
@property(retain, nonatomic) NSString *sharedSecretKey; // @synthesize sharedSecretKey=_sharedSecretKey;
@property(retain, nonatomic) NSString *proxyPasswordKey; // @synthesize proxyPasswordKey=_proxyPasswordKey;
@property(retain, nonatomic) NSString *proxyUserNameKey; // @synthesize proxyUserNameKey=_proxyUserNameKey;
@property(retain, nonatomic) NSString *passwordKey; // @synthesize passwordKey=_passwordKey;
@property(retain, nonatomic) NSString *userNameKey; // @synthesize userNameKey=_userNameKey;
@property(nonatomic) _Bool pinRequired; // @synthesize pinRequired=_pinRequired;
@property(nonatomic) _Bool sharedSecretRequired; // @synthesize sharedSecretRequired=_sharedSecretRequired;
@property(nonatomic) _Bool proxyPasswordRequired; // @synthesize proxyPasswordRequired=_proxyPasswordRequired;
@property(nonatomic) _Bool proxyUserNameRequired; // @synthesize proxyUserNameRequired=_proxyUserNameRequired;
@property(nonatomic) _Bool passwordRequired; // @synthesize passwordRequired=_passwordRequired;
@property(nonatomic) _Bool userNameRequired; // @synthesize userNameRequired=_userNameRequired;
@property(retain, nonatomic) NSString *certificateUUID; // @synthesize certificateUUID=_certificateUUID;
@property(retain, nonatomic) NSMutableDictionary *atom; // @synthesize atom=_atom;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (void)_validateVPNPayload:(id)arg1;

@end

