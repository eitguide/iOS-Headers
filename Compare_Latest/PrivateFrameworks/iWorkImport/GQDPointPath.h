/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDPath.h>

// Not exported
@interface GQDPointPath : GQDPath
{
    int mType;
    struct CGPoint mPoint;
    struct CGSize mSize;
}

- (id).cxx_construct;
- (struct CGPath *)createBezierPath;
- (struct CGSize)size;
- (struct CGPoint)point;
- (int)type;

@end

