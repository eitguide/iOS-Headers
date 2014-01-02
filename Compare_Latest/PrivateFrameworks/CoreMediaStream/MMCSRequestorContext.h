/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MMCSEngine;

@interface MMCSRequestorContext : NSObject
{
    int _type;
    MMCSEngine *_engine;
    char **_signatures;
    unsigned long long _count;
    unsigned long long *_itemIDs;
    unsigned int *_itemFlags;
    char **_authTokens;
}

+ (id)contextWithEngine:(id)arg1 type:(int)arg2;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) char **authTokens; // @synthesize authTokens=_authTokens;
@property(nonatomic) unsigned int *itemFlags; // @synthesize itemFlags=_itemFlags;
@property(nonatomic) unsigned long long *itemIDs; // @synthesize itemIDs=_itemIDs;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) char **signatures; // @synthesize signatures=_signatures;
@property(nonatomic) __weak MMCSEngine *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithEngine:(id)arg1 type:(int)arg2;

@end

