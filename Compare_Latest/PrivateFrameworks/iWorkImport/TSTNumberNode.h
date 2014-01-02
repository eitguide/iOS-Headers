/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSTExpressionNode.h>

@class NSString;

// Not exported
@interface TSTNumberNode : TSTExpressionNode
{
    double mNumber;
    NSString *mString;
}

- (void)saveToArchive:(struct NumberNodeArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct NumberNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(CDStruct_0441cfb5)arg2;
- (id)exportString;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
- (id)argumentSpec;
@property(retain, nonatomic) NSString *string;
- (int)tokenType;
@property(nonatomic) double number;
- (void)dealloc;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 string:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 number:(double)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 number:(double)arg2 string:(id)arg3 firstIndex:(unsigned long long)arg4 lastIndex:(unsigned long long)arg5;

@end

