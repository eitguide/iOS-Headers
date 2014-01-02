/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSMutableArray, NSMutableDictionary;

@interface PLPhotoBakedThumbnails : NSObject
{
    int _format;
    int _singleThumbnailImageLength;
    unsigned long long _count;
    _Bool _dataIsMutable;
    NSData *_thumbnailData;
    NSMutableArray *_thumbnailImages;
    NSMutableDictionary *_options;
    NSData *_optionsData;
    _Bool _optionsAccessed;
    _Bool _missingHeader;
    struct CGSize _size;
}

+ (_Bool)saveBakedThumbnailsOfImages:(id)arg1 toFile:(id)arg2 format:(int)arg3 orientation:(int *)arg4 options:(id)arg5 delegate:(id)arg6;
+ (id)thumbnailsWithContentsOfFile:(id)arg1 format:(int)arg2;
- (id)_thumbnailData;
- (_Bool)writeBorderedThumbnailOfImage:(struct CGImage *)arg1 toBuffer:(void *)arg2 orientation:(int *)arg3 format:(int)arg4 formatInfo:(const CDStruct_e5ce1f5a *)arg5 delegate:(id)arg6;
@property(readonly, nonatomic) struct CGRect imageRect;
@property(readonly, nonatomic) unsigned int bitmapInfo;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) int bytesPerPixel;
@property(readonly, nonatomic) int bitsPerComponent;
@property(readonly, nonatomic) NSData *optionsData;
@property(readonly, nonatomic) NSMutableDictionary *options;
@property(readonly, nonatomic) int format;
- (struct CGImage *)thumbnailImageAtIndex:(long long)arg1;
- (char *)thumbnailBytesAtIndex:(long long)arg1;
- (unsigned long long)thumbnailLength;
- (id)thumbnailDataAtIndex:(long long)arg1;
- (unsigned long long)count;
- (_Bool)saveToFile:(id)arg1;
- (id)serializedData;
- (id)description;
- (void)dealloc;
- (id)initWithImages:(id)arg1 format:(int)arg2 orientation:(int *)arg3 options:(id)arg4 delegate:(id)arg5;
- (id)initWithContentsOfFile:(id)arg1 format:(int)arg2;
- (id)initWithContentsOfFile:(id)arg1 format:(int)arg2 readOnly:(_Bool)arg3;
- (id)initWithData:(id)arg1 format:(int)arg2;
- (id)initWithData:(id)arg1 format:(int)arg2 readOnly:(_Bool)arg3;

@end

