/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSTextAttachmentContainer-Protocol.h"

@class NSData, NSFileWrapper, NSString, UIImage, UITextAttachmentView, UIView;

@interface NSTextAttachment : NSObject <NSTextAttachmentContainer, NSCoding>
{
    NSData *_data;
    NSString *_uti;
    NSString *_cacheKey;
    struct CGRect _bounds;
    UIImage *_image;
    NSFileWrapper *_fileWrapper;
    UITextAttachmentView *_wrapperView;
}

+ (id)imageCache;
+ (void)initialize;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_uti;
@property(retain, nonatomic) NSData *contents; // @synthesize contents=_data;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
@property(nonatomic) struct CGRect bounds;
- (struct CGRect)drawingBounds;
- (void)setDrawingBounds:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *image;
- (id)attachmentCell;
@property(retain) UIView *contentView;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSFileWrapper *fileWrapper;
- (void)dealloc;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)_image;
- (id)_cacheKey;

@end

