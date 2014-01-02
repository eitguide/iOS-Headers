/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EAGLContext, NSMapTable, NSMutableArray, NSString, VGLFramebuffer, VGLGPU, VGLMesh, VGLProgram, VGLProgramFactory, VGLRenderState, VGLResourceFactory, VGLSharegroup, VGLTexture, VGLVertexArrayObject;

// Not exported
@interface VGLContext : NSObject
{
    VGLGPU *_gpu;
    NSMutableArray *_renderStateStack;
    VGLSharegroup *_sharegroup;
    VGLResourceFactory *_resourceFactory;
    VGLFramebuffer *_framebuffer;
    struct CGSize _sizeInPixels;
    CDUnion_f5b85e25 _pixelSpaceMatrix;
    _Bool _depthTest;
    _Bool _stencilTest;
    _Bool _cullFace;
    _Bool _blend;
    _Bool _scissorTest;
    CDStruct_ff03d24e _scissorRect;
    int _blendMode;
    int _depthMode;
    float _lineWidth;
    float _clearDepth;
    struct _VGLColor _clearColor;
    unsigned char _clearStencil;
    VGLProgram *_program;
    struct _VGLColor _color;
    _Bool _depthMask;
    _Bool _colorMask;
    unsigned char _stencilMask;
    VGLMesh *_meshForUnitSquare;
    VGLMesh *_meshForUnitTexture;
    VGLMesh *_meshForUnitTextureInverted;
    unsigned int _activeTexture;
    VGLTexture *_texture[2][8];
    VGLVertexArrayObject *_VAO;
    unsigned int _sFactor;
    unsigned int _dFactor;
    unsigned int _sAlphaFactor;
    unsigned int _dAlphaFactor;
    int _currentFrameNumber;
    float _averageFPS;
    float _fpsStartTime;
    float _framerateSum;
    _Bool _drawFramerateGraph;
    struct _VGLColor _frameRateGraphColor;
    float _framerateGraphSamples[30];
    NSMapTable *_programCache;
    VGLProgramFactory *_programFactory;
    NSString *_programFactoryCohort;
    _Bool _enablePolygonFillOffset;
    CDStruct_e5f4ed30 _polygonOffset;
    VGLRenderState *_simpleRenderState;
    EAGLContext *_eaglContext;
    struct _VGLColor _framerateGraphColor;
}

@property(nonatomic) CDStruct_e5f4ed30 polygonOffset; // @synthesize polygonOffset=_polygonOffset;
@property(nonatomic) _Bool enablePolygonFillOffset; // @synthesize enablePolygonFillOffset=_enablePolygonFillOffset;
@property(retain, nonatomic) VGLVertexArrayObject *VAO; // @synthesize VAO=_VAO;
@property(retain, nonatomic) VGLProgram *program; // @synthesize program=_program;
@property(nonatomic) unsigned char stencilMask; // @synthesize stencilMask=_stencilMask;
@property(nonatomic) _Bool depthMask; // @synthesize depthMask=_depthMask;
@property(nonatomic) _Bool colorMask; // @synthesize colorMask=_colorMask;
@property(nonatomic) unsigned int activeTexture; // @synthesize activeTexture=_activeTexture;
@property(nonatomic) unsigned char clearStencil; // @synthesize clearStencil=_clearStencil;
@property(nonatomic) struct _VGLColor clearColor; // @synthesize clearColor=_clearColor;
@property(nonatomic) float clearDepth; // @synthesize clearDepth=_clearDepth;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) int depthMode; // @synthesize depthMode=_depthMode;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) CDStruct_818bb265 scissorRect; // @synthesize scissorRect=_scissorRect;
@property(nonatomic) _Bool scissorTest; // @synthesize scissorTest=_scissorTest;
@property(nonatomic) _Bool cullFace; // @synthesize cullFace=_cullFace;
@property(nonatomic) _Bool stencilTest; // @synthesize stencilTest=_stencilTest;
@property(nonatomic) _Bool depthTest; // @synthesize depthTest=_depthTest;
@property(readonly, nonatomic) CDUnion_f5b85e25 pixelSpaceMatrix; // @synthesize pixelSpaceMatrix=_pixelSpaceMatrix;
@property(nonatomic) struct _VGLColor framerateGraphColor; // @synthesize framerateGraphColor=_framerateGraphColor;
@property(nonatomic) _Bool drawFramerateGraph; // @synthesize drawFramerateGraph=_drawFramerateGraph;
@property(readonly, nonatomic) VGLSharegroup *sharegroup; // @synthesize sharegroup=_sharegroup;
@property(readonly, nonatomic) EAGLContext *eaglContext; // @synthesize eaglContext=_eaglContext;
@property(readonly, nonatomic) VGLGPU *gpu; // @synthesize gpu=_gpu;
- (id).cxx_construct;
- (id)programFactoryCohort;
- (void)setProgramFactoryCohort:(id)arg1;
- (id)programWithClass:(Class)arg1;
- (id)newRenderbuffer;
- (id)newFramebuffer;
- (id)newTextureResource;
- (id)newBuffer;
- (id)newVAO;
- (id)newOcclusionResource:(int)arg1;
- (_Bool)isCurrentContext;
- (void)perform:(id)arg1;
- (void)_pop:(void *)arg1;
- (_Bool)_push:(void **)arg1;
- (id)description;
- (void)drawFramerateGraphMethod;
- (void)dumpCounts;
- (void)endFrame;
- (void)startFrame;
- (float)averageFPS;
- (_Bool)checkForError;
@property(readonly, nonatomic) VGLMesh *meshForUnitTextureInverted;
@property(readonly, nonatomic) VGLMesh *meshForUnitTexture;
- (void)drawTexture:(struct CGRect)arg1;
- (void)fillRectAtZ:(float)arg1 x:(float)arg2 y:(float)arg3 w:(float)arg4 h:(float)arg5;
- (void)drawRectAtZ:(float)arg1 x:(float)arg2 y:(float)arg3 w:(float)arg4 h:(float)arg5;
- (void)fillRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)drawRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)fillRectangle:(CDStruct_818bb265)arg1;
- (void)drawRectangle:(CDStruct_818bb265)arg1;
- (void)drawUnit;
- (void)drawUnitSquare;
- (void)fillCircleX:(float)arg1 Y:(float)arg2 radius:(float)arg3;
- (void)fillUnitCircle;
- (void)drawCircleX:(float)arg1 Y:(float)arg2 radius:(float)arg3;
- (void)drawUnitCircle;
- (void)drawUnitSquareMesh;
- (void)drawTriangles:(int)arg1 nv:(int)arg2 pv:(float *)arg3;
- (void)drawTriangleStrip:(int)arg1 nv:(int)arg2 pv:(float *)arg3;
- (void)drawTriangleFan:(int)arg1 nv:(int)arg2 pv:(float *)arg3;
- (void)drawSegment3DP0:(CDStruct_03942939)arg1 p1:(CDStruct_03942939)arg2;
- (void)drawLinesDim:(int)arg1 nv:(int)arg2 pv:(float *)arg3;
- (void)drawPointsDim:(int)arg1 nv:(int)arg2 pv:(float *)arg3;
- (void)drawLineStripDim:(int)arg1 nv:(int)arg2 pv:(float *)arg3;
- (void)drawLineLoopDim:(int)arg1 nv:(int)arg2 pv:(float *)arg3;
- (void)drawLineX0:(float)arg1 y0:(float)arg2 x1:(float)arg3 y1:(float)arg4;
- (void)drawAsteriskCX:(float)arg1 cy:(float)arg2 sz:(float)arg3;
- (void)drawCrossCX:(float)arg1 cy:(float)arg2 sz:(float)arg3;
- (void)_drawArrayMode:(unsigned int)arg1 dim:(int)arg2 nv:(int)arg3 pv:(float *)arg4;
- (void)_drawArrayMode:(unsigned int)arg1 dim:(int)arg2 nv:(int)arg3 pv:(float *)arg4 pt:(float *)arg5;
- (void)_drawCircleWithMode:(unsigned int)arg1 X:(float)arg2 Y:(float)arg3 radius:(float)arg4;
- (void)_blendFuncWithSFactor:(unsigned int)arg1 dFactor:(unsigned int)arg2 sAlphaFactor:(unsigned int)arg3 dAlphaFactor:(unsigned int)arg4;
- (void)updatePixelSpaceMatrixWithSize:(struct CGSize)arg1;
- (void)updatePixelSpaceMatrix;
- (void)setStencilFunc:(int)arg1 ref:(unsigned char)arg2 mask:(unsigned char)arg3;
- (void)setStencilOpFail:(int)arg1 zFail:(int)arg2 zPass:(int)arg3;
- (void)doneStenciling;
- (void)stencilToInclusion;
- (void)stencilToExclusion;
- (void)captureStencilInclusion;
- (void)captureStencilExclusion;
- (void)beginCumulativeStencil;
@property(retain, nonatomic) VGLTexture *texture2D7;
@property(retain, nonatomic) VGLTexture *texture2D6;
@property(retain, nonatomic) VGLTexture *texture2D5;
@property(retain, nonatomic) VGLTexture *texture2D4;
@property(retain, nonatomic) VGLTexture *texture2D3;
@property(retain, nonatomic) VGLTexture *texture2D2;
@property(retain, nonatomic) VGLTexture *texture2D1;
@property(retain, nonatomic) VGLTexture *texture2D0;
- (void)_setTexture:(id)arg1 target:(int)arg2 unit:(int)arg3;
- (void)setColorMaskRed:(_Bool)arg1 green:(_Bool)arg2 blue:(_Bool)arg3 alpha:(_Bool)arg4;
- (void)_forceBlendMode:(int)arg1;
- (void)resetAlphaChannel:(unsigned char)arg1;
- (void)bindRenderState:(id)arg1;
- (void)bindSimpleRenderState;
- (void)popRenderState;
- (void)pushRenderState;
- (id)renderState;
- (_Bool)renderbufferStorage:(unsigned long long)arg1 fromCanvas:(id)arg2;
@property(retain, nonatomic) VGLFramebuffer *targetFramebuffer;
- (void)clearBufferColor:(_Bool)arg1 stencil:(_Bool)arg2 depth:(_Bool)arg3;
- (void)reset;
- (void)present;
- (void)dealloc;
- (id)initWithGPU:(id)arg1 sharegroup:(id)arg2;

@end

