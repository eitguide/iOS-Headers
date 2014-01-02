/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSUImage.h>

// Not exported
@interface TSUCGImage : TSUImage
{
    struct CGImage *mCGImage;
    long long mOrientation;
    double mScale;
}

- (void)dealloc;
- (long long)imageOrientation;
- (double)scale;
- (struct CGSize)size;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;
- (struct CGImage *)CGImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;

@end

