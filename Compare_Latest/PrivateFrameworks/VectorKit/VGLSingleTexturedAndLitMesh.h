/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VGLMesh.h>

@class VGLTexture;

// Not exported
@interface VGLSingleTexturedAndLitMesh : VGLMesh
{
    VGLTexture *_texture;
}

@property(retain, nonatomic) VGLTexture *texture; // @synthesize texture=_texture;
- (void)drawTrianglesWithContext:(id)arg1;
- (void)dealloc;
- (id)initFromAsciiVertexFile:(id)arg1 indexFile:(id)arg2;
- (id)initWithVertices:(const CDStruct_2066d242 *)arg1 vertexCount:(int)arg2 indices:(const unsigned short *)arg3 indexCount:(int)arg4;
- (id)init;

@end

