/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface WBParagraphProperties : NSObject
{
}

+ (struct WrdParagraphProperties *)createTrackedPropertiesIfNeeded:(id)arg1;
+ (void)readFrom:(id)arg1 wrdProperties:(struct WrdParagraphProperties *)arg2 tracked:(struct WrdParagraphProperties *)arg3 document:(id)arg4 properties:(id)arg5;
+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;

@end

