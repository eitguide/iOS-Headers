/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CPDistributedMessagingCallout : NSObject
{
    id _target;
    SEL _selector;
    _Bool _returnsVoid;
    _Bool _returnsVoidIsValid;
}

@property(readonly, nonatomic) _Bool returnsVoid; // @synthesize returnsVoid=_returnsVoid;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

