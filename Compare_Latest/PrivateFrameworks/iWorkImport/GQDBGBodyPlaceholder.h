/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDBGPlaceholder.h>

#import "GQDNameMappable-Protocol.h"

@class GQDWPLayoutFrame;

// Not exported
@interface GQDBGBodyPlaceholder : GQDBGPlaceholder <GQDNameMappable>
{
    GQDWPLayoutFrame *mFrame;
}

+ (const struct StateSpec *)stateForReading;
- (_Bool)isBlank;
- (id)layoutFrame;
- (void)dealloc;

@end

