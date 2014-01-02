/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibrary/PLCameraViewController.h>

#import "UIImagePickerCameraViewController-Protocol.h"

@interface PLUICameraViewController : PLCameraViewController <UIImagePickerCameraViewController>
{
    long long _previousStatusBarStyle;
    long long _newStatusBarStyle;
    struct CGAffineTransform _previewViewTransform;
}

- (_Bool)cameraViewShouldShowPreviewAfterSelection:(id)arg1;
- (void)cameraView:(id)arg1 videoSavedToPath:(id)arg2 editingInfo:(id)arg3;
- (void)cameraView:(id)arg1 photoSaved:(id)arg2;
- (void)cameraViewWillPreviewPhoto:(id)arg1;
- (void)cameraViewWillRetakePhoto:(id)arg1;
- (void)cameraViewCancelled:(id)arg1;
- (void)_windowOrientationWillChange:(id)arg1;
- (void)_adjustContentSizeForOrientation:(long long)arg1;
- (void)_stopVideoCapture;
- (_Bool)_startVideoCapture;
- (void)_setCameraFlashMode:(long long)arg1;
- (long long)_cameraFlashMode;
- (void)_setCameraCaptureMode:(long long)arg1;
- (long long)_cameraCaptureMode;
- (void)_setCameraDevice:(long long)arg1;
- (long long)_cameraDevice;
- (void)_takePicture;
- (void)_setCameraViewTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)_cameraViewTransform;
- (void)_setCameraOverlayView:(id)arg1;
- (id)_cameraOverlayView;
- (void)_setShowsCameraControls:(_Bool)arg1;
- (_Bool)_showsCameraControls;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_editabilityChanged:(id)arg1;
- (void)setWantsImageData:(_Bool)arg1;
- (void)setAllowsEditing:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)_imagePickerStatusBarStyle;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)loadView;
- (id)_cameraView;
- (void)dealloc;
- (_Bool)_displaysFullScreen;
- (id)init;

@end

