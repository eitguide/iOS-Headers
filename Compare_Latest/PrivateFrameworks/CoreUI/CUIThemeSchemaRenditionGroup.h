/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CUIRenditionKey, NSArray;

@interface CUIThemeSchemaRenditionGroup : NSObject
{
    CUIRenditionKey *_baseKey;
    NSArray *_renditions;
    long long _partFeatures;
}

+ (id)renditionGroupsForRenditions:(id)arg1 partFeatures:(long long)arg2;
@property(retain, nonatomic) NSArray *renditions; // @synthesize renditions=_renditions;
- (void)dealloc;
- (long long)partFeatures;
- (id)themeSchemaLayers;
- (id)_layerNameForDrawingLayer:(long long)arg1;
- (id)_layerNameForState:(long long)arg1;
- (id)_renditionsSortedIntoLayers;
- (id)description;
- (id)mutablePSDImageRef;
- (id)baseKey;
- (id)initWithRenditions:(id)arg1 partFeatures:(long long)arg2;

@end

