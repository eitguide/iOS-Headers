/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITextField.h"

@class UILabel;

@interface SBPasscodeTextField : UITextField
{
    double _letterSpacing;
    _Bool _usesLargeClearButton;
    UILabel *_hiddenLabel;
}

@property(nonatomic) _Bool usesLargeClearButton; // @synthesize usesLargeClearButton=_usesLargeClearButton;
@property(nonatomic) double letterSpacing; // @synthesize letterSpacing=_letterSpacing;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)_handleKeyUIEvent:(id)arg1;
- (id)_style;
- (void)_endedEditing;
- (void)attachFieldEditor:(id)arg1;
- (id)createTextLabelWithTextColor:(id)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (void)dealloc;

@end

