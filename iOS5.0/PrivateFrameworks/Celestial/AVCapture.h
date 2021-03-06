/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCamera, CALayer, NSArray, NSDictionary, NSString, NSURL;

@interface AVCapture : NSObject
{
    struct AVCapturePrivate *_priv;
    AVCamera *_sourceCamera;
    NSString *_captureMode;
    NSString *_qualityPreset;
    BOOL _isCapturingPhoto;
    NSURL *_fileURLForRecording;
    BOOL _returnIOSurface;
}

+ (id)updateMetadataInFile:(id)arg1 withMetadata:(id)arg2;
+ (id)convertMoofToMoovInFile:(id)arg1;
+ (id)presetMap;
+ (id)focusModeMap;
+ (id)flashModeMap;
+ (id)torchModeMap;
+ (id)reasonMap;
+ (id)avOrientationMap;
+ (id)scalingModeMap;
+ (id)availableModes;
+ (id)faceDetectionModeMap;
- (id)optionsForCaptureMode:(id)arg1 qualityPreset:(id)arg2;
- (id)captureFormatForCaptureMode:(id)arg1 qualityPreset:(id)arg2;
- (BOOL)getRecorderBoolForKey:(id)arg1 withDefault:(BOOL)arg2;
- (id)initWithFigRecorderCreateFunction:(void *)arg1 captureMode:(id)arg2 qualityPreset:(id)arg3;
- (id)initWithCaptureMode:(id)arg1 qualityPreset:(id)arg2;
- (id)init;
- (id)initLocal;
- (void)dealloc;
@property BOOL dumpSensorInfo;
@property(retain) NSString *captureMode; // @synthesize captureMode=_captureMode;
@property(retain) NSString *qualityPreset; // @synthesize qualityPreset=_qualityPreset;
- (BOOL)setCaptureMode:(id)arg1 qualityPreset:(id)arg2;
@property(retain) NSString *orientation;
@property(copy) NSDictionary *metadata;
- (void)setObject:(id)arg1 forMetadataKey:(id)arg2;
- (id)objectForMetadataKey:(id)arg1;
@property(retain) CALayer *videoPreviewLayer;
@property(retain) NSString *videoPreviewLayerOrientation;
@property(retain) NSString *videoPreviewLayerScalingMode;
@property BOOL audioMeteringEnabled;
@property(readonly) NSArray *audioLevel;
- (BOOL)startPreview;
- (BOOL)stopPreview;
@property(readonly) BOOL isPreviewing;
@property BOOL suspendPreviewOnPhotoCapture;
- (BOOL)pausePreview;
- (BOOL)resumePreview;
- (BOOL)startRecording;
- (BOOL)stopRecording;
@property(readonly) BOOL isRecording;
- (BOOL)pauseRecording;
- (BOOL)resumeRecording;
@property BOOL chapterMarkersEnabled;
- (BOOL)addChapterMarker:(id)arg1 atTime:(double)arg2;
@property(readonly) BOOL isPaused;
@property(nonatomic) BOOL pauseRecordingOnInterruption;
@property unsigned int audioCaptureFormat;
@property BOOL locationMetadataTrackEnabled;
- (void)setIsCapturingPhoto:(BOOL)arg1;
- (BOOL)capturePhoto:(id)arg1;
- (BOOL)capturePhoto;
@property long long recordedFileSizeBytesLimit;
@property double recordedDurationLimit;
@property long long freeDiskSpaceLimit;
@property(readonly) long long recordedFileSizeBytes;
@property(readonly) double recordedDuration;
@property(readonly) int maxJPEGSize;
- (BOOL)focusUsingMethod:(id)arg1 options:(id)arg2;
@property BOOL monitorSubjectArea;
@property BOOL lockAutoExposure;
@property(nonatomic) float autoExposureTarget;
@property BOOL lockAutoWhiteBalance;
@property(nonatomic) float whiteBalance;
@property(nonatomic) float saturation;
@property(nonatomic) float contrast;
@property int noiseReductionMethod;
@property(readonly) int noiseReductionMethodCount;
@property(readonly) BOOL isTorchReady;
@property(readonly, nonatomic) BOOL isHighDynamicRangeAvailable;
@property(readonly, retain) NSString *noiseReductionMethodName;
@property BOOL mirrorPreview;
@property(retain) NSString *torchMode;
@property(retain) NSString *flashMode;
@property(retain) NSString *faceDetectionMode;
@property BOOL useFlashAFAssist;
@property BOOL useFlashRedEyeReduction;
- (void)didCompleteOutputHandler:(id)arg1;
- (void)photoTakenHandler:(id)arg1;
- (void)didFailToStartRecordingHandler:(id)arg1;
- (void)didStopRecordingHandler:(id)arg1;
- (void)didCancelFocusingHandler:(id)arg1;
- (void)didFinishFocusingHandler:(id)arg1;
- (void)didStartFocusingHandler:(id)arg1;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
@property(readonly) BOOL isCapturingPhoto; // @synthesize isCapturingPhoto=_isCapturingPhoto;
@property(retain) NSURL *fileURLForRecording; // @synthesize fileURLForRecording=_fileURLForRecording;
@property(retain) AVCamera *sourceCamera; // @synthesize sourceCamera=_sourceCamera;

@end

