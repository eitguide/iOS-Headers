/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EAGLContext, MRContextState;

@interface MRTexture : NSObject
{
    EAGLContext *mParentGLContext;
    MRContextState *mInnerState;
    unsigned int mWidth;
    unsigned int mHeight;
    unsigned int mTextureName;
    unsigned int mTextureTarget;
    unsigned int mPixelFormat;
    double mTimestamp;
    unsigned int mFramebufferName;
    EAGLContext *mGLContext;
    int mMinFilter;
    int mMagFilter;
    int mWrapS;
    int mWrapT;
    float mBorderColor[4];
    _Bool mTextureNameIsNotOurs;
}

@property(nonatomic) int wrapT; // @synthesize wrapT=mWrapT;
@property(nonatomic) int wrapS; // @synthesize wrapS=mWrapS;
@property(nonatomic) int magFilter; // @synthesize magFilter=mMagFilter;
@property(nonatomic) int minFilter; // @synthesize minFilter=mMinFilter;
@property(readonly, nonatomic) unsigned int framebufferName; // @synthesize framebufferName=mFramebufferName;
@property(readonly, nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=mPixelFormat;
@property(readonly, nonatomic) EAGLContext *glContext; // @synthesize glContext=mGLContext;
@property(nonatomic) double timestamp; // @synthesize timestamp=mTimestamp;
@property(readonly, nonatomic) unsigned int textureTarget; // @synthesize textureTarget=mTextureTarget;
@property(readonly, nonatomic) unsigned int textureName; // @synthesize textureName=mTextureName;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=mHeight;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=mWidth;
@property(readonly) MRContextState *innerState; // @synthesize innerState=mInnerState;
- (void)setLabel:(id)arg1;
- (void)uploadData:(void *)arg1 rowBytes:(unsigned long long)arg2 toRect:(struct CGRect)arg3;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)initWithDatas:(void **)arg1 dataCount:(unsigned long long)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 rowBytes:(unsigned int)arg5 inGLContext:(id)arg6 options:(const CDStruct_ad85aa33 *)arg7;
- (id)initWithData:(void *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 rowBytes:(unsigned int)arg4 inGLContext:(id)arg5 options:(const CDStruct_ad85aa33 *)arg6;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 inGLContext:(id)arg2 options:(const CDStruct_ad85aa33 *)arg3;
- (id)initWithTextureName:(unsigned int)arg1 textureTarget:(unsigned int)arg2 size:(struct CGSize)arg3 inGLContext:(id)arg4 options:(const CDStruct_ad85aa33 *)arg5;
- (id)initWithSize:(struct CGSize)arg1 inGLContext:(id)arg2 options:(const CDStruct_ad85aa33 *)arg3;

@end

