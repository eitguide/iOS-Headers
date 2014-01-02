/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SKUIArtworkRequestDelegate-Protocol.h"

@class NSHashTable, NSMapTable, SKUIImageDataConsumer, SKUIResourceLoader, UIImage;

@interface SKUICategoryArtworkLoader : NSObject <SKUIArtworkRequestDelegate>
{
    NSMapTable *_artworkRequestIDs;
    SKUIImageDataConsumer *_imageDataConsumer;
    SKUIResourceLoader *_loader;
    NSHashTable *_observers;
    UIImage *_placeholderImage;
}

@property(retain, nonatomic) SKUIImageDataConsumer *imageDataConsumer; // @synthesize imageDataConsumer=_imageDataConsumer;
@property(readonly, nonatomic) SKUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_loader;
- (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)removeObserver:(id)arg1;
@property(readonly, nonatomic) struct CGSize imageSize;
@property(readonly, nonatomic) UIImage *placeholderImage;
- (void)loadImageForCategory:(id)arg1 reason:(long long)arg2;
- (id)cachedImageForCategory:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithArtworkLoader:(id)arg1;
- (id)init;

@end

