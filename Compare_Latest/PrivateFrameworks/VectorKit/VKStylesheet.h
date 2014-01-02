/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString, VKGenericShieldDrawStyle, VKPGlobalProperties;

@interface VKStylesheet : NSObject
{
    NSString *_sheetName;
    float _scale;
    float _ppi;
    long long _targetDisplay;
    NSMutableArray *_flatStyles;
    NSMutableArray *_inheritance;
    long long _rasterPolygonChangeoverZ;
    VKPGlobalProperties *_styleGlobalProperties;
    long long _mapDisplayStyle;
    long long _mapDisplayStyleVariant;
    float _blendingFactor;
    unsigned int _updateStamp;
    _Bool _nightStyleVariantsInitialized;
    _Bool _supportsNightMode;
    _Bool _canSelectIcons;
    VKGenericShieldDrawStyle *_defaultGenericShieldStyle;
}

+ (id)installedStylesheets;
+ (id)stylesheetWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(long long)arg4;
+ (void)_activeTileGroupWillChange;
@property(nonatomic) _Bool canSelectIcons; // @synthesize canSelectIcons=_canSelectIcons;
@property(readonly, nonatomic) long long targetDisplay; // @synthesize targetDisplay=_targetDisplay;
@property(nonatomic) float blendingFactor; // @synthesize blendingFactor=_blendingFactor;
@property(readonly) unsigned int updateStamp; // @synthesize updateStamp=_updateStamp;
@property(nonatomic) long long mapDisplayStyleVariant; // @synthesize mapDisplayStyleVariant=_mapDisplayStyleVariant;
@property(readonly, nonatomic) long long mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property(readonly, nonatomic) VKPGlobalProperties *styleGlobalProperties; // @synthesize styleGlobalProperties=_styleGlobalProperties;
- (void)prepareStyleVariantsForMapDisplayStyle:(long long)arg1;
@property(readonly, nonatomic) VKGenericShieldDrawStyle *defaultGenericShieldStyle;
- (id)_styleMatchingAttributes:(id)arg1 vectorType:(long long)arg2 locale:(id)arg3;
- (long long)rasterPolygonChangeoverZ;
- (float)shieldBrightnessForDisplayStyle:(long long)arg1;
- (float)shieldBrightnessForVectorType:(long long)arg1;
- (float)_nightShieldBrightnessForVectorType:(long long)arg1;
- (id)styleForFeature:(CDStruct_283a3ada *)arg1 vectorType:(long long)arg2 locale:(id)arg3;
- (id)styleForFeature:(CDStruct_283a3ada *)arg1 vectorType:(long long)arg2;
- (id)variantForStyle:(id)arg1;
- (id)sheetName;
- (void)dealloc;
- (_Bool)supportsMapDisplayStyle:(long long)arg1;
- (oneway void)release;
- (id)initWithData:(id)arg1 forName:(id)arg2 scale:(float)arg3 ppi:(float)arg4 targetDisplay:(long long)arg5;
- (id)init;
- (id)initWithScale:(float)arg1 ppi:(float)arg2;
- (id)initWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(long long)arg4;

@end

