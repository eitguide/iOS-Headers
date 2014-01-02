/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSTLayoutDynamicResizeInfoProtocol-Protocol.h"

@class TSTCellRegion;

// Not exported
@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol>
{
    _Bool mValid;
    int mTableRowsBehavior;
    TSTCellRegion *mRowRegion;
    unsigned short mStartRowIndex;
    unsigned short mNumberOfRows;
    unsigned short mNumberOfResizableRows;
    double *mCapturedRowHeights;
    double *mCurrentRowHeights;
    double *mMinimumRowHeights;
    double mCapturedRowHeightTotal;
    TSTCellRegion *mColumnRegion;
    unsigned char mStartColumnIndex;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfResizableColumns;
    double *mCapturedColumnWidths;
    double *mCurrentColumnWidths;
    double *mMinimumColumnWidths;
    double mCapturedColumnWidthTotal;
}

- (id)columnWidths;
- (id)rowHeights;
- (void)enumerateRowHeightsUsingBlock:(id)arg1;
- (void)enumerateColumnWidthsUsingBlock:(id)arg1;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (double)applyColumnTotalWidth:(double)arg1;
- (double)applyRowTotalHeight:(double)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (double)getColumnWidthResize:(unsigned char)arg1;
- (double)getRowHeightResize:(unsigned short)arg1;
- (double)getColumnWidth:(unsigned char)arg1;
- (double)getRowHeight:(unsigned short)arg1;
- (double)getColumnInitialWidth:(unsigned char)arg1;
- (double)getRowInitialHeight:(unsigned short)arg1;
- (_Bool)hasWidthForColumn:(unsigned char)arg1;
- (_Bool)hasHeightForRow:(unsigned short)arg1;
- (void)invalidate;
- (_Bool)valid;
- (void)p_captureRowColumnInformation:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3;
- (void)dealloc;
- (id)initWithDynamicResizeInfo:(id)arg1;
- (id)initWithMasterLayout:(id)arg1 rowRegion:(id)arg2;
- (id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2;
- (id)initWithMasterLayout:(id)arg1;

@end

