/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

// Not exported
@interface NSNetworkSettingsInternal : NSObject
{
    struct __SCDynamicStore *store;
    struct __CFRunLoopSource *storeSource;
    NSDictionary *proxyDictionary;
    _Bool ftpPassiveEnabled;
    _Bool _pad1;
    _Bool _pad2;
    _Bool _pad3;
}

- (void)finalize;
- (void)dealloc;

@end

