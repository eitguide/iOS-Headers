/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SWRunWorkoutObserver-Protocol.h"

@class NSArray, NSMutableArray;

@interface SWIntervalSnapshotObserver : NSObject <SWRunWorkoutObserver>
{
    NSMutableArray *_snapshots;
    unsigned long long _timeIntervalInSeconds;
    float _distanceIntervalInMiles;
    float _calorieInterval;
    unsigned long long _previousTimeSnapshotIndex;
    unsigned long long _previousDistanceSnapshotIndex;
    unsigned long long _previousCalorieSnapshotIndex;
}

- (void)adjustSnapshotsForDistanceScaleFactor:(float)arg1;
- (void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2;
- (void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(unsigned long long)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6;
@property(readonly, nonatomic) NSArray *snapshots; // @dynamic snapshots;
- (void)dealloc;
- (id)initWithCalorieInterval:(float)arg1;
- (id)initWithDistanceIntervalInMiles:(float)arg1;
- (id)initWithTimeIntervalInSeconds:(unsigned long long)arg1;
- (id)_init;

@end

