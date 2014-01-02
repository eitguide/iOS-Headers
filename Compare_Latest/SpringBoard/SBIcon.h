/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBIconIndexNode-Protocol.h"

@class NSHashTable, UIImage;

@interface SBIcon : NSObject <SBIconIndexNode>
{
    NSHashTable *_observers;
    id _badgeNumberOrString;
    unsigned int _uninstalled:1;
    UIImage *_cachedIconImages[14];
}

+ (id)memoryMappedIconImageOfSize:(struct CGSize)arg1 scale:(double)arg2 withDrawing:(id)arg3;
+ (id)memoryMappedIconImageForIconImage:(id)arg1;
+ (id)_iconImageOfSize:(struct CGSize)arg1 scale:(double)arg2 failGracefully:(_Bool)arg3 drawing:(id)arg4;
+ (id)_iconImagesMemoryPool;
- (_Bool)canReceiveGrabbedIcon;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertBodyForAppWithDocumentUpdatesPending;
- (id)uninstallAlertBodyForAppWithDocumentsInCloud;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitleForAppWithDocumentUpdatesPending;
- (id)uninstallAlertTitleForAppWithDocumentsInCloud;
- (id)uninstallAlertTitle;
- (_Bool)isUninstalled;
- (void)setUninstalled;
- (void)completeUninstall;
- (_Bool)allowsUninstall;
- (_Bool)progressIsPaused;
- (double)progressPercent;
- (long long)progressState;
- (void)launchFromLocation:(int)arg1;
- (id)automationID;
- (_Bool)isRecentlyUpdated;
- (void)setBadge:(id)arg1;
- (void)noteBadgeDidChange;
- (int)accessoryTypeForLocation:(int)arg1;
- (id)accessoryTextForLocation:(int)arg1;
- (id)badgeNumberOrString;
- (long long)badgeValue;
- (void)reloadIconImagePurgingImageCache:(_Bool)arg1;
- (void)reloadIconImage;
- (void)purgeCachedImages;
- (id)gridCellImage;
- (id)getGenericIconImage:(int)arg1;
- (id)getUnmaskedIconImage:(int)arg1;
- (id)getIconImage:(int)arg1;
- (id)getStandardIconImageForLocation:(int)arg1;
- (_Bool)shouldCacheImageForFormat:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (_Bool)launchEnabled;
- (id)tags;
- (_Bool)matchesEntity:(id)arg1;
- (long long)localizedCompareDisplayNames:(id)arg1;
- (_Bool)canEllipsizeLabel;
- (id)displayName;
- (void)localeChanged;
- (_Bool)matchesRepresentation:(id)arg1;
- (id)representation;
- (void)dealloc;
- (id)init;
- (int)iconFormatForLocation:(int)arg1;
@property(readonly, nonatomic) _Bool shouldWarmUp;
- (_Bool)hasCachedImageForLocation:(int)arg1;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
- (_Bool)hasObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)application;
- (_Bool)isApplicationIcon;
- (_Bool)isBookmarkIcon;
- (id)appPlaceholder;
- (_Bool)isDownloadingIcon;
- (_Bool)isUserInstalledApplicationIcon;
- (_Bool)isWebApplicationIcon;
- (_Bool)hasFolderIconView;
- (id)folder;
- (_Bool)isFolderIcon;
- (id)applicationBundleID;
- (id)webClip;
- (id)leafIdentifier;
- (_Bool)isLeafIcon;
- (Class)iconImageViewClassForLocation:(int)arg1;
- (Class)iconViewClassForLocation:(int)arg1;
- (void)_notifyLaunchEnabledDidChange;
- (void)_notifyAccessoriesDidUpdate;
- (void)_notifyImageDidUpdate;
- (_Bool)iconAppearsInNewsstand;
- (_Bool)isNewsstandApplicationIcon;
- (_Bool)isNewsstandIcon;
- (_Bool)isEmptyPlaceholder;
- (_Bool)isGrabbedIconPlaceholder;
- (_Bool)isPlaceholder;

@end

