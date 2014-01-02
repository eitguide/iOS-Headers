/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol AFSettingsService <NSObject>
- (oneway void)setLanguage:(id)arg1 withCompletion:(id)arg2;
- (oneway void)setOutputVoice:(id)arg1 withCompletion:(id)arg2;
- (oneway void)getAvailableVoices:(id)arg1;
- (oneway void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(_Bool)arg2 reply:(id)arg3;
- (oneway void)barrierWithReply:(id)arg1;
- (oneway void)_killDaemon;
- (oneway void)setDictationEnabled:(_Bool)arg1;
- (oneway void)setAssistantEnabled:(_Bool)arg1;
- (oneway void)setActiveAccountIdentifier:(id)arg1;
- (oneway void)deleteAccountWithIdentifier:(id)arg1;
- (oneway void)saveAccountWithMessageDictionary:(id)arg1 setActive:(_Bool)arg2;
- (oneway void)retrieveAccountMessageDictionariesWithReply:(id)arg1;
- (oneway void)fetchSupportedLanguagesWithReply:(id)arg1;
@end

