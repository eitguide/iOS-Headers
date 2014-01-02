/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying>
{
    WebHistoryItemPrivate *_private;
}

+ (void)initialize;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (double)lastVisitedTimeInterval;
- (id)alternateTitle;
- (void)setAlternateTitle:(id)arg1;
- (id)title;
- (id)originalURLString;
- (id)URLString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3;
- (id)init;

@end

