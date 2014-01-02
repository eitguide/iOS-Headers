/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>

#import "StepByStepUIDevicePicker-Protocol.h"

@class NSString;

@interface StepByStepUIViewController_ExtendWireless_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker>
{
    NSString *connectionType;
    NSString *unlocalizedStatusString;
    NSString *personalizedBaseName;
    _Bool isReallyJoin;
}

@property(retain, nonatomic) NSString *personalizedBaseName; // @synthesize personalizedBaseName;
- (_Bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (void)validateAndUpdateNextButton;
- (void)setupDevices;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)updateNavigationButtons;
- (void)selectedDeviceUpdated;
- (void)primaryActionSelected:(_Bool)arg1;
- (void)setupHeaderAndFooter;
- (void)setupAndShowEditableBaseStationName;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

