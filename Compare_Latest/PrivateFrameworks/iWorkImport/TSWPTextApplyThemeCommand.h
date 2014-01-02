/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSSApplyThemeChildCommand.h>

@class TSWPStorage;

// Not exported
@interface TSWPTextApplyThemeCommand : TSSApplyThemeChildCommand
{
    TSWPStorage *_storage;
    struct TSWPStorageTransaction *_undoRedoTransaction;
}

- (void)redo;
- (void)undo;
- (void)undoRedo;
- (void)commit;
- (_Bool)process;
- (_Bool)shouldRunSynchronously;
- (void)saveToArchive:(struct TextApplyThemeCommandArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct TextApplyThemeCommandArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 parent:(id)arg2;

@end

