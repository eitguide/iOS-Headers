/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

#import "SFAirDropActivityViewControllerDelegate-Protocol.h"
#import "UIViewControllerRestoration-Protocol.h"

@class NSArray, NSOperationQueue, NSString, SFAirDropActivityViewController, UIActivity, UIActivityGroupListViewController;

@interface UIActivityViewController : UIViewController <UIViewControllerRestoration, SFAirDropActivityViewControllerDelegate>
{
    _Bool _useBlackPopoverStyle;
    _Bool _showKeyboardAutomatically;
    _Bool _allowsEmbedding;
    _Bool _airdropped;
    id _completionHandler;
    NSArray *_excludedActivityTypes;
    UIActivity *_activity;
    NSArray *_includedActivityTypes;
    long long _excludedActivityCategories;
    NSArray *_activityTypeOrder;
    NSString *_mailAutosaveIdentifier;
    id _preCompletionHandler;
    id <UIActivityViewControllerDelegate> _airDropDelegate;
    NSArray *_activityItems;
    NSArray *_applicationActivities;
    UIActivityGroupListViewController *_activityGroupListViewController;
    NSOperationQueue *_activityItemProviderOperationQueue;
    long long _totalProviderCount;
    long long _completedProviderCount;
    unsigned long long _backgroundTaskIdentifier;
    long long _originalPopoverBackgroundStyle;
    Class _originalPopoverBackgroundViewClass;
    NSString *_subject;
    UIViewController *_activityViewController;
    SFAirDropActivityViewController *_airDropViewController;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (id)_attachmentNameForActivityItem:(id)arg1 activity:(id)arg2;
+ (id)_thumbnailImageForActivityItem:(id)arg1 activity:(id)arg2;
+ (id)_dataTypeIdentifierForActivityItem:(id)arg1 activity:(id)arg2;
+ (id)_subjectForActivityItem:(id)arg1 activity:(id)arg2;
+ (void)_clearActivityItems:(id)arg1;
+ (void)_addActivityItem:(id)arg1 activityViewController:(id)arg2 originalActivityItem:(id)arg3;
+ (void)_reloadImageForActivity:(id)arg1;
+ (_Bool)_hasSystemActivityForActivityItems:(id)arg1;
+ (id)_builtinActivities;
@property(nonatomic) _Bool airdropped; // @synthesize airdropped=_airdropped;
@property(retain, nonatomic) SFAirDropActivityViewController *airDropViewController; // @synthesize airDropViewController=_airDropViewController;
@property(retain, nonatomic) UIViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) Class originalPopoverBackgroundViewClass; // @synthesize originalPopoverBackgroundViewClass=_originalPopoverBackgroundViewClass;
@property(nonatomic) long long originalPopoverBackgroundStyle; // @synthesize originalPopoverBackgroundStyle=_originalPopoverBackgroundStyle;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(nonatomic) long long completedProviderCount; // @synthesize completedProviderCount=_completedProviderCount;
@property(nonatomic) long long totalProviderCount; // @synthesize totalProviderCount=_totalProviderCount;
@property(retain, nonatomic) NSOperationQueue *activityItemProviderOperationQueue; // @synthesize activityItemProviderOperationQueue=_activityItemProviderOperationQueue;
@property(retain, nonatomic) UIActivityGroupListViewController *activityGroupListViewController; // @synthesize activityGroupListViewController=_activityGroupListViewController;
@property(copy, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(copy, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
@property(nonatomic) id <UIActivityViewControllerDelegate> airDropDelegate; // @synthesize airDropDelegate=_airDropDelegate;
@property(copy, nonatomic) id preCompletionHandler; // @synthesize preCompletionHandler=_preCompletionHandler;
@property(retain, nonatomic) NSString *mailAutosaveIdentifier; // @synthesize mailAutosaveIdentifier=_mailAutosaveIdentifier;
@property(nonatomic) _Bool allowsEmbedding; // @synthesize allowsEmbedding=_allowsEmbedding;
@property(copy, nonatomic) NSArray *activityTypeOrder; // @synthesize activityTypeOrder=_activityTypeOrder;
@property(nonatomic) long long excludedActivityCategories; // @synthesize excludedActivityCategories=_excludedActivityCategories;
@property(copy, nonatomic) NSArray *includedActivityTypes; // @synthesize includedActivityTypes=_includedActivityTypes;
@property(nonatomic) _Bool showKeyboardAutomatically; // @synthesize showKeyboardAutomatically=_showKeyboardAutomatically;
@property(nonatomic) _Bool useBlackPopoverStyle; // @synthesize useBlackPopoverStyle=_useBlackPopoverStyle;
@property(retain, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
@property(copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)airDropActivityDidSuccessfullyCompleteTransfer;
- (void)airDropActivityDidSuccessfullyStartTransfer;
- (void)airDropActivityRequestingSharedItemsWithCompletionHandler:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)_cancel;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_setDarkStyleOnLegacyApp;
- (void)_setPopoverController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_performActivity:(id)arg1;
- (void)_performActivityOfType:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)_resetAfterActivity:(_Bool)arg1;
- (void)_executeActivity;
- (void)_mailAutosaveWithHandler:(id)arg1;
- (void)_cleanupActivityWithSuccess:(_Bool)arg1;
@property(readonly, nonatomic) _Bool sourceIsManaged;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (double)_displayHeight;
- (void)viewDidLoad;
- (void)_updateActivityItems:(id)arg1;
- (id)_availableActivities;
- (_Bool)_shouldShowSystemActivity:(id)arg1;
- (id)_activityItemValues;
- (void)dealloc;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (void)_reloadImageForActivity:(id)arg1;
- (void)_notifyReloadImageForActivity:(id)arg1;

@end

