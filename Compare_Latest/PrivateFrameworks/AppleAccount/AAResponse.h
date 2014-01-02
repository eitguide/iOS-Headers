/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSError, NSHTTPURLResponse, NSString;

@interface AAResponse : NSObject
{
    NSDictionary *_responseDictionary;
    NSHTTPURLResponse *_httpResponse;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *protocolVersion;
- (id)_deviceSpecificLocalizedString:(id)arg1;
- (id)_stringWithDescriptionForResponseError:(id)arg1;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(_Bool)arg3;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (void)_parsePlistResponse:(id)arg1;

@end

