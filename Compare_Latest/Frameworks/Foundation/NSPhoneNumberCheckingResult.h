/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSString *_phoneNumber;
    id _underlyingResult;
}

@property(readonly) void *underlyingResult;
- (id)phoneNumber;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (struct _NSRange)range;
- (unsigned long long)resultType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2 underlyingResult:(void *)arg3;

@end

