/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface UIEvent : NSObject
{
    double _timestamp;
}

- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (id)allTouches;
@property(readonly, nonatomic) double timestamp;
@property(readonly, nonatomic) long long subtype;
@property(readonly, nonatomic) long long type;

@end

