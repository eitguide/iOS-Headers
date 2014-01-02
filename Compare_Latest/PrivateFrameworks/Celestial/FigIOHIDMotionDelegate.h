/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface FigIOHIDMotionDelegate : NSObject
{
    struct _opaque_pthread_mutex_t ringMutex;
    _Bool manageAccel;
    int accelRingIndex;
    float accelRingX[64];
    float accelRingY[64];
    float accelRingZ[64];
    double accelRingTime[64];
}

- (_Bool)managingAccel;
- (void)getVectorX:(float *)arg1 y:(float *)arg2 z:(float *)arg3 forTimeStamp:(double)arg4;
- (void)didUpdateAccelerationWithEventInfo:(CDStruct_bf7dff04 *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithOptions:(_Bool)arg1 enableRotation:(_Bool)arg2 enableAttitude:(_Bool)arg3;
- (void)deferOnRunloop_stopEvents;
- (void)deferOnRunloop_initManagerUsingIOHID;

@end

