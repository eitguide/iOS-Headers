/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@class NSString;

@interface _PLLazyPreheatData : NSData
{
    NSString *_path;
    NSData *_data;
}

+ (id)dataWithContentsOfFile:(id)arg1;
- (void)dealloc;
- (const void *)bytes;
- (unsigned long long)length;
- (void)_loadData;
- (id)initWithContentsOfFile:(id)arg1;

@end

