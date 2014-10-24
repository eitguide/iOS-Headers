//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ML3MigrationDirectives : NSObject
{
    BOOL _needsToRecreateIndexes;
    BOOL _needsToRecreateTriggers;
    BOOL _needsToRemoveLocationsForItemsMissingAssets;
    BOOL _needsToReloadStoreBookmarkMetadataIdentifiers;
    BOOL _needsToReloadContainerMediaTypes;
    BOOL _needsAnalyze;
    BOOL _needsToAutogenerateArtworkVariants;
    int _originalUserVersion;
    int _currentUserVersion;
}

@property(nonatomic) BOOL needsToAutogenerateArtworkVariants; // @synthesize needsToAutogenerateArtworkVariants=_needsToAutogenerateArtworkVariants;
@property(nonatomic) BOOL needsAnalyze; // @synthesize needsAnalyze=_needsAnalyze;
@property(nonatomic) BOOL needsToReloadContainerMediaTypes; // @synthesize needsToReloadContainerMediaTypes=_needsToReloadContainerMediaTypes;
@property(nonatomic) BOOL needsToReloadStoreBookmarkMetadataIdentifiers; // @synthesize needsToReloadStoreBookmarkMetadataIdentifiers=_needsToReloadStoreBookmarkMetadataIdentifiers;
@property(nonatomic) BOOL needsToRemoveLocationsForItemsMissingAssets; // @synthesize needsToRemoveLocationsForItemsMissingAssets=_needsToRemoveLocationsForItemsMissingAssets;
@property(nonatomic) BOOL needsToRecreateTriggers; // @synthesize needsToRecreateTriggers=_needsToRecreateTriggers;
@property(nonatomic) BOOL needsToRecreateIndexes; // @synthesize needsToRecreateIndexes=_needsToRecreateIndexes;
@property(nonatomic) int currentUserVersion; // @synthesize currentUserVersion=_currentUserVersion;
@property(readonly, nonatomic) int originalUserVersion; // @synthesize originalUserVersion=_originalUserVersion;
- (id)initWithOriginalUserVersion:(int)arg1;

@end
