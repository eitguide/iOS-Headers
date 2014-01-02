/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CTMessageAddress-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

// Not exported
@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress>
{
    NSString *_address;
}

+ (id)emailAddress:(id)arg1;
@property(readonly) NSString *address; // @synthesize address=_address;
- (id)canonicalFormat;
- (id)encodedString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithAddress:(id)arg1;

@end

