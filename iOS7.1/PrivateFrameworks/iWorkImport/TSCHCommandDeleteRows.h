//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartCommand.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCHCommandDeleteRows : TSCHChartCommand
{
    struct _NSRange mRowRange;
    NSArray *mCutNames;
    NSArray *mCutValues;
    BOOL mRemovedAllRows;
    NSArray *mCutColumnNames;
}

- (id).cxx_construct;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (const struct ChartCommandArchive *)chartCommandArchiveFromUnarchiver:(id)arg1;
- (void)redoPrimitive;
- (void)undoPrimitive;
- (void)commitPrimitive;
- (BOOL)process;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1 rowRange:(struct _NSRange)arg2;

@end
