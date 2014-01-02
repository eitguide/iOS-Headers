/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSViewController.h>

#import "PSViewControllerOffsetProtocol-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIActionSheet, UIAlertView, UIKeyboard, UIPopoverController, UITableView, UIView;

@interface PSListController : PSViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, PSViewControllerOffsetProtocol>
{
    NSMutableArray *_prequeuedReusablePSTableCells;
    NSMutableDictionary *_cells;
    _Bool _cachesCells;
    _Bool _reusesCells;
    _Bool _forceSynchronousIconLoadForCreatedCells;
    UIView *_containerView;
    UITableView *_table;
    NSArray *_specifiers;
    NSMutableDictionary *_specifiersByID;
    NSMutableArray *_groups;
    NSString *_specifierID;
    NSMutableArray *_bundleControllers;
    _Bool _bundlesLoaded;
    _Bool _showingSetupController;
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    _Bool _swapAlertButtons;
    _Bool _keyboardWasVisible;
    UIKeyboard *_keyboard;
    UIPopoverController *_popupStylePopoverController;
    _Bool _popupStylePopoverShouldRePresent;
    _Bool _popupIsModal;
    _Bool _popupIsDismissing;
    _Bool _hasAppeared;
    float _verticalContentOffset;
    NSString *_offsetItemName;
    struct CGPoint _contentOffsetWithKeyboard;
    _Bool _edgeToEdgeCells;
}

+ (_Bool)displaysButtonBar;
@property(nonatomic) _Bool edgeToEdgeCells; // @synthesize edgeToEdgeCells=_edgeToEdgeCells;
@property(nonatomic) _Bool forceSynchronousIconLoadForCreatedCells; // @synthesize forceSynchronousIconLoadForCreatedCells=_forceSynchronousIconLoadForCreatedCells;
- (void)_setNotShowingSetupController;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (void)setDesiredVerticalContentOffset:(float)arg1;
- (float)verticalContentOffset;
- (void)selectRowForSpecifier:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_setContentInset:(double)arg1;
- (double)_getKeyboardIntersectionHeight;
- (void)reloadIconForSpecifierForBundle:(id)arg1;
- (void)handleURL:(id)arg1;
- (void)pushController:(id)arg1;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (void)dismissPopover;
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;
- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)pushController:(id)arg1 animate:(_Bool)arg2;
- (id)specifierForID:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)controllerForSpecifier:(id)arg1;
- (id)controllerForRowAtIndexPath:(id)arg1;
- (void)lazyLoadBundle:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_handleActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmationViewCancelledForSpecifier:(id)arg1;
- (void)confirmationViewAcceptedForSpecifier:(id)arg1;
- (void)dismissConfirmationViewForSpecifier:(id)arg1 animated:(_Bool)arg2;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(_Bool)arg2 swapAlertButtons:(_Bool)arg3;
- (_Bool)performConfirmationCancelActionForSpecifier:(id)arg1;
- (_Bool)performConfirmationActionForSpecifier:(id)arg1;
- (_Bool)performButtonActionForSpecifier:(id)arg1;
- (_Bool)performLoadActionForSpecifier:(id)arg1;
- (_Bool)performActionForSpecifier:(id)arg1;
- (void)_returnKeyPressed:(id)arg1;
- (void)returnPressedAtEnd;
- (void)popupViewWillDisappear;
- (void)formSheetViewWillDisappear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)prepareSpecifiersMetadata;
- (void)viewDidLoad;
- (id)findFirstVisibleResponder;
- (_Bool)shouldSelectResponderOnAppearance;
- (void)_scrollToSpecifierNamed:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)_tableView:(id)arg1 viewForCustomInSection:(long long)arg2 isHeader:(_Bool)arg3;
- (double)_tableView:(id)arg1 heightForCustomInSection:(long long)arg2 isHeader:(_Bool)arg3;
- (id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(_Bool)arg3;
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 detailTextForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)createPrequeuedPSTableCells:(unsigned long long)arg1;
- (id)cachedCellForSpecifierID:(id)arg1;
- (id)cachedCellForSpecifier:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)specifierID;
- (void)setSpecifierID:(id)arg1;
- (void)reloadSpecifiers;
- (void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2;
- (void)reload;
- (void)loseFocus;
- (void)createGroupIndices;
- (id)_createGroupIndices:(id)arg1;
- (void)viewDidUnload;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (Class)tableViewClass;
- (id)initForContentSize:(struct CGSize)arg1;
- (id)init;
- (void)dealloc;
- (void)_unloadBundleControllers;
- (void)_loadBundleControllers;
- (void)updateSpecifiersInRange:(struct _NSRange)arg1 withSpecifiers:(id)arg2;
- (void)updateSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (long long)_nextGroupInSpecifiersAfterIndex:(long long)arg1 inArray:(id)arg2;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(_Bool)arg3;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)removeContiguousSpecifiers:(id)arg1;
- (void)removeContiguousSpecifiers:(id)arg1 animated:(_Bool)arg2;
- (void)_removeContiguousSpecifiers:(id)arg1 animated:(_Bool)arg2;
- (void)removeLastSpecifierAnimated:(_Bool)arg1;
- (void)removeLastSpecifier;
- (void)removeSpecifierAtIndex:(long long)arg1;
- (void)removeSpecifierID:(id)arg1;
- (void)removeSpecifier:(id)arg1;
- (void)removeSpecifierAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)removeSpecifierID:(id)arg1 animated:(_Bool)arg2;
- (void)removeSpecifier:(id)arg1 animated:(_Bool)arg2;
- (void)addSpecifiersFromArray:(id)arg1 animated:(_Bool)arg2;
- (void)addSpecifiersFromArray:(id)arg1;
- (void)addSpecifier:(id)arg1 animated:(_Bool)arg2;
- (void)addSpecifier:(id)arg1;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(long long)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(long long)arg2 animated:(_Bool)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(_Bool)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(_Bool)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)_insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(long long)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertSpecifier:(id)arg1 atIndex:(long long)arg2;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(long long)arg2 animated:(_Bool)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(_Bool)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(_Bool)arg3;
- (void)insertSpecifier:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3;
- (id)specifiersInGroup:(long long)arg1;
- (long long)rowsForGroup:(long long)arg1;
- (long long)indexForRow:(long long)arg1 inGroup:(long long)arg2;
- (_Bool)getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifierAtIndex:(long long)arg3;
- (_Bool)_getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifierAtIndex:(long long)arg3 groups:(id)arg4;
- (_Bool)getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifier:(id)arg3;
- (_Bool)getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifierID:(id)arg3;
- (id)specifierAtIndex:(long long)arg1;
- (long long)numberOfGroups;
- (long long)indexOfGroup:(long long)arg1;
- (_Bool)containsSpecifier:(id)arg1;
- (long long)indexOfSpecifier:(id)arg1;
- (long long)indexOfSpecifierID:(id)arg1;
- (void)reloadSpecifierID:(id)arg1;
- (void)reloadSpecifierID:(id)arg1 animated:(_Bool)arg2;
- (void)reloadSpecifier:(id)arg1;
- (void)reloadSpecifier:(id)arg1 animated:(_Bool)arg2;
- (void)reloadSpecifierAtIndex:(long long)arg1;
- (void)reloadSpecifierAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)endUpdates;
- (void)beginUpdates;
- (long long)indexForIndexPath:(id)arg1;
- (id)indexPathForSpecifier:(id)arg1;
- (id)indexPathForIndex:(long long)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)_removeIdentifierForSpecifier:(id)arg1;
- (void)_addIdentifierForSpecifier:(id)arg1;
- (id)specifiers;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (id)specifier;
- (id)bundle;
- (id)table;
- (id)description;
- (void)setCachesCells:(_Bool)arg1;
- (void)setReusesCells:(_Bool)arg1;
- (void)clearCache;

@end

