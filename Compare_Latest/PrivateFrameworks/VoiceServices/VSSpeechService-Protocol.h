/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol VSSpeechService <NSObject>
- (oneway void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(_Bool)arg4 reply:(id)arg5;
- (oneway void)getAutoDownloadedVoiceAssets:(id)arg1;
- (oneway void)setAutoDownloadedVoiceAssets:(id)arg1;
- (oneway void)downloadVoiceAsset:(id)arg1 progress:(id)arg2 completion:(id)arg3;
- (oneway void)getLocalCustomVoicesReply:(id)arg1;
- (oneway void)getCustomVoicesReply:(id)arg1;
- (oneway void)getSpeechIsActiveForConnectionReply:(id)arg1;
- (oneway void)getSpeechIsActiveReply:(id)arg1;
- (oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(id)arg3;
- (oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(id)arg2;
- (oneway void)stopSpeechRequestAtMark:(long long)arg1;
- (oneway void)continueSpeechRequest;
- (oneway void)pauseSpeechRequestAtMark:(long long)arg1;
- (oneway void)startSpeechRequest:(id)arg1;
@end

