/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDWPInlineList.h>

@class GQDSStyle;

// Not exported
@interface GQDWPLink : GQDWPInlineList
{
    GQDSStyle *mCharStyle;
    struct __CFString *mHref;
}

- (struct __CFString *)href;
- (id)characterStyle;
- (void)dealloc;

@end

