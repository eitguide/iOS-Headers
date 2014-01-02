/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class NSArray, NSObject<MZEffectTiming>, NSString;

@protocol MPEffectSupport
@property(readonly, nonatomic) NSObject<MZEffectTiming> *effectTiming;
@property(readonly, nonatomic) NSArray *texts;
@property(readonly, nonatomic) NSArray *slides;
@property(copy, nonatomic) NSString *presetID;
@property(copy, nonatomic) NSString *effectID;
- (void)setRandomSeed:(long long)arg1;
- (long long)randomSeed;
- (void)setEffectAttribute:(id)arg1 forKey:(id)arg2;
- (id)effectAttributeForKey:(id)arg1;
- (void)setEffectAttributes:(id)arg1;
- (id)effectAttributes;
- (void)moveTextsFromIndices:(id)arg1 toIndex:(long long)arg2;
- (void)removeAllTexts;
- (void)removeTextsAtIndices:(id)arg1;
- (void)insertTexts:(id)arg1 atIndex:(long long)arg2;
- (void)addTexts:(id)arg1;
- (void)addText:(id)arg1;
- (void)removeAllSecondarySlides;
- (void)removeSecondarySlidesAtIndices:(id)arg1;
- (void)insertSecondarySlides:(id)arg1 atIndex:(long long)arg2;
- (void)addSecondarySlides:(id)arg1;
- (void)addSecondarySlide:(id)arg1;
- (id)secondarySlides;
- (void)moveSlidesFromIndices:(id)arg1 toIndex:(long long)arg2;
- (void)removeAllSlides;
- (void)removeSlidesAtIndices:(id)arg1;
- (void)insertSlides:(id)arg1 atIndex:(long long)arg2;
- (void)addSlides:(id)arg1;
- (void)addSlide:(id)arg1;
- (double)mainDuration;
- (double)phaseOutDuration;
- (double)phaseInDuration;
@end

