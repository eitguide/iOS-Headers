/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DShaderEffect.h>

// Not exported
@interface TSCH3DTextureBlendShaderEffect : TSCH3DShaderEffect
{
}

+ (void)setBlendFactor:(float)arg1 unit:(long long)arg2 effectsStates:(id)arg3;
+ (id)variableBlendTexture;
+ (id)variableBlendFactor;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)effect;
+ (id)_singletonAlloc;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)inject:(id)arg1;
- (void)addVariables:(id)arg1;
- (id)variableBlendTexture;
- (id)variableBlendFactor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

