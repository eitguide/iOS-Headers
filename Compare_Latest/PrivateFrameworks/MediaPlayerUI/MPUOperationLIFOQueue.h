/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperationQueue.h"

@interface MPUOperationLIFOQueue : NSOperationQueue
{
}

- (void)_addLIFODependencyToOperations:(id)arg1;
- (void)setMaxConcurrentOperationCount:(long long)arg1;
- (void)addOperationWithBlock:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)addOperation:(id)arg1;
- (id)init;

@end

