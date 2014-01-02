/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MFMessageBodyParserObject : NSObject
{
    double _timeoutTime;
    _Bool _shouldAbort;
    _Bool _didTimeout;
    _Bool _copyBlocks;
    double _timeoutInterval;
}

@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
- (_Bool)areBlocksCopied;
- (void)copyBlocks;
- (_Bool)shouldProceedParsing;
- (void)abortParsing;
- (void)messageBodyParserWillBeginParsing:(id)arg1;

@end

