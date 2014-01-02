/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class EDRowBlock;

// Not exported
@interface EMRowMapper : CMMapper
{
    EDRowBlock *mRowBlock;
    struct EDRowInfo *mRowInfo;
    double *columnGrid;
    int columnCount;
}

+ (void)mapEmptyRowAt:(id)arg1 colspan:(int)arg2 height:(double)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapEmptyCellsAt:(id)arg1 withState:(id)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
- (_Bool)isColumnHidden:(int)arg1;
- (id)initWithEDRowBlock:(id)arg1 rowInfo:(struct EDRowInfo *)arg2 parent:(id)arg3;

@end

