/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSKnownKeysDictionary;

// Not exported
@interface _PFTempNestedSnapshot : NSObject
{
    NSKnownKeysDictionary *_snapshot;
    unsigned long long _version;
}

- (id)valueForKey:(id)arg1;
- (void)dealloc;
- (unsigned int)_versionNumber;
- (id)_snapshot_;
- (const id *)knownKeyValuesPointer;
- (id)initWithOwnedKKsD:(id)arg1 andVersion:(unsigned long long)arg2;

@end

