//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNAnimatedSlideView, KNPlaybackSession, NSArray, NSDictionary, NSMutableArray, TSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface KNAnimatedSlideModel : NSObject
{
    KNAnimatedSlideView *mASV;
    NSArray *mBuilds;
    NSArray *mBuildChunks;
    KNPlaybackSession *mSession;
    NSMutableArray *mBuildEvents;
    TSUNoCopyDictionary *mInfoToAnimatedBuildMap;
    NSDictionary *mInfoMap;
    NSArray *mInfos;
    NSMutableArray *mAnimatedBuilds;
}

@property(readonly, nonatomic) NSArray *renderers; // @synthesize renderers=mBuildEvents;
@property(readonly, nonatomic) NSDictionary *infoMap; // @synthesize infoMap=mInfoMap;
@property(readonly, nonatomic) NSArray *animatedBuilds; // @synthesize animatedBuilds=mAnimatedBuilds;
@property(readonly, nonatomic) NSArray *infos; // @synthesize infos=mInfos;
- (Class)effectClassFromBuild:(id)arg1 duration:(double)arg2;
- (id)finalActionEffectForDrawable:(id)arg1;
- (id)actionEffectForDrawable:(id)arg1 atBeginningOfEvent:(int)arg2;
- (id)previousBuildInForInfo:(id)arg1 priorToBuild:(id)arg2;
- (id)previousAnimatedBuildForInfo:(id)arg1 priorToBuild:(id)arg2;
- (id)animatedBuildForInfo:(id)arg1 atEvent:(int)arg2;
- (id)animatedBuildForInfo:(id)arg1 aroundEvent:(int)arg2 isAtEndOfBuild:(char *)arg3;
- (id)lastAnimatedBuildForInfo:(id)arg1;
- (id)firstAnimatedBuildForInfo:(id)arg1;
- (struct _NSRange)eventRangeForInfos:(id)arg1;
- (double)durationForEventIndexes:(id)arg1;
- (id)buildChunksForEventRange:(struct _NSRange)arg1;
- (int)outEventForInfo:(id)arg1;
- (int)inEventForInfo:(id)arg1;
- (BOOL)info:(id)arg1 isVisibleDuringEvent:(int)arg2;
- (void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)eventsAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)transition;
- (id)createInfoToBuildMap:(id)arg1;
- (void)setTransition:(id)arg1;
- (void)dealloc;
- (id)initWithBuilds:(id)arg1 buildChunks:(id)arg2 infos:(id)arg3 session:(id)arg4 animatedSlideView:(id)arg5;
- (void)p_insertInitialMovies;
- (id)p_createInfoListFromRendererList:(id)arg1;
- (int)p_eventNumberForInfo:(id)arg1 key:(id)arg2 defaultResult:(int)arg3;
- (BOOL)p_determineVisiblityOfInfo:(id)arg1 inOverloadedEvent:(int)arg2 duringEvent:(int)arg3;
- (id)p_createBuildAnimationRecords:(id)arg1 info:(id)arg2 event:(int)arg3 start:(double)arg4 eventStart:(double)arg5 animateAtEndOfPreviousBuild:(BOOL)arg6 previousAnimatedBuild:(id)arg7 movieDrawables:(id)arg8;
- (id)p_createMovieBuild:(id)arg1 stageIndex:(int)arg2 buildChunk:(id)arg3 startTime:(double)arg4 eventStartTime:(double)arg5 event:(int)arg6 animateAtEndOfPreviousBuild:(BOOL)arg7;
- (id)p_convertToBuildEvents:(id)arg1;
- (void)p_updatePreviousAndFinalAttributes;
- (id)p_animatedBuildForInfo:(id)arg1 event:(int)arg2 buildIn:(BOOL)arg3;

@end
