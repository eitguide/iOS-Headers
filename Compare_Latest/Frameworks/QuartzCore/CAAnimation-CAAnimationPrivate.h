/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CAAnimation.h>

#import "CAPropertyInfo-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString;

@interface CAAnimation (CAAnimationPrivate) <NSMutableCopying, CAPropertyInfo>
+ (void)CAMLParserStartElement:(id)arg1;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (void *)CA_getterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (void *)CA_setterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (id)properties;
@property(copy) NSString *beginTimeMode;
@property double frameInterval;
@property(getter=isEnabled) _Bool enabled;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (void)setDefaultDuration:(double)arg1;
@end

