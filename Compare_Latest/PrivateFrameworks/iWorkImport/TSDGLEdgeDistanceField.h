/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLFrameBufferTextureConfig, TSDGLShader;

// Not exported
@interface TSDGLEdgeDistanceField : NSObject
{
    unsigned int _inputTexture;
    struct CGSize _textureSize;
    struct CGSize _squareSize;
    TSDGLFrameBufferTextureConfig *_framebufferTextureConfig;
    TSDGLFrameBuffer *_exteriorFramebuffer;
    TSDGLFrameBuffer *_interiorFramebuffer;
    TSDGLDataBuffer *_rectDataBuffer;
    TSDGLDataBuffer *_squareDataBuffer;
    TSDGLShader *_drawShader;
    TSDGLShader *_combineShader;
    TSDGLShader *_seedShader;
    TSDGLShader *_floodShader;
    TSDGLShader *_gradientShader;
    int _oldViewport[4];
}

+ (unsigned int)distanceFieldTextureWithTexture:(unsigned int)arg1 textureSize:(struct CGSize)arg2;
- (unsigned int)p_gradientTextureFromCombinedTexture:(unsigned int)arg1;
- (unsigned int)p_combinedTexture;
- (void)p_floodTextureInFramebuffer:(id)arg1;
- (void)p_seedTextureFromTexture:(unsigned int)arg1 invertSeed:(_Bool)arg2;
- (void)p_writeIntoSquareTexture;
- (void)p_setupShaders;
- (void)p_setupBuffers;
- (void)dealloc;
- (id)initWithTexture:(unsigned int)arg1 textureSize:(struct CGSize)arg2;
- (void)teardown;

@end

