/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIArtworkRequestDelegate-Protocol.h"
#import "SKUIEmbeddedMediaViewDelegate-Protocol.h"

@class SKUIEmbeddedMediaView, SKUIMediaComponent;

@interface SKUIMediaPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate>
{
    unsigned long long _artworkRequestID;
    struct CGSize _imageSize;
    SKUIEmbeddedMediaView *_mediaView;
    _Bool _pinned;
}

- (void).cxx_destruct;
- (void)_loadImageWithReason:(long long)arg1;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)setSectionIndex:(long long)arg1;
- (void)restorePinnedHeaderView:(id)arg1;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (id)popPinnedHeaderView;
- (long long)numberOfCells;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIMediaComponent *pageComponent; // @dynamic pageComponent;

@end

