/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKConversation.h>

@interface CKConversation (Content_Utilities)
+ (double)_iMessage_maxTrimDurationForMediaType:(int)arg1;
+ (unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(_Bool)arg1;
+ (id)_iMessage_localizedErrorForReason:(long long)arg1;
+ (_Bool)_iMessage_canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id *)arg3;
+ (_Bool)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1;
+ (_Bool)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1 errorCode:(long long *)arg2;
+ (long long)_iMessage_maxAttachmentCount;
+ (_Bool)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (_Bool)_iMessage_canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
- (_Bool)_iMessage_canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(_Bool)arg3;
- (_Bool)_iMessage_supportsCharacterCountForAddresses:(id)arg1;
@end

