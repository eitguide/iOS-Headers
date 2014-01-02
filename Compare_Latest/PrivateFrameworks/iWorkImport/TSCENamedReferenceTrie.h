/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSCENamedReferenceTrie : NSObject
{
    struct TSCENamedReferenceTrieNode mRoot;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)trackedReferencesExactlyMatchingString:(id)arg1 scopedToTable:(struct __CFUUID *)arg2;
- (id)trackedReferencesMatchingString:(id)arg1 scopedToTable:(struct __CFUUID *)arg2;
- (_Bool)replaceName:(id)arg1 withName:(id)arg2 inTable:(struct __CFUUID *)arg3 trackedReference:(id)arg4;
- (void)deleteName:(id)arg1 inTable:(struct __CFUUID *)arg2 trackedReference:(id)arg3;
- (_Bool)insertName:(id)arg1 inTable:(struct __CFUUID *)arg2 trackedReference:(id)arg3;

@end

