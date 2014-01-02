/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "EDFormulaBuilding-Protocol.h"

// Not exported
@interface EDBuildableFormula : NSObject <EDFormulaBuilding>
{
    struct EDFormulaPtg *mTree;
    int mWarning;
}

- (unsigned int)removeOptionalPtgArgs:(unsigned int)arg1 minArgs:(unsigned int)arg2;
- (_Bool)insertVariableFunction:(unsigned short)arg1 afterIndex:(unsigned int)arg2 numArgs:(unsigned int)arg3;
- (_Bool)replaceArgPtgAtIndex:(unsigned int)arg1 withFormula:(id)arg2;
- (int)argTokenTypeAtIndex:(unsigned int)arg1;
- (_Bool)argTokenIsDurationAtIndex:(unsigned int)arg1;
- (_Bool)copyToken:(unsigned int)arg1 from:(id)arg2;
- (void)copyToFormula:(id)arg1;
- (id)formula;
- (_Bool)isSupportedFormula;
- (int)warningType;
- (void)setWarning:(int)arg1;
- (_Bool)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (void)markLastTokenAsSpanningRefVertically:(_Bool)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (void)markLastTokenAsDuration;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(_Bool *)arg1 withEDLinks:(id)arg2;
- (_Bool)convertRefs:(unsigned int)arg1 toTypes:(int *)arg2;
- (void)convertRefsInList:(struct EDFormulaPtg *)arg1 toType:(int)arg2;
- (_Bool)convertLastRefsToArea;
- (_Bool)convertToIntersect:(unsigned int)arg1;
- (_Bool)convertToList:(unsigned int)arg1 withFinalParen:(_Bool)arg2;
- (_Bool)convertToList:(unsigned int)arg1;
- (_Bool)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (_Bool)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (_Bool)makeArrayForLastToken:(unsigned long long)arg1;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (void)dealloc;

@end

