/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UICollectionViewDataSource-Protocol.h"

@interface PUCollectionViewIntermediateDataSource : NSObject <UICollectionViewDataSource>
{
    id <UICollectionViewDataSource> _realDataSource;
}

@property(nonatomic) id <UICollectionViewDataSource> realDataSource; // @synthesize realDataSource=_realDataSource;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;

@end

