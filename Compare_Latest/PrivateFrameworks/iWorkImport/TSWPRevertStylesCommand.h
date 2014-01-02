/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPTextCommand.h>

@class NSSet;

// Not exported
@interface TSWPRevertStylesCommand : TSWPTextCommand
{
    NSSet *_styleClasses;
}

+ (struct _NSRange)clearAnonymousParagraphStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
+ (struct _NSRange)clearAnonymousListStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
+ (struct _NSRange)clearAnonymousCharacterStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (void)doCommit;
- (int)persistenceKind;
- (id)actionString;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 styleClasses:(id)arg3;

@end

