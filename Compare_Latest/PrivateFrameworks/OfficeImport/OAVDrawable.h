/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface OAVDrawable : NSObject
{
}

+ (struct CGRect)readCoordBounds:(struct _xmlNode *)arg1;
+ (void)readFromDrawable:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;
+ (id)readDrawablesFromParent:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;
+ (id)readDrawableFromNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;
+ (struct _xmlDoc *)vmlDocumentFromPart:(id)arg1;

@end

