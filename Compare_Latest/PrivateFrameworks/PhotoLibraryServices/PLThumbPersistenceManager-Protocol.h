/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PLPreheatItemSource-Protocol.h"

@class NSString;

@protocol PLThumbPersistenceManager <PLPreheatItemSource>
@property(readonly, nonatomic) struct CGSize imageSize;
@property(readonly, nonatomic) _Bool isReadOnly;
@property(readonly, nonatomic) int imageLength;
@property(readonly, nonatomic) int imageRowBytes;
@property(readonly, nonatomic) int imageHeight;
@property(readonly, nonatomic) int imageWidth;
@property(readonly, nonatomic) int imageFormat;
@property(readonly, nonatomic) NSString *path;
- (id)_debugDescription;
- (_Bool)usesThumbIdentifiers;
- (_Bool)copyEntryFromOriginalAsset:(id)arg1 toAsset:(id)arg2;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (void)setImageDataForEntry:(const void *)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 asset:(id)arg4;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 videoDuration:(id)arg4 photoUUID:(id)arg5;

@optional
- (long long)entryCount;
- (void)preheatImageDataAtIndexes:(id)arg1;
- (void)preheatImageDataAtIndex:(unsigned long long)arg1;
- (id)thumbnailPathForThumbIdentifier:(id)arg1;
- (id)imageWithIdentifier:(id)arg1;
- (void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
@end

