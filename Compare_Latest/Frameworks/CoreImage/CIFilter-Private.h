/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@interface CIFilter (Private)
+ (id)_filterArrayFromProperties:(id)arg1;
+ (id)_filterArrayFromImageMetadata:(struct CGImageMetadata *)arg1 inputImageExtent:(struct CGRect)arg2;
+ (struct CGImageMetadata *)_imageMetadataFromFilters:(id)arg1 inputImageExtent:(struct CGRect)arg2;
+ (id)_filterArrayFromProperties:(id)arg1 inputImageExtent:(struct CGRect)arg2;
+ (id)_propertyArrayFromFilters:(id)arg1 inputImageExtent:(struct CGRect)arg2;
+ (id)filterWithString:(id)arg1;
+ (id)customAttributes;
- (id)_serializedXMPString;
- (_Bool)_isIdentity;
- (_Bool)_filterClassInCategory:(id)arg1;
- (id)_filterClassDescription;
@end

