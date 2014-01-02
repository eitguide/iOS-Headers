/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "NSCopying-Protocol.h"

@class EKDayOccurrenceContentView, EKEvent, NSString, UIColor, UIImageView;

@interface EKDayOccurrenceView : UIView <NSCopying>
{
    double _visibleHeight;
    UIImageView *_colorBar;
    EKDayOccurrenceContentView *_content;
    _Bool _needsContentCalc;
    _Bool _needsColorBarUpdate;
    UIView *_startResizeHandle;
    UIView *_endResizeHandle;
    double _originalXBeforeOffset;
    unsigned int _touchKeptInsideOccurrence:1;
    unsigned int _offsetContentForLandscape:1;
    _Bool _visibleHeightLocked;
    _Bool _selected;
    _Bool _dimmed;
    _Bool _dragging;
    _Bool _allDayDrawingStyle;
    _Bool _drawsResizeHandles;
    _Bool _hideColorBar;
    _Bool _hideText;
    _Bool _tentative;
    _Bool _declined;
    _Bool _needsReply;
    _Bool _allDay;
    int _occurrenceBackgroundStyle;
    id _delegate;
    EKEvent *_occurrence;
    UIColor *_color;
    double _cappedColorBarHeight;
    UIColor *_titleTextColor;
    UIColor *_secondaryTextColor;
    UIColor *_textBackgroundColor;
    id _endSelectionStateCallback;
    struct UIEdgeInsets _margin;
    struct UIEdgeInsets _padding;
}

+ (struct UIEdgeInsets)defaultPadding;
+ (struct UIEdgeInsets)defaultMargin;
+ (double)barToBarHorizontalDistanceIncludingBarWidth;
+ (double)colorBarImageSideLength;
+ (double)barToBarGapWidth;
+ (id)_adjustedStripeColorForDarkBackground:(id)arg1;
+ (id)_adjustedOccurrenceColorForDarkBackground:(id)arg1 opaque:(_Bool)arg2;
+ (id)_lightStripeColorForColor:(id)arg1;
+ (id)_lightColorForColor:(id)arg1 opaque:(_Bool)arg2;
+ (id)_color:(id)arg1 lightenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3;
+ (id)_cachedImageForCalendarColor:(id)arg1 selected:(_Bool)arg2 declined:(_Bool)arg3 cancelled:(_Bool)arg4 tentative:(_Bool)arg5 needsReply:(_Bool)arg6 dayViewBackgroundStyle:(int)arg7;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(double)arg4;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2;
+ (struct CGRect)contentStretchRectForFrame:(struct CGRect)arg1;
+ (double)bottomShadowMargin;
+ (double)minimumHeightForOrientation:(long long)arg1 isAllDay:(_Bool)arg2;
+ (double)minimumHeightForOrientation:(long long)arg1;
+ (id)occurrenceViewWithFrame:(struct CGRect)arg1;
+ (void)clearCaches;
+ (void)_clearViewCache;
+ (id)_viewCache;
@property(copy, nonatomic) id endSelectionStateCallback; // @synthesize endSelectionStateCallback=_endSelectionStateCallback;
@property(nonatomic) int occurrenceBackgroundStyle; // @synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle;
@property(retain, nonatomic) UIColor *textBackgroundColor; // @synthesize textBackgroundColor=_textBackgroundColor;
@property(retain, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(nonatomic) double cappedColorBarHeight; // @synthesize cappedColorBarHeight=_cappedColorBarHeight;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(nonatomic) _Bool needsReply; // @synthesize needsReply=_needsReply;
@property(nonatomic, getter=isDeclined) _Bool declined; // @synthesize declined=_declined;
@property(nonatomic, getter=isTentative) _Bool tentative; // @synthesize tentative=_tentative;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) _Bool hideText; // @synthesize hideText=_hideText;
@property(nonatomic) _Bool hideColorBar; // @synthesize hideColorBar=_hideColorBar;
@property(nonatomic) _Bool drawsResizeHandles; // @synthesize drawsResizeHandles=_drawsResizeHandles;
@property(nonatomic) _Bool allDayDrawingStyle; // @synthesize allDayDrawingStyle=_allDayDrawingStyle;
@property(nonatomic) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) EKEvent *occurrence; // @synthesize occurrence=_occurrence;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHideText:(_Bool)arg1 animate:(_Bool)arg2;
- (void)_resetContentViewPosition;
- (_Bool)resetContentViewToOriginalState:(_Bool)arg1;
- (void)fadeInContentViewAt:(double)arg1 leftScreenEdge:(double)arg2 minWidth:(double)arg3 animated:(_Bool)arg4;
- (double)_fadedInContentViewHorizontalAdjustment;
@property(readonly, nonatomic) _Bool colorBarExtendsPastOrEqualToNaturalTextHeight;
- (double)_verticalContentInset;
- (double)enoughHeightForOneLine;
- (double)viewMaxNaturalTextHeight;
- (double)unconstrainedWidth;
- (void)bringResizeHandlesToFront;
- (id)arrayOfResizeHandles;
- (int)dragTypeFromPoint:(struct CGPoint)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGRect)_frameMutatedForProximityToHourLine:(struct CGRect)arg1;
- (id)_timedEventBackgroundColor;
- (id)_backgroundColor;
- (struct CGRect)_computeContentRect;
- (id)_newResizeHandleView;
- (void)animateToFrame:(struct CGRect)arg1 isAllDay:(_Bool)arg2 beginFromCurrentState:(_Bool)arg3 whenFinished:(id)arg4;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateResizeHandleLocations;
- (void)setVisibleHeight:(double)arg1;
@property(readonly, nonatomic) _Bool visibleHeightLocked;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (void)_updateBackgroundColor;
- (void)setAllDayDrawingStyle:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)hasIcon;
@property(nonatomic, getter=isFacebook) _Bool facebook;
@property(nonatomic, getter=isBirthday) _Bool birthday;
@property(nonatomic, getter=isCancelled) _Bool cancelled;
- (void)_invalidateContentBounds;
@property(copy, nonatomic) NSString *location;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) _Bool usesSmallText;
- (void)prepareForReuse;
- (id)description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

