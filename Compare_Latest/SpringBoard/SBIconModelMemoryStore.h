/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBIconModelStore-Protocol.h"

@class NSDictionary;

@interface SBIconModelMemoryStore : NSObject <SBIconModelStore>
{
    NSDictionary *_currentState;
    NSDictionary *_desiredState;
}

@property(retain, nonatomic) NSDictionary *desiredState; // @synthesize desiredState=_desiredState;
@property(retain, nonatomic) NSDictionary *currentState; // @synthesize currentState=_currentState;
- (id)loadDesiredIconState:(id *)arg1;
- (id)loadCurrentIconState:(id *)arg1;
- (_Bool)deleteDesiredIconState:(id *)arg1;
- (_Bool)deleteCurrentIconState:(id *)arg1;
- (_Bool)saveDesiredIconState:(id)arg1 error:(id *)arg2;
- (_Bool)saveCurrentIconState:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithCurrentState:(id)arg1 desiredState:(id)arg2;

@end

