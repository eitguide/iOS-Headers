/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CUIStructuredThemeStorage-Protocol.h"
#import "CUIStructuredThemeStorage2-Protocol.h"

@class CUICommonAssetStorage, NSLock, NSMutableDictionary, NSString;

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2>
{
    NSMutableDictionary *_cache;
    CUICommonAssetStorage *_store;
    NSLock *_cacheLock;
    NSLock *_storeLock;
    unsigned long long _themeIndex;
    NSString *_bundleID;
}

- (void)clearRenditionCache;
- (id)cacheLock;
- (id)cache;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint *)arg2;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1;
- (id)zeroCodeGlyphList;
- (_Bool)_canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1 isFPO:(_Bool *)arg2 lookForSubstitutions:(_Bool)arg3;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1 isFPO:(_Bool *)arg2;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1;
- (id)prefilteredAssetDataForKey:(struct _renditionkeytoken *)arg1;
- (id)lookupAssetForKey:(struct _renditionkeytoken *)arg1;
- (id)debugDescriptionForKeyList:(const struct _renditionkeytoken *)arg1;
- (const struct _renditionkeyfmt *)renditionKeyFormat;
- (void)_getKeyForAssetInOtherLookGroupClosestToKey:(struct _renditionkeytoken *)arg1 foundAsset:(_Bool *)arg2;
- (void)_getKeyForAssetClosestToKey:(struct _renditionkeytoken *)arg1 foundAsset:(_Bool *)arg2;
- (id)convertRenditionKeyToKeyData:(struct _renditionkeytoken *)arg1;
- (id)_newRenditionKeyDataFromKey:(struct _renditionkeytoken *)arg1;
- (void)_updateKeyWithCompatibilityMapping:(struct _renditionkeytoken *)arg1;
- (double)fontSizeForFontSizeType:(id)arg1;
- (_Bool)getFontName:(id *)arg1 baselineOffset:(double *)arg2 forFontType:(id)arg3;
- (_Bool)hasPhysicalColorWithName:(id)arg1;
- (_Bool)getPhysicalColor:(struct _colordef *)arg1 withName:(id)arg2;
- (unsigned int)authoredWithSchemaVersion;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)documentFormatVersion;
- (id)themeStore;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithPath:(id)arg1;
- (_Bool)assetExistsForKey:(struct _renditionkeytoken *)arg1;
- (id)keySignatureForKey:(const struct _renditionkeytoken *)arg1;
- (id)copyKeySignatureForKey:(const struct _renditionkeytoken *)arg1 withBytesNoCopy:(char *)arg2 length:(unsigned long long)arg3;
- (id)baseGradationKeySignatureForKey:(const struct _renditionkeytoken *)arg1;
- (const struct _renditionkeyfmt *)keyFormat;
- (_Bool)usesCUISystemThemeRenditionKey;
- (long long)maximumRenditionKeyTokenCount;
- (unsigned long long)colorSpaceID;

@end

