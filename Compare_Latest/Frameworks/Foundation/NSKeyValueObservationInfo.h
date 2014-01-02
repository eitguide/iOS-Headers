/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSHashTable;

// Not exported
@interface NSKeyValueObservationInfo : NSObject
{
    int _retainCountMinusOne;
    NSArray *_observances;
    unsigned long long _cachedHash;
    _Bool _cachedIsShareable;
    NSHashTable *_observables;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)_initWithObservances:(id *)arg1 count:(unsigned long long)arg2;

@end

