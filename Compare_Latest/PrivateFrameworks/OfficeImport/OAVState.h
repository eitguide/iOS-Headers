/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, OAXDrawingState, OCPPackagePart;

// Not exported
@interface OAVState : NSObject
{
    Class mClient;
    OAXDrawingState *mOAXState;
    OCPPackagePart *mPackagePart;
    NSMutableDictionary *mShapeTypes;
    NSMutableDictionary *mShapeIdMap;
    NSMutableSet *mDualDrawables;
}

- (id)blipRefForURL:(id)arg1;
- (unsigned int)officeArtShapeIdWithVmlShapeId:(id)arg1;
- (_Bool)isDualDrawable:(id)arg1;
- (void)addDualDrawable:(id)arg1;
- (void)setDrawable:(id)arg1 forVmlShapeId:(id)arg2;
- (id)drawableForVmlShapeId:(id)arg1;
- (void)setShapeType:(unsigned short)arg1 forId:(id)arg2;
- (unsigned short)shapeTypeForId:(id)arg1;
- (void)setPackagePart:(id)arg1;
- (id)packagePart;
- (void)setOAXState:(id)arg1;
- (id)oaxState;
- (Class)client;
- (void)resetForNewDrawing;
- (void)dealloc;
- (id)initWithClient:(Class)arg1 packagePart:(id)arg2;

@end

