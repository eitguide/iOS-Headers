/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MPPlaybackControlsDelegate <NSObject>

@optional
- (void)controlsOverlay:(id)arg1 didTapTrackInfoButtonForItem:(id)arg2;
- (void)controlsOverlay:(id)arg1 didTapRadioShareButtonForItem:(id)arg2;
- (void)controlsOverlay:(id)arg1 didTapRadioHistoryButtonForItem:(id)arg2;
- (void)controlsOverlay:(id)arg1 didTapRadioButtonForItem:(id)arg2;
- (_Bool)controlsOverlay:(id)arg1 shouldHideRadioButtonForItem:(id)arg2;
- (_Bool)controlsOverlay:(id)arg1 shouldDisableMailPodcastLinkButtonForItem:(id)arg2;
- (_Bool)controlsOverlay:(id)arg1 shouldHideMailPodcastLinkButtonForItem:(id)arg2;
- (void)controlsOverlay:(id)arg1 didClickMailPodcastLinkButtonForItem:(id)arg2;
- (void)controlsOverlayDetailSliderInstructionOverlayWillHide:(id)arg1;
- (void)controlsOverlayDetailSliderInstructionOverlayWillShow:(id)arg1;
- (void)controlsOverlay:(id)arg1 detailSliderTrackingDidChangeScrubSpeed:(long long)arg2;
- (void)controlsOverlayDetailSliderTrackingDidEnd:(id)arg1;
- (void)controlsOverlayDetailSliderTrackingDidBegin:(id)arg1;
- (_Bool)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2;
- (unsigned long long)controlsOverlay:(id)arg1 playbackSpeedForItem:(id)arg2;
- (_Bool)controlsOverlay:(id)arg1 shouldDisablePlaybackSpeedButtonForItem:(id)arg2;
- (void)controlsOverlayDidClickPlaybackSpeedButton:(id)arg1;
- (_Bool)controlsOverlay:(id)arg1 shouldDisableFastFowardAndRewindButtonForItem:(id)arg2;
- (void)controlsOverlayDidClickFastForwardButton:(id)arg1;
- (void)controlsOverlayDidClickRewindButton:(id)arg1;
- (unsigned long long)shuffleTypeForPlaybackControls:(id)arg1;
- (unsigned long long)repeatTypeForPlaybackControls:(id)arg1;
- (_Bool)hideGeniusButtonForPlaybackControls:(id)arg1;
- (_Bool)playbackControlsScrubberShouldDisplaySingleChapters:(id)arg1;
- (_Bool)playbackControlsDidTapGeniusButton:(id)arg1;
- (_Bool)playbackControls:(id)arg1 changedShuffleType:(unsigned long long)arg2;
- (_Bool)playbackControls:(id)arg1 changedRepeatType:(unsigned long long)arg2;
@end

