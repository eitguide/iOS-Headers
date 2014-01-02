/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface OpenURLTarget : NSObject
{
    unsigned int _applicationState;
    struct {
        NSString *clientIdentifier;
        NSString *normalScheme;
        NSString *secureScheme;
    } _targetData;
    long long _targetIndex;
}

- (id)description;
- (id)copyURLForURL:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithTargetIdentifier:(id)arg1;
- (id)init;

@end

