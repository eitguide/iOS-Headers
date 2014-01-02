/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCProfileConnection.h>

@interface MCProfileConnection (SafariBookmarks)
- (void)setWebContentFilterUserBlacklistedURLStrings:(id)arg1;
- (id)webContentFilterEffectiveBlacklistedURLStrings;
- (id)webContentFilterUserBlacklistedURLStrings;
- (void)addUserBookmark:(id)arg1;
- (void)addWebContentFilterAutoPermittedURLString:(id)arg1;
- (void)setWebContentFilterAutoPermittedURLStrings:(id)arg1;
- (_Bool)isWebFilterUIActive;
- (id)defaultUserBookmarks;
- (void)unstashUserBookmarksFromLabel:(id)arg1;
- (void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2;
- (id)userBookmarks;
- (void)setUserBookmarks:(id)arg1;
@end

