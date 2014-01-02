/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class TSCHStyleSemanticTag;

// Not exported
@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying>
{
    TSCHStyleSemanticTag *mSemanticTag;
    int mProperty;
}

+ (id)pairWithSemanticTag:(id)arg1 property:(int)arg2;
- (int)property;
- (id)semanticTag;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSemanticTag:(id)arg1 property:(int)arg2;

@end

