/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/KNAnimationEffect.h>

#import "KNActionEffectBuildAnimator-Protocol.h"

@class KNAnimParameterGroup;

// Not exported
@interface KNActionBounce : KNAnimationEffect <KNActionEffectBuildAnimator>
{
    KNAnimParameterGroup *_parameterGroup;
    double decayFactor;
}

+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)applyActionEffect:(id)arg1 toAttributes:(id)arg2;
+ (id)actionEffectStyle;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5;
- (id)p_bounceArrayWithLayer:(id)arg1 duration:(double)arg2 numberOfBounces:(unsigned long long)arg3 decay:(_Bool)arg4;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;

@end

