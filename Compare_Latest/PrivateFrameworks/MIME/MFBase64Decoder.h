/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MIME/MFBaseFilterDataConsumer.h>

@class NSMutableData;

@interface MFBase64Decoder : MFBaseFilterDataConsumer
{
    NSMutableData *_leftovers;
    unsigned int _decodedBits;
    unsigned long long _validBytes;
    unsigned long long _equalCount;
    const char *_table;
    _Bool _bound;
}

+ (_Bool)isValidBase64:(id)arg1;
@property(nonatomic) _Bool isBound; // @synthesize isBound=_bound;
@property(readonly, nonatomic) unsigned long long unconverted; // @synthesize unconverted=_validBytes;
@property(nonatomic) _Bool convertCommas;
- (void)dealloc;
- (void)done;
- (long long)appendData:(id)arg1;
- (unsigned long long)_decodeBytes:(const char *)arg1 end:(const char *)arg2 into:(char *)arg3 length:(unsigned long long)arg4 startingAt:(unsigned long long)arg5 outEncodedOffset:(unsigned long long *)arg6;
- (id)initWithConsumers:(id)arg1;

@end

