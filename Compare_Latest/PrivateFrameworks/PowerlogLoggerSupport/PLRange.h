/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PLRange : NSObject
{
    double _location;
    double _length;
}

@property double length; // @synthesize length=_length;
@property double location; // @synthesize location=_location;
- (_Bool)intersectsRange:(id)arg1;
- (id)intersectionRange:(id)arg1;
- (id)unionRange:(id)arg1;
- (_Bool)equalRange:(id)arg1;
- (_Bool)locationInRange:(double)arg1;
- (id)description;
@property(readonly) double endLocation;
- (id)initWithLocation:(double)arg1 length:(double)arg2;

@end

