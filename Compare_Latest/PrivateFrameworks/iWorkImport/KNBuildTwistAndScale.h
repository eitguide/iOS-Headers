/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/KNAnimationEffect.h>

#import "KNAnimationPluginArchiving-Protocol.h"
#import "KNChunkableBuildAnimator-Protocol.h"
#import "KNFrameBuildAnimator-Protocol.h"

@class KNAnimParameterGroup, KNMotionBlurAnimationPluginWrapper;

// Not exported
@interface KNBuildTwistAndScale : KNAnimationEffect <KNChunkableBuildAnimator, KNFrameBuildAnimator, KNAnimationPluginArchiving>
{
    KNAnimParameterGroup *_parameterGroup;
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (int)rendererTypeForCapabilities:(id)arg1;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (_Bool)requiresSingleTexturePerStage;
+ (_Bool)isCharacterAwareEffect;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (id)animationsWithContext:(id)arg1;
- (id)p_animationGroupForTexture:(id)arg1 context:(id)arg2 isSingleObject:(_Bool)arg3 duration:(double)arg4;
- (struct CATransform3D)p_transform3DForTextureWithPercent:(double)arg1 scale:(double)arg2 startTime:(double)arg3 rotation:(double)arg4 globalRotationEndTime:(double)arg5 isOutgoing:(_Bool)arg6 offsetFromSlideCenter:(struct CGPoint)arg7 isGL:(_Bool)arg8 direction:(unsigned long long)arg9;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;

@end

