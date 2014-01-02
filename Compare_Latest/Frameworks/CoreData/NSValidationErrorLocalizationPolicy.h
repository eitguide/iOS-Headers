/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSBundle, NSDictionary, NSString, NSURL;

// Not exported
@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying>
{
    NSURL *_url;
    NSBundle *_localizationBundle;
    NSString *_modelStringsFileName;
    NSDictionary *_localizationDictionary;
    _Bool _hasSetLocalizationDictionary;
}

- (id)localizedModelStringForKey:(id)arg1;
- (id)localizedPropertyNameForProperty:(id)arg1;
- (id)_localizedPropertyNameForProperty:(id)arg1 entity:(id)arg2;
- (id)localizedEntityNameForEntity:(id)arg1;
- (void)setLocalizationDictionary:(id)arg1;
- (id)localizationDictionary;
- (id)_cachedObjectForKey:(id)arg1 value:(void *)arg2;
- (id)_localizedStringForKey:(id)arg1 value:(void *)arg2;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (void)_ensureLocalizationDictionaryIsInitialized;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

