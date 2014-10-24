//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureSessionInternal, NSArray, NSString;

@interface AVCaptureSession : NSObject
{
    AVCaptureSessionInternal *_internal;
}

+ (BOOL)automaticallyNotifiesObserversOfRunning;
+ (BOOL)automaticallyNotifiesObserversOfMasterClock;
+ (id)publicSessionPresets;
+ (id)allSessionPresets;
+ (id)dotString;
+ (void)initialize;
+ (id)alloc;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleServerConnectionDiedNotification;
- (void)_notifyMediaServerdDied;
- (void)_handleConfigurationDidBecomeLiveNotificationWithPayload:(id)arg1;
- (void)_handleConfigurationCommittedNotificationWithPayload:(id)arg1;
- (void)_handleDidStopRunningNotificationWithPayload:(id)arg1;
- (void)_notifySessionStopped;
- (void)_handleDidStartRunningNotificationWithPayload:(id)arg1;
- (void)_notifySessionStarted;
- (void)_updateActiveConnections;
- (void)_updateDeviceActiveFormats;
- (void)_stopAndTearDownGraph;
- (BOOL)_buildAndRunGraph;
- (id)_figCaptureSessionConfiguration;
- (void)_makeConfigurationLive:(id)arg1 masterClock:(struct OpaqueCMClock *)arg2;
- (void)_postRuntimeError:(id)arg1;
- (id)_stopError;
- (id)sessionVideoCaptureDevices;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (id)_connectionsForNewInputPort:(id)arg1;
- (void)_teardownFigCaptureSession;
- (long)_createFigCaptureSession;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)videoHDREnabledForDevice:(id)arg1 format:(id)arg2 sessionPreset:(id)arg3;
- (id)valueForUndefinedKey:(id)arg1;
- (void)_setMasterClock:(struct OpaqueCMClock *)arg1;
@property(readonly, nonatomic) struct OpaqueCMClock *masterClock;
- (void)_rebuildGraph;
- (void)_setRunning:(BOOL)arg1;
- (BOOL)_stopFigCaptureSession;
- (BOOL)_startFigCaptureSession;
- (void)stopRunning;
- (void)startRunning;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
@property(nonatomic) BOOL automaticallyConfiguresApplicationAudioSession;
@property(nonatomic) BOOL usesApplicationAudioSession;
- (void)_setInterrupted:(BOOL)arg1;
@property(readonly, nonatomic, getter=isInterrupted) BOOL interrupted;
- (void)_removeConnection:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (void)addConnection:(id)arg1;
- (BOOL)canAddConnection:(id)arg1;
- (BOOL)_canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)_removeVideoPreviewLayer:(id)arg1;
- (void)_removeAllPreviewLayers;
- (void)_addVideoPreviewLayerWithNoConnection:(id)arg1;
- (void)_addVideoPreviewLayer:(id)arg1;
- (BOOL)_canAddVideoPreviewLayer:(id)arg1 failureReason:(id *)arg2;
- (void)removeOutput:(id)arg1;
- (void)_addOutputWithNoConnections:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (void)addOutput:(id)arg1;
- (BOOL)canAddOutput:(id)arg1;
- (BOOL)_canAddOutput:(id)arg1 failureReason:(id *)arg2;
@property(readonly, nonatomic) NSArray *outputs;
- (void)removeInput:(id)arg1;
- (void)_addInputWithNoConnections:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)addInput:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)_canAddInput:(id)arg1 failureReason:(id *)arg2;
@property(readonly, nonatomic) NSArray *inputs;
- (BOOL)isBeingConfigured;
- (void)_commitConfiguration;
- (void)_beginConfiguration;
- (void)commitConfiguration;
- (void)beginConfiguration;
@property(copy, nonatomic) NSString *sessionPreset;
- (BOOL)canSetSessionPreset:(id)arg1;
- (BOOL)notifiesOnMainThread;
- (id)description;
- (void)dealloc;
- (id)init;

@end
