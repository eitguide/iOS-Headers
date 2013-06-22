/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDictionary, NSURL;

@interface AVAudioPlayer : NSObject
{
    void *_impl;
}

- (void)privCommonCleanup;
- (void)finalize;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (BOOL)prepareToPlay;
- (BOOL)play;
- (BOOL)playAtTime:(double)arg1;
- (void)pause;
- (void)stop;
@property(readonly, getter=isPlaying) BOOL playing; // @dynamic playing;
@property(readonly) NSURL *url; // @dynamic url;
@property(readonly) NSData *data; // @dynamic data;
@property id <AVAudioPlayerDelegate> delegate; // @dynamic delegate;
@property(readonly) NSDictionary *settings; // @dynamic settings;
@property(readonly) double duration;
@property float volume; // @dynamic volume;
@property BOOL enableRate; // @dynamic enableRate;
@property float rate; // @dynamic rate;
@property float pan; // @dynamic pan;
@property(readonly) unsigned int numberOfChannels; // @dynamic numberOfChannels;
@property double currentTime; // @dynamic currentTime;
@property(readonly) double deviceCurrentTime; // @dynamic deviceCurrentTime;
@property int numberOfLoops; // @dynamic numberOfLoops;
@property(getter=isMeteringEnabled) BOOL meteringEnabled; // @dynamic meteringEnabled;
- (void)updateMeters;
- (float)peakPowerForChannel:(unsigned int)arg1;
- (float)averagePowerForChannel:(unsigned int)arg1;

@end
