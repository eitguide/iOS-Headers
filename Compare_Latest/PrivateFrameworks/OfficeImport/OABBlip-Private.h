/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OABBlip.h>

@interface OABBlip (Private)
+ (void)writeEmptyBlipStoreEntry:(struct EshBSE *)arg1;
+ (id)compressMetafileData:(id)arg1 info:(struct EshMetafileBlipInfo *)arg2;
+ (void)setMetafileBoundsFromPictData:(id)arg1 info:(struct EshMetafileBlipInfo *)arg2;
+ (int)blipTypeForBlipSignature:(int)arg1;
+ (id)delayedSubBlipWithMetafileInfo:(const struct EshMetafileBlipInfo *)arg1;
+ (id)subBlipWithMetafileInfo:(const struct EshMetafileBlipInfo *)arg1;
+ (id)dibFileContentsWithDibBlipData:(const struct OcBinaryData *)arg1;
@end

