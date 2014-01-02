/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, WebResource;

// Not exported
@interface WebArchivePrivate : NSObject
{
    WebResource *cachedMainResource;
    NSArray *cachedSubresources;
    NSArray *cachedSubframeArchives;
    struct RefPtr<WebCore::LegacyWebArchive> coreArchive;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCoreArchive:(PassRefPtr_d33dc2c2)arg1;
- (struct LegacyWebArchive *)coreArchive;
- (id)initWithCoreArchive:(PassRefPtr_d33dc2c2)arg1;
- (id)init;

@end

