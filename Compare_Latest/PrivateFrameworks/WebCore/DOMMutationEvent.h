/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMEvent.h>

@class DOMNode, NSString;

@interface DOMMutationEvent : DOMEvent
{
}

- (void)initMutationEvent:(id)arg1:(_Bool)arg2:(_Bool)arg3:(id)arg4:(id)arg5:(id)arg6:(id)arg7:(unsigned short)arg8;
- (void)initMutationEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 relatedNode:(id)arg4 prevValue:(id)arg5 newValue:(id)arg6 attrName:(id)arg7 attrChange:(unsigned short)arg8;
@property(readonly) unsigned short attrChange;
@property(readonly) NSString *attrName;
@property(readonly) NSString *newValue;
@property(readonly) NSString *prevValue;
@property(readonly) DOMNode *relatedNode;

@end

