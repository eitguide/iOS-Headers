/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSListItemsController : PSListController
{
    long long _rowToSelect;
    _Bool _deferItemSelection;
    _Bool _restrictionList;
    PSSpecifier *_lastSelectedSpecifier;
}

- (void)setIsRestrictionList:(_Bool)arg1;
- (_Bool)isRestrictionList;
- (id)specifiers;
- (id)itemsFromDataSource;
- (id)itemsFromParent;
- (void)_addStaticText:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)listItemSelected:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)prepareSpecifiersMetadata;
- (void)didLock;
- (void)suspend;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2;
- (void)setRowToSelect;
- (void)scrollToSelectedCell;
- (void)viewWillAppear:(_Bool)arg1;

@end

