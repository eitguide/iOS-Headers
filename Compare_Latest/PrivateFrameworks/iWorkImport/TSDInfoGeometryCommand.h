/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKCommand.h>

#import "TSDCoalesceableInfoPositioningCommmand-Protocol.h"
#import "TSDPropagatableCommand-Protocol.h"

@class TSDInfoGeometry, TSPObject<TSDChangeableInfo>;

// Not exported
@interface TSDInfoGeometryCommand : TSKCommand <TSDCoalesceableInfoPositioningCommmand, TSDPropagatableCommand>
{
    TSPObject<TSDChangeableInfo> *mInfo;
    TSDInfoGeometry *mOldGeometry;
    TSDInfoGeometry *mNewGeometry;
    _Bool mDidMatchObjectPlaceholderGeometry;
    _Bool mShouldClearObjectPlaceholderFlag;
}

@property(readonly, nonatomic) TSPObject<TSDChangeableInfo> *info; // @synthesize info=mInfo;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (_Bool)modifiesAnyObjectPassingTest:(id)arg1;
- (_Bool)shouldBeCoalescedWithInsertionCommandOfInfo:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)p_do;
- (_Bool)process;
- (id)actionString;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 newGeometry:(id)arg2 shouldClearObjectPlaceholderFlag:(_Bool)arg3 context:(id)arg4;
- (id)initWithInfo:(id)arg1 newGeometry:(id)arg2 context:(id)arg3;
@property(readonly, nonatomic) TSDInfoGeometry *newGeometry;

@end

