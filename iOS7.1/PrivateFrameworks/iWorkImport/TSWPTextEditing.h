//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSDInteractiveCanvasController, TSDLayout<TSWPTextEditingHostLayout>, TSPObjectContext, TSWPEditingController, TSWPParagraphStyle, TSWPShapeStyle, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPTextEditing : NSObject
{
    TSWPParagraphStyle *_paragraphStyle;
    TSWPShapeStyle *_shapeStyle;
    TSWPStorage *_storage;
    BOOL _isEditing;
    TSDInteractiveCanvasController *_icc;
    TSDLayout<TSWPTextEditingHostLayout> *_hostLayout;
}

@property(readonly, nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (void)p_editingDidEndNotification:(id)arg1;
- (void)p_handleEndEditing;
- (Class)shapeInfoClass;
- (void)editingDidEnd;
- (void)endEditing;
- (void)beginEditingWithViewController:(id)arg1 geometry:(id)arg2;
- (void)beginEditingInRect:(struct CGRect)arg1 interactiveCanvasController:(id)arg2 layout:(id)arg3;
- (void)beginEditingInRect:(struct CGRect)arg1 interactiveCanvasController:(id)arg2 layout:(id)arg3 delegate:(id)arg4;
- (void)beginEditingWithViewController:(id)arg1 layout:(id)arg2 geometry:(id)arg3 delegate:(id)arg4;
@property(readonly, nonatomic) TSPObjectContext *objectContext;
@property(readonly, nonatomic) TSWPEditingController *editor;
- (void)dealloc;
- (id)initWithShapeStyle:(id)arg1 defaultStorage:(id)arg2;
- (id)initWithParagraphStyle:(id)arg1 shapeStyle:(id)arg2 defaultText:(id)arg3;
- (id)initWithParagraphStyle:(id)arg1 shapeStyle:(id)arg2 defaultText:(id)arg3 stylesheet:(id)arg4;

@end
