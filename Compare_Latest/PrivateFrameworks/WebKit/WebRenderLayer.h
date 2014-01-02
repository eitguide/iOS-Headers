/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface WebRenderLayer : NSObject
{
    NSArray *children;
    NSString *name;
    NSString *compositingInfo;
    struct CGRect bounds;
    _Bool composited;
    _Bool separator;
}

+ (id)compositingInfoForLayer:(struct RenderLayer *)arg1;
+ (id)nameForLayer:(struct RenderLayer *)arg1;
- (id).cxx_construct;
- (_Bool)isSeparator;
- (_Bool)isComposited;
- (id)compositingInfo;
- (id)heightString;
- (id)widthString;
- (id)positionString;
- (id)name;
- (id)children;
- (void)buildDescendantLayers:(struct RenderLayer *)arg1;
- (void)dealloc;
- (id)initWithWebFrame:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithRenderLayer:(struct RenderLayer *)arg1;

@end

