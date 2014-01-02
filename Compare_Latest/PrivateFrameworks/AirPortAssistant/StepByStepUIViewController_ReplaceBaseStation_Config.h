/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>

#import "StepByStepUIDevicePicker-Protocol.h"

@class NSString, UILabel, UIView;

@interface StepByStepUIViewController_ReplaceBaseStation_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker>
{
    UIView *justTextContainerView2;
    UILabel *justTextLabel2;
    NSString *personalizedBaseName;
}

@property(retain, nonatomic) NSString *personalizedBaseName; // @synthesize personalizedBaseName;
@property(retain, nonatomic) UIView *justTextContainerView2; // @synthesize justTextContainerView2;
- (void)primaryActionSelected:(_Bool)arg1;
- (_Bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (void)validateAndUpdateNextButton;
- (void)selectedDeviceUpdated;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)setupDevices;
- (void)updateNavigationButtons;
- (void)prepareParams;
- (void)setupHeaderAndFooter;
- (void)setupEditableBaseStationName;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

@end

