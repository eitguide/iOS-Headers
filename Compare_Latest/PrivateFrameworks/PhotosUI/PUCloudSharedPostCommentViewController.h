/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLModalDimmingContained-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, PUCloudSharedBackdropView, PUStackView, UIColor, UILabel, UITableView, UITextView, UIView;

@interface PUCloudSharedPostCommentViewController : UIViewController <UITextViewDelegate, UITableViewDataSource, UITableViewDelegate, PLModalDimmingContained>
{
    UIView *_backgroundView;
    NSArray *_dialogConstraints;
    NSArray *_backgroundConstraints;
    PUStackView *_imageStackView;
    PUCloudSharedBackdropView *_containerView;
    UILabel *_textPlaceholderLabel;
    UITextView *_textView;
    NSMutableArray *_attachments;
    UIColor *_placeholderColor;
    UIColor *_separatorColor;
    NSString *_albumName;
    UITableView *_tableView;
    UIView *_dialogView;
    struct {
        unsigned int hasDidCancelComment:1;
        unsigned int hasDidSendComment:1;
    } _delegateFlags;
    _Bool _isNewAlbum;
    id _completionHandler;
    NSString *_placeholderText;
    long long _selectedAlbumIndex;
    id <PUCloudSharedPostCommentViewControllerDelegate> _commentDelegate;
}

@property(nonatomic) __weak id <PUCloudSharedPostCommentViewControllerDelegate> commentDelegate; // @synthesize commentDelegate=_commentDelegate;
@property(nonatomic) long long selectedAlbumIndex; // @synthesize selectedAlbumIndex=_selectedAlbumIndex;
@property(nonatomic) _Bool isNewAlbum; // @synthesize isNewAlbum=_isNewAlbum;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_postAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (id)navigationItem;
- (void)addImage:(id)arg1;
- (id)_constraintsForBackgroundView:(id)arg1 inContainerView:(id)arg2;
- (void)_addBackgroundViewConstraintsInView:(id)arg1;
- (void)_addDialogConstraintsInView:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_updateKeyboard;
- (void)viewDidLoad;
- (void)loadView;
- (void)textViewDidChange:(id)arg1;
@property(readonly, nonatomic) NSString *commentText;
- (id)_contentView;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)_separatorColor;
- (id)_placeholderColor;
- (struct CGSize)preferredSizeInParentViewController;
- (struct CGPoint)preferredOffsetInParentViewController;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAlbumName:(id)arg1 isCreateAlbum:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1;

@end

