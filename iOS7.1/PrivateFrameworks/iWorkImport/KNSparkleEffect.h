//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KNAnimationOpenGLEffect.h"

@class KNAnimationContext, KNBuildSparkleSystem, TSDGLDataBuffer, TSDGLShader, TSDGLTextureInfo, TSDTexturedRectangle;

__attribute__((visibility("hidden")))
@interface KNSparkleEffect : NSObject <KNAnimationOpenGLEffect>
{
    KNBuildSparkleSystem *mSparkleSystem;
    TSDGLShader *mSparkleShader;
    TSDGLTextureInfo *mSparkleTexture;
    TSDTexturedRectangle *mTexture;
    KNSparkleEffect *mEffect;
    KNAnimationContext *mAnimationContext;
    float mDuration;
    unsigned int mDirection;
    int mBuildType;
    struct CGRect mDestinationRect;
    struct CATransform3D mTranslate;
    TSDGLShader *mObjectShader;
    TSDGLDataBuffer *mObjectDataBuffer;
}

- (void)teardownEffectWithTextures:(id)arg1;
- (void)renderEffectAtPercent:(double)arg1;
- (id)initWithAnimationContext:(id)arg1 texture:(id)arg2 destinationRect:(struct CGRect)arg3 translate:(struct CATransform3D)arg4 duration:(float)arg5 direction:(unsigned int)arg6 buildType:(int)arg7;
- (id)p_sparkleSystemForTR:(id)arg1 slideRect:(struct CGRect)arg2 duration:(float)arg3 direction:(unsigned int)arg4;
- (void)setupEffectIfNecessary;

@end
