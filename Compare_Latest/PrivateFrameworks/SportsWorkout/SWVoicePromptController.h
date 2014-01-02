/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDecimalNumberHandler, NSString, NikePromptExpander, WordsSpeaker;

@interface SWVoicePromptController : NSObject
{
    NikePromptExpander *_promptExpanderForGivenLanguage;
    NikePromptExpander *_promptExpanderForEnglish;
    WordsSpeaker *_speaker;
    NSString *_gender;
    NSString *_language;
    NSDecimalNumberHandler *_roundToTwoDigitsPastTheDecimal;
    NSDecimalNumberHandler *_roundToZeroDigitsPastTheDecimal;
}

+ (id)_currentGenderIdentifier;
+ (id)_currentLanguageIdentifier;
+ (id)__sharedFemalePromptController;
+ (id)__sharedMalePromptController;
+ (id)sharedPromptController;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
- (void)_firePacePromptWithAmount:(id)arg1 units:(id)arg2 isAveragePace:(_Bool)arg3;
- (void)_firePrompt:(id)arg1 amount:(id)arg2 units:(id)arg3 words:(id *)arg4 englishWords:(id *)arg5;
- (void)_firePrompt:(id)arg1 amount:(id)arg2 units:(id)arg3 pronounceUnits:(_Bool)arg4 words:(id *)arg5 englishWords:(id *)arg6;
- (_Bool)_fireOneLinerPromptUsingRandomGenderWithString:(id)arg1;
- (void)_fireStandaloneNumberPrompt:(id)arg1;
- (_Bool)_fireOneLinerPromptWithString:(id)arg1;
- (id)_roundedAmount:(id)arg1 forUnits:(id)arg2;
- (void)_setUpWithSettings;
- (id)_promptExpenderUnitsForWorkoutControllerUnits:(id)arg1;
- (void)_printVoicePrompt:(id)arg1;
- (void)fireGoalCompletedPromptWithDistanceGoal:(id)arg1 units:(id)arg2;
- (void)fireFinalRushPromptWithDistanceRemaining:(id)arg1 units:(id)arg2;
- (void)fireDistanceRemainingPromptWithDistanceRemaining:(id)arg1 units:(id)arg2;
- (void)fireDistanceBeyondGoalPromptWithDistanceRanBeyondGoal:(id)arg1 units:(id)arg2;
- (void)fireDistanceContextPromptWithDistanceRan:(id)arg1 units:(id)arg2;
- (void)fireGoalCompletedPromptWithCaloriesGoal:(id)arg1;
- (void)fireFinalRushPromptWithCaloriesRemaining:(id)arg1;
- (void)fireCaloriesRemainingPromptWithCaloriesRemaining:(id)arg1;
- (void)fireCaloriesBeyondGoalPromptWithCaloriesBurnedBeyondGoal:(id)arg1;
- (void)fireCaloriesContextPromptWithCaloriesBurned:(id)arg1;
- (void)fireGoalCompletedPromptWithTimeGoal:(id)arg1;
- (void)fireFinalRushPromptWithTimeRemaining:(id)arg1;
- (void)fireTimeRemainingPromptWithTimeRemaining:(id)arg1;
- (void)fireTimeBeyondGoalPromptWithElapsedTimeBeyondGoal:(id)arg1;
- (void)fireTimeContextPromptWithElapsedTime:(id)arg1;
- (void)fireHit250MilesMorePrompt;
- (void)fireHit250MilesPrompt;
- (void)fireHit500KMorePrompt;
- (void)fireHit500KPrompt;
- (void)fireFastestMarathonWorkoutPrompt;
- (void)fireFastestHalfMarathonWorkoutPrompt;
- (void)fireFastest10KWorkoutPrompt;
- (void)fireFastest5KWorkoutPrompt;
- (void)fireLongestWorkoutDistancePrompt;
- (void)fireMostCaloriesBurnedPrompt;
- (void)fireFastestMilePrompt;
- (void)fireAmountBeyondGoalPromptWithAmount:(id)arg1 units:(id)arg2 words:(id *)arg3 englishWords:(id *)arg4;
- (void)fireAmountCompletedPromptWithAmount:(id)arg1 units:(id)arg2 words:(id *)arg3 englishWords:(id *)arg4;
- (void)fireAmountRemainingPromptWithAmount:(id)arg1 units:(id)arg2 words:(id *)arg3 englishWords:(id *)arg4;
- (void)fireCaloriesBurnedPromptWithAmount:(id)arg1;
- (void)fireAveragePacePromptWithAmount:(id)arg1 units:(id)arg2;
- (void)fireCurrentPacePromptWithAmount:(id)arg1 units:(id)arg2;
- (void)fireTimePromptWithAmount:(id)arg1;
- (void)fireWorkoutDistancePromptWithAmount:(id)arg1 units:(id)arg2;
- (void)fireWorkoutCompletedPrompt;
- (void)fireResumingWorkoutPrompt;
- (void)firePausingWorkoutPrompt;
- (void)fireBeginningWorkoutPrompt;
- (void)fireWalkAroundToActivateSensorPrompt;
- (void)fireHalfwayPointPrompt;
- (void)stopAllPrompts;
@property(readonly, nonatomic) _Bool isPlaying; // @dynamic isPlaying;
- (void)refreshSettings;
- (void)dealloc;
- (id)_initWithLanguage:(id)arg1 gender:(id)arg2;
- (id)init;

@end

