/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RemoteUI/RUIHTTPRequest.h>

@class NSURL, RUIParser;

@interface RUILoader : RUIHTTPRequest
{
    RUIParser *_parser;
    NSURL *_url;
    _Bool _allowNonSecureHTTP;
}

@property(nonatomic) _Bool allowNonSecureHTTP; // @synthesize allowNonSecureHTTP=_allowNonSecureHTTP;
- (void)failWithError:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)webViewFinishedLoading;
- (void)didParseData;
- (_Bool)anyWebViewLoading;
- (void)allWebViewsFinishedLoading;
- (void)_finishLoad;
- (void)parseData:(id)arg1;
- (id)URL;
- (void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2;
- (void)loadXMLUIWithRequest:(id)arg1;
- (void)loadXMLUIWithURL:(id)arg1;
- (void)loadRequest:(id)arg1;
- (void)cancel;
- (void)dealloc;

@end

