/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface MFWeakObjectCache : NSObject
{
    id _block;
    NSMutableDictionary *_dictionary;
    NSLock *_lock;
}

- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 wasCached:(_Bool *)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithBlock:(id)arg1;

@end

