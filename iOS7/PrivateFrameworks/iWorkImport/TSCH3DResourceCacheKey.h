/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class TSCH3DResource, TSCH3DResourceLoader;

// Not exported
@interface TSCH3DResourceCacheKey : NSObject <NSCopying>
{
    TSCH3DResourceLoader *mLoader;
    TSCH3DResource *mResource;
    int mVirtualScreen;
}

+ (id)keyWithLoader:(id)arg1 resource:(id)arg2 virtualScreen:(int)arg3;
@property(readonly, nonatomic) TSCH3DResource *resource; // @synthesize resource=mResource;
@property(readonly, nonatomic) TSCH3DResourceLoader *loader; // @synthesize loader=mLoader;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithLoader:(id)arg1 resource:(id)arg2 virtualScreen:(int)arg3;

@end

