/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, TKToneTableController, UITableView;

@interface TKTonePicker : UIView
{
    UITableView *_table;
    TKToneTableController *_tableController;
    id _delegate;
}

+ (id)tonePickerWithFrame:(struct CGRect)arg1;
+ (id)texttonePickerWithFrame:(struct CGRect)arg1;
+ (id)ringtonePickerWithFrame:(struct CGRect)arg1;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)ringtoneTableController:(id)arg1 willPlayRingtoneWithIdentifier:(id)arg2;
- (void)ringtoneTableController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2;
- (void)ringtoneTableController:(id)arg1 selectedRingtoneWithIdentifier:(id)arg2;
- (double)contentHeight;
- (void)setCustomTableViewCellClass:(Class)arg1;
@property(retain, nonatomic) id <TKTonePickerStyleProvider> styleProvider;
- (void)finishedWithPicker;
- (void)stopPlayingWithFadeOut:(_Bool)arg1;
- (void)stopPlaying;
- (void)displayScrollerIndicators;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setSelectedVibrationIdentifier:(id)arg1;
- (id)selectedVibrationIdentifier;
- (void)setAllowsDeletingCurrentSystemVibration:(_Bool)arg1;
- (_Bool)allowsDeletingCurrentSystemVibration;
- (void)setShowsNoVibrationSelected:(_Bool)arg1;
- (void)setShowsNoneVibration:(_Bool)arg1;
- (void)setShowsUserGeneratedVibrations:(_Bool)arg1;
- (void)setShowsDefaultVibration:(_Bool)arg1;
- (void)setShowsVibrations:(_Bool)arg1;
- (void)removeMediaItems:(id)arg1;
- (void)addMediaItems:(id)arg1;
- (void)setSelectedMediaIdentifier:(id)arg1;
- (id)selectedIdentifier:(_Bool *)arg1;
- (id)selectedRingtoneIdentifier;
- (void)setSelectedRingtoneIdentifier:(id)arg1;
- (void)ringtoneManagerContentsChanged:(id)arg1;
- (void)_toneManagerContentsChanged;
- (void)_buildTable;
- (void)buildUIWithAVController:(id)arg1 filter:(unsigned long long)arg2 tonePicker:(_Bool)arg3;
- (void)setContext:(int)arg1;
- (void)setShowsStoreButtonInNavigationBar:(_Bool)arg1;
- (void)setMediaAtTop:(_Bool)arg1;
- (void)setShowsMedia:(_Bool)arg1;
- (void)setShowsNothingSelected:(_Bool)arg1;
- (void)setNoneString:(id)arg1;
@property(retain, nonatomic) NSString *vibrationAccountIdentifier; // @dynamic vibrationAccountIdentifier;
- (void)setDefaultIdentifier:(id)arg1;
- (void)setNoneAtTop:(_Bool)arg1;
- (void)setShowsNone:(_Bool)arg1;
- (void)setShowsDefault:(_Bool)arg1;
- (void)setAVController:(id)arg1;
- (void)_reloadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 avController:(id)arg2 filter:(unsigned long long)arg3 tonePicker:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 avController:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

