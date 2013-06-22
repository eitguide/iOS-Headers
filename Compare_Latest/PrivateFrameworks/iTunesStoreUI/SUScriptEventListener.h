/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, WebScriptObject;

@interface SUScriptEventListener : NSObject
{
    WebScriptObject *_callback;
    NSString *_name;
    BOOL _useCapture;
}

@property(nonatomic) BOOL shouldUseCapture; // @synthesize shouldUseCapture=_useCapture;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) WebScriptObject *callback; // @synthesize callback=_callback;
- (void)dealloc;

@end
