/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIModalView.h>

@interface UIModalView (Private)
+ (void)noteOrientationChangingTo:(long long)arg1;
+ (id)visibleAlert;
+ (id)topMostAlert;
+ (_Bool)atLeastOneAlertVisible;
+ (id)_popupAlertBackground;
+ (struct CGSize)minimumSize;
- (_Bool)canBecomeFirstResponder;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_prepareToBeReplaced;
- (void)replaceAlert:(id)arg1;
- (void)_prepareForDisplay;
- (id)taglineTextView;
- (id)bodyTextView;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)layout;
- (void)_truncateViewHeight:(id)arg1 toFitInFrame:(struct CGRect)arg2 withMinimumHeight:(double)arg3;
- (long long)numberOfLinesInTitle;
- (double)_buttonHeight;
- (double)_maxHeight;
- (struct CGRect)titleRect;
- (_Bool)runsModal;
- (void)setRunsModal:(_Bool)arg1;
- (_Bool)blocksInteraction;
- (void)setBlocksInteraction:(_Bool)arg1;
- (long long)suspendTag;
- (void)setSuspendTag:(long long)arg1;
- (_Bool)dimsBackground;
- (void)setDimsBackground:(_Bool)arg1;
- (void)setAlertSheetStyle:(int)arg1;
- (int)alertSheetStyle;
- (long long)numberOfRows;
- (void)setNumberOfRows:(long long)arg1;
- (void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_appSuspended:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (double)_bottomVerticalInset;
- (double)_titleHorizontalInset;
- (double)_titleVerticalBottomInset;
- (double)_titleVerticalTopInset;
- (struct CGSize)backgroundSize;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)_slideSheetOut:(_Bool)arg1;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (id)_dimView;
- (void)setDimView:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)_presentSheetFromView:(id)arg1 above:(_Bool)arg2;
- (void)popupAlertAnimated:(_Bool)arg1;
- (void)userDidCancelPopoverView:(id)arg1;
- (void)popupAlertAnimated:(_Bool)arg1 fromBarButtonItem:(id)arg2;
- (void)popupAlertAnimated:(_Bool)arg1 atOffset:(double)arg2;
- (void)_layoutIfNeeded;
- (void)_layoutPopupAlertWithOrientation:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)isBodyTextTruncated;
- (void)layoutAnimated:(_Bool)arg1;
- (void)layoutAnimated:(_Bool)arg1 withDuration:(double)arg2;
- (void)_rotatingAnimationDidStop:(id)arg1;
- (void)_setupInitialFrame;
- (void)_cancelAnimated:(_Bool)arg1;
- (void)_hideAnimated:(_Bool)arg1;
- (void)_temporarilyHideAnimated:(_Bool)arg1;
- (void)_removeAlertWindowOrShowAnOldAlert;
- (_Bool)_canShowAlerts;
- (_Bool)_dimsBackground;
- (void)_repopup;
- (void)_repopupNoAnimation;
- (void)_performPopoutAnimationAnimated:(_Bool)arg1;
- (void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (_Bool)_isAnimating;
- (void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2;
- (void)_growAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_performPopup:(_Bool)arg1;
- (_Bool)showsOverSpringBoardAlerts;
- (void)setShowsOverSpringBoardAlerts:(_Bool)arg1;
- (_Bool)_manualKeyboardIsVisible;
- (_Bool)_needsKeyboard;
- (id)tableView;
- (_Bool)tableShouldShowMinimumContent;
- (void)setTableShouldShowMinimumContent:(_Bool)arg1;
- (void)_cleanupAfterPopupAnimation;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (_Bool)_isSBAlert;
- (void)_buttonClicked:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (long long)buttonCount;
- (id)_addButtonWithTitleText:(id)arg1;
- (id)_addButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)destructiveButton;
- (void)setDestructiveButton:(id)arg1;
- (id)_defaultButton;
- (void)_setDefaultButton:(id)arg1;
- (id)defaultButton;
- (void)setDefaultButton:(id)arg1;
- (id)keyboard;
- (void)_alertSheetTextFieldReturn:(id)arg1;
- (id)textField;
- (long long)textFieldCount;
- (id)textFieldAtIndex:(long long)arg1;
- (void)_setTextFieldsHidden:(_Bool)arg1;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (long long)bodyMaxLineCount;
- (void)setBodyTextMaxLineCount:(long long)arg1;
- (long long)titleMaxLineCount;
- (void)setTitleMaxLineCount:(long long)arg1;
- (id)bodyText;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setTaglineText:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)_setupTitleStyle;
- (void)_createTaglineTextLabelIfNeeded;
- (void)_createBodyTextLabelIfNeeded;
- (void)_createSubtitleLabelIfNeeded;
- (void)_createTitleLabelIfNeeded;
- (id)buttons;
- (void)_setAlertSheetStyleFromButtonBar:(id)arg1;
- (long long)_currentOrientation;
- (_Bool)requiresPortraitOrientation;
@property(nonatomic) _Bool groupsTextFields;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(long long)arg3 delegate:(id)arg4 context:(id)arg5;
@end

