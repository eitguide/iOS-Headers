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

+ (id)faceDetectionModeMap;
+ (id)availableModes;
+ (id)scalingModeMap;
+ (id)avOrientationMap;
+ (id)reasonMap;
+ (id)torchModeMap;
+ (id)flashModeMap;
+ (id)focusModeMap;
+ (id)presetMap;
+ (id)convertMoofToMoovInFile:(id)arg1;
+ (id)updateMetadataInFile:(id)arg1 withMetadata:(id)arg2;
@property(readonly) BOOL isCapturingPhoto; // @synthesize isCapturingPhoto=_isCapturingPhoto;
@property(retain) NSURL *fileURLForRecording; // @synthesize fileURLForRecording=_fileURLForRecording;
@property(retain) NSString *qualityPreset; // @synthesize qualityPreset=_qualityPreset;
@property(retain) NSString *captureMode; // @synthesize captureMode=_captureMode;
@property(retain) AVCamera *sourceCamera; // @synthesize sourceCamera=_sourceCamera;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (void)didStartFocusingHandler:(id)arg1;
- (void)didFinishFocusingHandler:(id)arg1;
- (void)didCancelFocusingHandler:(id)arg1;
- (void)didStopRecordingHandler:(id)arg1;
- (void)didFailToStartRecordingHandler:(id)arg1;
- (void)photoTakenHandler:(id)arg1;
- (void)didCompleteOutputHandler:(id)arg1;
@property BOOL useFlashRedEyeReduction;
@property BOOL useFlashAFAssist;
@property(retain) NSString *faceDetectionMode;
@property(retain) NSString *flashMode;
@property(retain) NSString *torchMode;
@property BOOL mirrorPreview;
@property(readonly) NSString *noiseReductionMethodName;
@property(readonly, nonatomic) BOOL isHighDynamicRangeAvailable;
@property(readonly) BOOL isTorchReady;
@property(readonly) int noiseReductionMethodCount;
@property int noiseReductionMethod;
@property(nonatomic) float contrast;
@property(nonatomic) float saturation;
@property(nonatomic) float whiteBalance;
@property BOOL lockAutoWhiteBalance;
@property(nonatomic) float autoExposureTarget;
@property BOOL lockAutoExposure;
@property BOOL monitorSubjectArea;
- (BOOL)focusUsingMethod:(id)arg1 options:(id)arg2;
@property(readonly) int maxJPEGSize;
@property(readonly) double recordedDuration;
@property(readonly) long long recordedFileSizeBytes;
@property long long freeDiskSpaceLimit;
@property double recordedDurationLimit;
@property long long recordedFileSizeBytesLimit;
- (BOOL)capturePhoto;
- (BOOL)capturePhoto:(id)arg1;
- (void)setIsCapturingPhoto:(BOOL)arg1;
@property BOOL locationMetadataTrackEnabled;
@property unsigned int audioCaptureFormat;
@property(nonatomic) BOOL pauseRecordingOnInterruption;
@property(readonly) BOOL isPaused;
- (BOOL)addChapterMarker:(id)arg1 atTime:(double)arg2;
@property BOOL chapterMarkersEnabled;
- (BOOL)resumeRecording;
- (BOOL)pauseRecording;
@property(readonly) BOOL isRecording;
- (BOOL)stopRecording;
- (BOOL)startRecording;
- (BOOL)resumePreview;
- (BOOL)pausePreview;
@property BOOL suspendPreviewOnPhotoCapture;
@property(readonly) BOOL isPreviewing;
- (BOOL)stopPreview;
- (BOOL)startPreview;
@property(readonly) NSArray *audioLevel;
@property BOOL audioMeteringEnabled;
@property(retain) NSString *videoPreviewLayerScalingMode;
@property(retain) NSString *videoPreviewLayerOrientation;
@property(retain) CALayer *videoPreviewLayer;
- (id)objectForMetadataKey:(id)arg1;
- (void)setObject:(id)arg1 forMetadataKey:(id)arg2;
@property(copy) NSDictionary *metadata;
@property(retain) NSString *orientation;
- (BOOL)setCaptureMode:(id)arg1 qualityPreset:(id)arg2;
@property BOOL dumpSensorInfo;
- (void)dealloc;
- (id)initLocal;
- (id)init;
- (id)initWithCaptureMode:(id)arg1 qualityPreset:(id)arg2;
- (id)initWithFigRecorderCreateFunction:(void *)arg1 captureMode:(id)arg2 qualityPreset:(id)arg3;
- (BOOL)getRecorderBoolForKey:(id)arg1 withDefault:(BOOL)arg2;
- (id)captureFormatForCaptureMode:(id)arg1 qualityPreset:(id)arg2;
- (id)optionsForCaptureMode:(id)arg1 qualityPreset:(id)arg2;

@end

