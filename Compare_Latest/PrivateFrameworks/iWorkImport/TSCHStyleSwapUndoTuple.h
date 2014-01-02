/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSPObject<TSCHStyleSwapSupporting>, TSSPropertySet, TSSStyle;

// Not exported
@interface TSCHStyleSwapUndoTuple : NSObject
{
    TSPObject<TSCHStyleSwapSupporting> *mStyleSwapSupporting;
    int mSwapType;
    unsigned long long mIndex;
    TSSStyle *mOldValue;
    TSSStyle *mNewValue;
    TSSPropertySet *mMutatedProperties;
}

@property(readonly) int swapType; // @synthesize swapType=mSwapType;
@property(readonly) unsigned long long index; // @synthesize index=mIndex;
@property(readonly) TSSStyle *afterValue; // @synthesize afterValue=mNewValue;
@property(readonly) TSSStyle *beforeValue; // @synthesize beforeValue=mOldValue;
@property(readonly, nonatomic) TSPObject<TSCHStyleSwapSupporting> *styleSwapSupporting; // @synthesize styleSwapSupporting=mStyleSwapSupporting;
- (_Bool)canApplyTupleToStyleSwapSupporting:(id)arg1;
- (id)description;
@property(readonly) TSSPropertySet *mutatedProperties;
- (id)p_nonequalPropertiesFromMap:(id)arg1 toMap:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)inverse;
- (void)dealloc;
- (id)initWithChartStylePreset:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5;
- (id)initWithChartInfo:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5;
- (id)p_initWithPersistentStyleSwapSupporting:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5;

@end

