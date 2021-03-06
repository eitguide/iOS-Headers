/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SSItemImageCollection : NSObject <NSCopying>
{
    NSArray *_itemImages;
}

@property(readonly, nonatomic) NSArray *itemImages; // @synthesize itemImages=_itemImages;
- (void *)copyXPCEncoding;
- (id)copyPropertyListEncoding;
- (id)initWithXPCEncoding:(void *)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)_newImagesForDictionary:(id)arg1;
- (id)_imagesForSize:(struct CGSize)arg1 scale:(float)arg2;
- (id)imagesForKind:(id)arg1;
- (id)imagesForSize:(struct CGSize)arg1;
- (id)bestImageForSize:(struct CGSize)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithItemImages:(id)arg1;
- (id)initWithImageCollection:(id)arg1;

@end

