/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Social/SLMicroBlogUserRecord.h>

#import "NSSecureCoding-Protocol.h"

@class NSString, NSURL;

@interface SLTwitterUserRecord : SLMicroBlogUserRecord <NSSecureCoding>
{
    NSString *_id_str;
    NSURL *_objectID;
}

+ (_Bool)supportsSecureCoding;
+ (id)userRecordWithScreenName:(id)arg1;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;
@property(retain, nonatomic) NSURL *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSString *id_str; // @synthesize id_str=_id_str;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setValuesWithUserDictionary:(id)arg1;

@end

