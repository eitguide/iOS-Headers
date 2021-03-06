//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SKComposeReviewDelegate.h"
#import "SKUILayoutCacheDelegate.h"
#import "SKUIProductPageChildViewController.h"
#import "SKUIReviewsFacebookViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableIndexSet, NSOperationQueue, NSString, SKComposeReviewViewController, SKUIClientContext, SKUIFacebookLikeStatus, SKUIIPadCustomerReviewsHeaderView, SKUILayoutCache, SKUIProductPage, SKUIProductPageHeaderViewController, SKUIProductPageTableView, SKUIReviewList, SKUIReviewsFacebookViewController, SKUIReviewsHistogramViewController, SKUIStarRatingQueue, SSVLoadURLOperation, UIScrollView;

@interface SKUIProductPageReviewsViewController : UIViewController <SKUILayoutCacheDelegate, SKComposeReviewDelegate, SKUIReviewsFacebookViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, SKUIProductPageChildViewController>
{
    SKUIClientContext *_clientContext;
    SKComposeReviewViewController *_composeViewController;
    id <SKUIProductPageChildViewControllerDelegate> _delegate;
    NSMutableIndexSet *_expandedIndexSet;
    SKUIReviewsFacebookViewController *_facebookViewController;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIReviewsHistogramViewController *_histogramViewController;
    BOOL _isPad;
    SKUILayoutCache *_layoutCache;
    int _loadedPageCount;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    SKUIProductPage *_productPage;
    SKUIReviewList *_reviewList;
    SKUIIPadCustomerReviewsHeaderView *_reviewsHeaderView;
    int _sortOrder;
    BOOL _showAllVersions;
    SKUIStarRatingQueue *_starRatingQueue;
    SKUIProductPageTableView *_tableView;
    BOOL _askPermission;
}

@property(readonly, nonatomic) SKUIProductPage *productPage; // @synthesize productPage=_productPage;
@property(retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) __weak id <SKUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) BOOL askPermission; // @synthesize askPermission=_askPermission;
- (void).cxx_destruct;
- (id)_urlStringWithPageNumber:(int)arg1;
- (id)_textLayoutRequestWithText:(id)arg1;
- (id)_textBoxCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_tableView;
- (BOOL)_shouldShowLoadMoreCell;
- (void)_setReviewListWithResponse:(id)arg1 error:(id)arg2;
- (id)_reviewsHeaderView;
- (void)_resetPersonalStarRating;
- (void)_reloadData;
- (void)_loadNextPageIfNecessaryForOffset:(struct CGPoint)arg1;
- (id)_loadMoreCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_histogramViewController;
- (float)_defaultPageWidth;
- (id)_bottomBorderColorForScheme:(id)arg1;
- (void)_addReviewsFromResponse:(id)arg1 error:(id)arg2;
- (void)_addHeaderView;
- (void)_writeAReviewAction:(id)arg1;
- (void)_versionSelectionAction:(id)arg1;
- (void)_starRatingAction:(id)arg1;
- (void)_sortSelectionAction:(id)arg1;
- (void)_appSupportAction:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reviewComposeViewControllerDidFinish:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)reviewsFacebookViewControllerDidChange:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
@property(copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus;
- (void)reloadData;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)dealloc;
- (id)initWithProductPage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

