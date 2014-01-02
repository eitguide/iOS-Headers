/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OABFillPropertiesManager.h>

#import "OABBasePropertiesManager-Protocol.h"

// Not exported
@interface OABShapeBaseManager : OABFillPropertiesManager <OABBasePropertiesManager>
{
    struct EshShapeBase *mShapeBase;
}

- (int)shadowSoftness;
- (int)shadowOffsetY;
- (int)shadowOffsetX;
- (int)shadowAlpha;
- (int)shadowType;
- (_Bool)isShadowed;
- (int)strokeEndArrowLength;
- (int)strokeEndArrowWidth;
- (int)strokeEndArrowType;
- (int)strokeStartArrowLength;
- (int)strokeStartArrowWidth;
- (int)strokeStartArrowType;
- (int)strokeJoinStyle;
- (int)strokeCapStyle;
- (const struct EshTablePropVal<int> *)strokeCustomDash;
- (int)strokePresetDash;
- (int)strokeCompoundType;
- (int)strokeMiterLimit;
- (int)strokeWidth;
- (int)strokeFgAlpha;
- (id)strokeFillBlipName;
- (unsigned int)strokeFillBlipID;
- (int)strokeFillType;
- (struct EshColor)shadowColor;
- (struct EshColor)strokeBgColor;
- (struct EshColor)strokeFgColor;
- (_Bool)isStroked;
- (void)dealloc;
- (id)initWithShapeBase:(struct EshShapeBase *)arg1 shapeType:(int)arg2 masterShape:(struct EshShape *)arg3;

@end

