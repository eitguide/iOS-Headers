/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface VMUSymbolOwnerCache : NSObject
{
}

+ (void)setMemoryLimit:(unsigned long long)arg1;
+ (unsigned long long)memoryLimit;
+ (void)flush;
+ (void)shrinkCacheToSize:(unsigned long long)arg1;
+ (id)symbolOwners;
+ (void)removeSignature:(id)arg1;
+ (void)addSymbolOwner:(id)arg1;
+ (id)symbolOwnerForSignature:(id)arg1;
+ (void)initialize;

@end

