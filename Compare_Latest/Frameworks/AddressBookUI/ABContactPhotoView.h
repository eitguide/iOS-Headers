/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class CNContact, NSDictionary, UIImage, UIImageView, UILabel;

@interface ABContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate>
{
    _Bool _editing;
    CNContact *_contact;
    id <ABPresenterDelegate> _delegate;
    NSDictionary *_photoPickerInfo;
    UIImage *_currentThumbnailImage;
    UIImage *_currentImage;
    UIImageView *_contactImageView;
    UILabel *_addPhotoLabel;
    UILabel *_editPhotoLabel;
    UIImageView *_attributionImageView;
}

+ (id)supportedPasteboardTypes;
@property(retain, nonatomic) UIImageView *attributionImageView; // @synthesize attributionImageView=_attributionImageView;
@property(retain, nonatomic) UILabel *editPhotoLabel; // @synthesize editPhotoLabel=_editPhotoLabel;
@property(retain, nonatomic) UILabel *addPhotoLabel; // @synthesize addPhotoLabel=_addPhotoLabel;
@property(retain, nonatomic) UIImageView *contactImageView; // @synthesize contactImageView=_contactImageView;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(retain, nonatomic) UIImage *currentThumbnailImage; // @synthesize currentThumbnailImage=_currentThumbnailImage;
@property(retain, nonatomic) NSDictionary *photoPickerInfo; // @synthesize photoPickerInfo=_photoPickerInfo;
@property(nonatomic) id <ABPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)_bounceSmallPhoto;
- (void)_dismissFullScreenPhoto:(id)arg1;
- (void)_presentFullScreenPhoto:(id)arg1;
- (void)_zoomContactPhoto;
- (id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect)arg2;
- (id)_createImagePicker;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)_presentPhotoEditingSheet;
- (void)updateAttributionBadge;
- (void)updatePhotoWithImage:(id)arg1;
- (void)updatePhoto;
- (void)reloadPhoto;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)menuWillHide:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)longPressGesture:(id)arg1;
- (void)tapGesture:(id)arg1;
- (void)setHighlightedFrame:(_Bool)arg1;
- (void)saveEdits;
- (id)currentImageDataAndCropRect:(struct CGRect *)arg1;
- (id)currentImageData;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2;

@end

