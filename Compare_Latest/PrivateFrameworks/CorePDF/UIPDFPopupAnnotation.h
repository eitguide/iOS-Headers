/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CorePDF/UIPDFAnnotation.h>

@interface UIPDFPopupAnnotation : UIPDFAnnotation
{
    UIPDFAnnotation *parent;
    struct CGRect _adjustedBounds;
}

@property(nonatomic) struct CGRect adjustedBounds; // @synthesize adjustedBounds=_adjustedBounds;
@property(nonatomic) UIPDFAnnotation *parent; // @synthesize parent;
- (_Bool)recognizeGestures;
- (int)annotationType;
- (struct CGRect)bounds;
- (Class)viewClass;
- (id)init;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1;

@end

