/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/WXText.h>

@interface WXText (Private)
+ (void)readFromTable:(struct _xmlNode *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)readFromParagraph:(struct _xmlNode *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)updateTextBoxIdsFromState:(id)arg1;
+ (id)addNewSectionTo:(id)arg1 state:(id)arg2;
+ (void)createChildrenFromStream:(struct _xmlTextReader *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)createChildren:(struct _xmlNode *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
@end

