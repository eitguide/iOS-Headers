//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface PKPaymentMessage : NSObject <NSSecureCoding>
{
    BOOL _expiresOnNextTransaction;
    BOOL _allowDeepLink;
    NSString *_identifier;
    NSString *_content;
    NSDate *_messageDate;
    NSDate *_expirationDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)paymentMessageWithDictionary:(id)arg1;
@property(nonatomic) BOOL allowDeepLink; // @synthesize allowDeepLink=_allowDeepLink;
@property(nonatomic) BOOL expiresOnNextTransaction; // @synthesize expiresOnNextTransaction=_expiresOnNextTransaction;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSDate *messageDate; // @synthesize messageDate=_messageDate;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToPaymentMessage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)init;

@end
