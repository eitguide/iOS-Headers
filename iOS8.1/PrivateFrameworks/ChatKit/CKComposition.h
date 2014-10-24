//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSAttributedString;

@interface CKComposition : NSObject
{
    NSAttributedString *_text;
    NSAttributedString *_subject;
}

+ (id)composition;
+ (id)compositionWithMediaObjects:(id)arg1 subject:(id)arg2;
+ (id)compositionWithMediaObject:(id)arg1 subject:(id)arg2;
+ (id)expirableCompositionWithMediaObject:(id)arg1;
+ (id)audioCompositionWithMediaObject:(id)arg1;
+ (id)quickImageCompositionWithMediaObject:(id)arg1;
+ (id)photoPickerCompositionWithMediaObjects:(id)arg1;
+ (id)photoPickerCompositionWithMediaObject:(id)arg1;
+ (id)compositionForMessageParts:(id)arg1 preserveSubject:(BOOL)arg2;
+ (id)savedCompositionForGUID:(id)arg1;
+ (void)deleteCompositionWithGUID:(id)arg1;
@property(copy, nonatomic) NSAttributedString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property(readonly, nonatomic, getter=isSaveable) BOOL saveable;
@property(readonly, nonatomic, getter=isSendAnimated) BOOL sendAnimated;
- (id)compositionByAppendingComposition:(id)arg1;
- (id)compositionByAppendingText:(id)arg1;
@property(readonly, nonatomic) BOOL hasNonwhiteSpaceContent;
@property(readonly, nonatomic) BOOL hasContent;
- (id)initWithText:(id)arg1 subject:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSArray *pasteboardItems;
@property(readonly, nonatomic, getter=isTextOnly) BOOL textOnly;
@property(readonly, retain, nonatomic) NSArray *mediaObjects;
- (id)compositionByReplacingMediaObject:(id)arg1 withMediaObject:(id)arg2;
- (id)compositionByAppendingMediaObjects:(id)arg1;
- (id)compositionByAppendingMediaObject:(id)arg1;
@property(readonly, nonatomic, getter=isExpirableComposition) BOOL expirableComposition;
- (id)messageWithGUID:(id)arg1;
- (id)superFormatText:(id *)arg1;
- (id)superFormatSubject;
- (void)saveCompositionWithGUID:(id)arg1;

@end
