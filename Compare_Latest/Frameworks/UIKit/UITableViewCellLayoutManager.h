/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface UITableViewCellLayoutManager : NSObject
{
}

+ (id)layoutManagerForTableViewCellStyle:(long long)arg1;
- (struct CGRect)textRectForCell:(id)arg1;
- (struct CGRect)contentEndingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(_Bool)arg2;
- (struct CGRect)contentStartingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(_Bool)arg2;
- (struct CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)selectedBackgroundEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)backgroundEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)backgroundStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)deleteConfirmationRectForCell:(id)arg1;
- (_Bool)editingAccessoryShouldFadeForCell:(id)arg1;
- (struct CGRect)editingAccessoryEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)editingAccessoryStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (_Bool)editingAccessoryShouldAppearForCell:(id)arg1;
- (_Bool)accessoryShouldFadeForCell:(id)arg1;
- (struct CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (_Bool)accessoryShouldAppearForCell:(id)arg1;
- (_Bool)reorderSeparatorShouldFadeForCell:(id)arg1;
- (struct CGRect)reorderSeparatorEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)reorderSeparatorStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (_Bool)reorderSeparatorShouldAppearForCell:(id)arg1;
- (_Bool)reorderControlShouldFadeForCell:(id)arg1;
- (struct CGRect)reorderControlEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)reorderControlStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (_Bool)reorderControlShouldAppearForCell:(id)arg1;
- (_Bool)editControlShouldFadeForCell:(id)arg1;
- (struct CGRect)editControlEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)editControlStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (_Bool)editControlShouldAppearForCell:(id)arg1;
- (struct CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2;
- (void)cell:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)cell:(id)arg1 willTransitionToState:(unsigned long long)arg2;
- (void)layoutSubviewsOfCell:(id)arg1;
- (double)contentIndentationForCell:(id)arg1;
- (id)badgeForCell:(id)arg1;
- (id)editableTextFieldForCell:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (id)textLabelForCell:(id)arg1;
- (id)imageViewForCell:(id)arg1;
- (id)defaultBadgeForCell:(id)arg1;
- (id)defaultEditableTextFieldForCell:(id)arg1;
- (id)defaultLabelForCell:(id)arg1;
- (id)defaultLabelForCell:(id)arg1 ofClass:(Class)arg2;
- (id)defaultTextLabelFontForCell:(id)arg1;
- (id)defaultImageViewForCell:(id)arg1;
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1;
- (double)defaultTextLabelFontSizeForCell:(id)arg1;

@end

