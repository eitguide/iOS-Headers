/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDSwatchRenderingOperation.h>

@class TSDMovieInfo;

// Not exported
@interface TSDMovieRenderingOperation : TSDSwatchRenderingOperation
{
    TSDMovieInfo *mMovieInfo;
    _Bool mShouldClipVertically;
}

@property(retain) TSDMovieInfo *movieInfo; // @synthesize movieInfo=mMovieInfo;
- (void)doWorkWithReadLock;
- (void)dealloc;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 movieInfo:(id)arg5 documentRoot:(id)arg6;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 movieInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(_Bool)arg7;

@end

