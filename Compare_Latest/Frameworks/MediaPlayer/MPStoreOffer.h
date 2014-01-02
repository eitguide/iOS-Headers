/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@interface MPStoreOffer : NSObject
{
    NSDictionary *_offerDictionary;
    MPStoreOffer *_regularPriceOffer;
    NSDictionary *_mediaAssetDictionary;
    unsigned long long _entityPersistentID;
    long long _entityType;
    NSString *_entityTitle;
    long long _passType;
}

+ (long long)buyTypeForOfferDictionary:(id)arg1;
+ (id)_priceForOfferDictionary:(id)arg1;
+ (long long)bestOfferVariantInOfferDictionaries:(id)arg1 withPreferredVariant:(long long)arg2;
+ (void)getBuyOfferDictionary:(id *)arg1 regularPriceOfferDictionary:(id *)arg2 inOfferDictionaries:(id)arg3 variant:(long long)arg4;
+ (void)getBuyOfferDictionary:(id *)arg1 regularPriceOfferDictionary:(id *)arg2 inOfferDictionaries:(id)arg3 variantString:(id)arg4;
+ (id)offerVariantResponseKeyForOfferVariant:(long long)arg1;
@property(readonly, nonatomic) long long passType; // @synthesize passType=_passType;
@property(readonly, nonatomic) NSString *entityTitle; // @synthesize entityTitle=_entityTitle;
@property(readonly, nonatomic) long long entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) unsigned long long entityPersistentID; // @synthesize entityPersistentID=_entityPersistentID;
- (void).cxx_destruct;
- (id)storeOfferDictionary;
@property(readonly, nonatomic) double previewDuration;
@property(readonly, nonatomic) NSURL *previewURL;
@property(readonly, nonatomic) unsigned long long downloadSize;
@property(readonly, nonatomic) NSString *regularPriceDisplayPrice;
@property(readonly, nonatomic) float price;
@property(readonly, nonatomic) NSString *displayPrice;
@property(readonly, nonatomic) _Bool requiresConfirmation;
@property(readonly, nonatomic) NSString *actionDisplayTitle;
@property(readonly, nonatomic) NSString *displayTitle;
@property(readonly, nonatomic) NSString *buyParameters;
- (id)buyURL;
- (_Bool)_isBuy;
@property(readonly, nonatomic) long long buyType;
- (id)initWithStoreOfferDictionary:(id)arg1 regularPriceOfferDictionary:(id)arg2 passType:(long long)arg3 entityType:(long long)arg4 persistentID:(unsigned long long)arg5 title:(id)arg6;

@end

