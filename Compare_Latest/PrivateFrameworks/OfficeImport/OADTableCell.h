/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class OADTableCellProperties, OADTextBody;

// Not exported
@interface OADTableCell : NSObject
{
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    _Bool mHorzMerge;
    _Bool mVertMerge;
    int mTopRow;
    int mLeftColumn;
}

- (void)setLeftColumn:(int)arg1;
- (int)leftColumn;
- (void)setTopRow:(int)arg1;
- (int)topRow;
- (_Bool)merge:(int)arg1;
- (void)setVertMerge:(_Bool)arg1;
- (_Bool)vertMerge;
- (void)setHorzMerge:(_Bool)arg1;
- (_Bool)horzMerge;
- (void)setGridSpan:(int)arg1;
- (int)gridSpan;
- (void)setRowSpan:(int)arg1;
- (int)rowSpan;
- (int)spanAlongDir:(int)arg1;
- (void)setProperties:(id)arg1;
- (id)properties;
- (void)setTextBody:(id)arg1;
- (id)textBody;
- (void)dealloc;
- (id)init;

@end

