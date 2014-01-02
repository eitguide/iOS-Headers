/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPTextualAttachment.h>

@class NSString, TSWPStorage;

// Not exported
@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment
{
    TSWPStorage *_containedStorage;
    NSString *_customMarkString;
}

@property(retain, nonatomic) TSWPStorage *containedStorage; // @synthesize containedStorage=_containedStorage;
@property(retain, nonatomic) NSString *customMarkString; // @synthesize customMarkString=_customMarkString;
- (void)checkDebug;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (_Bool)isSearchable;
- (id)stringEquivalent;
- (unsigned long long)findCharIndex;
- (void)setParentStorage:(id)arg1;
- (void)setContainedStorageParentInfoToStorage:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (int)elementKind;
- (void)applyMark;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 wpStorage:(id)arg2;

@end

