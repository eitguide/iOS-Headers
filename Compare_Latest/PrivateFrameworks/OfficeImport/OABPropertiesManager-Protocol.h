/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "OABBasePropertiesManager-Protocol.h"

@protocol OABPropertiesManager <OABBasePropertiesManager>
- (_Bool)hidden;
- (_Bool)textPathStrikethrough;
- (_Bool)textPathSmallcaps;
- (_Bool)textPathUnderline;
- (_Bool)textPathItalic;
- (_Bool)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (int)textPathTextAlignment;
- (id)textPathUnicodeString;
- (_Bool)isTextPath;
- (_Bool)isShadowOK;
- (_Bool)isStrokeOK;
- (_Bool)isFillOK;
@end

