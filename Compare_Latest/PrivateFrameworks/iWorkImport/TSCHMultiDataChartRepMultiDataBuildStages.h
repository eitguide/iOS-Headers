/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSCHUnretainedParent-Protocol.h"

@class TSCHMultiDataChartRep;

// Not exported
@interface TSCHMultiDataChartRepMultiDataBuildStages : NSObject <TSCHUnretainedParent>
{
    TSCHMultiDataChartRep *mRep;
    struct _NSRange mStages;
    double mTotalDuration;
    double mDuration;
    unsigned long long mCurrentStage;
}

+ (id)buildStagesWithRep:(id)arg1 stages:(struct _NSRange)arg2 totalDuration:(double)arg3;
+ (unsigned long long)dataSetIndexForRep:(id)arg1 buildStage:(unsigned long long)arg2;
+ (unsigned long long)numberOfFadingBuildStages;
@property(readonly, nonatomic) double duration; // @synthesize duration=mDuration;
@property(readonly, nonatomic) unsigned long long currentStage; // @synthesize currentStage=mCurrentStage;
- (id).cxx_construct;
- (_Bool)hasStage;
- (void)advanceStage;
- (unsigned long long)dataSetIndexForStage:(unsigned long long)arg1;
- (_Bool)isFadingInLayers;
- (_Bool)isLastStageBackgroundOnly;
- (_Bool)isBackgroundOnly;
- (_Bool)isBackgroundOnlyStage:(unsigned long long)arg1;
- (id)chartLayout;
- (void)setupLayoutDataSetIndexForNextStage;
- (void)setupLayoutDataSetIndexForCurrentStage;
- (void)clearParent;
- (void)dealloc;
- (id)initWithRep:(id)arg1 stages:(struct _NSRange)arg2 totalDuration:(double)arg3;

@end

