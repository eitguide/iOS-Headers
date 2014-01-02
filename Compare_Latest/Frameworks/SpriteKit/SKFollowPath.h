/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKAction.h>

// Not exported
@interface SKFollowPath : SKAction
{
    struct SKCFollowPath *_mycaction;
    struct CGPath *_cgPath;
}

+ (id)followPath:(struct CGPath *)arg1 asOffset:(_Bool)arg2 orientToPath:(_Bool)arg3 duration:(double)arg4;
+ (id)followPath:(struct CGPath *)arg1 duration:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)reversedAction;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

