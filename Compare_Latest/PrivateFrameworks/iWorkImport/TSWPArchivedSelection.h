/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPObject.h>

@class TSWPSelection;

// Not exported
@interface TSWPArchivedSelection : TSPObject
{
    TSWPSelection *_selection;
}

@property(retain, nonatomic) TSWPSelection *selection; // @synthesize selection=_selection;
- (void)dealloc;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

