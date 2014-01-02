/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/KNAnimationEffect.h>

#import "KNFrameBuildAnimator-Protocol.h"

@class KNBuildDiffuseSystem, TSDGLDataBuffer, TSDGLShader;

// Not exported
@interface KNBuildDiffuse : KNAnimationEffect <KNFrameBuildAnimator>
{
    KNBuildDiffuseSystem *mDiffuseSystem;
    TSDGLShader *mDiffuseShader;
    struct CATransform3D mBaseTransform;
    TSDGLDataBuffer *mQuadDataBuffer;
    TSDGLShader *mQuadShader;
    struct CGRect mDrawableFrame;
    struct CGRect mFrameRect;
}

+ (_Bool)requiresSingleTexturePerStage;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)p_setupParticleSystemWithImage:(id)arg1 build:(id)arg2;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (void)dealloc;

@end

