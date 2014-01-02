/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptViewController;

@interface SUScriptSection : SUScriptObject
{
    NSString *_badgeValue;
    NSString *_identifier;
    _Bool _transient;
    SUScriptViewController *_viewController;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) SUScriptViewController *viewController;
@property(readonly) _Bool transient;
@property(retain) NSString *badgeValue;
@property(readonly) NSString *identifier;
- (id)_className;
- (void)setBadgeValue:(id)arg1 animated:(_Bool)arg2 blink:(_Bool)arg3;
- (void)dealloc;
- (id)initWithNativeSection:(id)arg1;

@end

