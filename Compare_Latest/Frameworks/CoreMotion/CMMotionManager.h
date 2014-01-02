/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CMAccelerometerData, CMDeviceMotion, CMGyroData, CMMagnetometerData;

@interface CMMotionManager : NSObject
{
    id _internal;
}

+ (void)dummySelector:(id)arg1;
+ (void)setAllowInBackground:(_Bool)arg1;
+ (unsigned long long)availableAttitudeReferenceFrames;
+ (void)initialize;
- (void)didBecomeActivePrivate:(id)arg1;
- (void)willResignActivePrivate:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)onGeomagneticModel:(const CDStruct_3e502cbb *)arg1;
- (void)onDeviceMotion:(const struct Sample *)arg1;
- (void)onMagnetometer:(const struct Sample *)arg1;
- (void)onGyro:(const struct Sample *)arg1;
- (void)onAccelerometer:(const struct Sample *)arg1;
- (long long)gyroStartupLatency;
- (void)setNotificationCallback:(void *)arg1 info:(void *)arg2;
- (void)setMaxAccelerationVarianceForStability:(float)arg1;
- (void)setSensorTurnOffTime:(double)arg1;
- (void)setSensorThrottleTime:(double)arg1;
- (void)setWantsPowerConservativeDeviceMotion:(_Bool)arg1;
- (void)setDeviceMotionCallback:(void *)arg1 info:(void *)arg2 interval:(double)arg3 fsync:(_Bool)arg4;
- (void)setGyroDataCallback:(void *)arg1 info:(void *)arg2 interval:(double)arg3;
- (void)setAccelerometerDataCallback:(void *)arg1 info:(void *)arg2 interval:(double)arg3;
- (id)initUsingGyroOnlySensorFusion;
- (id)initUsing6AxisSensorFusion;
- (void)dismissDeviceMovementDisplay;
- (void)showDeviceMovementDisplay;
- (void)setShowsDeviceMovementDisplayPrivate:(_Bool)arg1;
@property(nonatomic) _Bool showsDeviceMovementDisplay;
- (void)stopMagnetometerUpdatesPrivate;
- (void)startMagnetometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)setMagnetometerUpdateIntervalPrivate:(double)arg1;
- (void)stopMagnetometerUpdates;
- (void)startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startMagnetometerUpdates;
@property(readonly) CMMagnetometerData *magnetometerData;
@property(nonatomic) double magnetometerUpdateInterval;
@property(readonly, nonatomic, getter=isMagnetometerActive) _Bool magnetometerActive;
@property(readonly, nonatomic, getter=isMagnetometerAvailable) _Bool magnetometerAvailable;
- (int)gyttNumTemperatures;
- (void)rebuildGytt;
- (void)stopDeviceMotionUpdatesPrivate;
- (void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(int)arg1 toQueue:(id)arg2 withHandler:(id)arg3;
- (void)setDeviceMotionUpdateIntervalPrivate:(double)arg1;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)arg1 toQueue:(id)arg2 withHandler:(id)arg3;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)arg1;
- (void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startDeviceMotionUpdates;
@property(readonly) CMDeviceMotion *deviceMotion; // @dynamic deviceMotion;
@property(readonly, nonatomic) int attitudeReferenceFrame; // @dynamic attitudeReferenceFrame;
@property(nonatomic) double deviceMotionUpdateInterval; // @dynamic deviceMotionUpdateInterval;
@property(readonly, nonatomic, getter=isDeviceMotionActive) _Bool deviceMotionActive; // @dynamic deviceMotionActive;
@property(readonly, nonatomic, getter=isDeviceMotionAvailable) _Bool deviceMotionAvailable; // @dynamic deviceMotionAvailable;
- (void)stopGyroUpdatesPrivate;
- (void)startGyroUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)setGyroUpdateIntervalPrivate:(double)arg1;
- (void)stopGyroUpdates;
- (void)startGyroUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startGyroUpdates;
@property(readonly) CMGyroData *gyroData; // @dynamic gyroData;
@property(nonatomic) double gyroUpdateInterval; // @dynamic gyroUpdateInterval;
@property(readonly, nonatomic, getter=isGyroActive) _Bool gyroActive; // @dynamic gyroActive;
@property(readonly, nonatomic, getter=isGyroAvailable) _Bool gyroAvailable; // @dynamic gyroAvailable;
- (void)stopAccelerometerUpdatesPrivate;
- (void)startAccelerometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)setAccelerometerUpdateIntervalPrivate:(double)arg1;
- (void)stopAccelerometerUpdates;
- (void)startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startAccelerometerUpdates;
@property(readonly) CMAccelerometerData *accelerometerData; // @dynamic accelerometerData;
@property(nonatomic) double accelerometerUpdateInterval; // @dynamic accelerometerUpdateInterval;
@property(readonly, nonatomic, getter=isAccelerometerActive) _Bool accelerometerActive; // @dynamic accelerometerActive;
@property(readonly, nonatomic, getter=isAccelerometerAvailable) _Bool accelerometerAvailable; // @dynamic accelerometerAvailable;
- (void)deallocPrivate;
- (void)dealloc;
- (id)initPrivate;
- (id)init;
- (_Bool)useAccelerometer;
- (void)setUseAccelerometer:(_Bool)arg1;

@end

