/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetWriterHelper, AVAssetWriterInternal, NSArray, NSError, NSString, NSURL;

@interface AVAssetWriter : NSObject
{
    AVAssetWriterInternal *_internal;
}

+ (id)_errorForOSStatus:(int)arg1;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingStatus;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id *)arg3;
+ (void)initialize;
- (void)_transitionToFailedStatusWithError:(id)arg1;
- (void)finishWritingWithCompletionHandler:(id)arg1;
- (_Bool)finishWriting;
- (void)cancelWriting;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)startWriting;
@property(copy, nonatomic) NSArray *metadata;
- (void)addInputGroup:(id)arg1;
- (_Bool)canAddInputGroup:(id)arg1;
- (void)addInput:(id)arg1;
- (_Bool)canAddInput:(id)arg1;
- (_Bool)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (id)inputGroups;
@property(readonly, nonatomic) NSArray *inputs;
- (void)setPreferredRate:(float)arg1;
- (float)preferredRate;
- (void)setPreferredVolume:(float)arg1;
- (float)preferredVolume;
- (void)setPreferredTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)preferredTransform;
- (void)setMovieTimeScale:(int)arg1;
- (int)movieTimeScale;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse;
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)movieFragmentInterval;
@property(readonly) NSError *error;
@property(readonly) long long status;
@property(readonly, nonatomic) NSArray *availableMediaTypes;
@property(readonly, nonatomic) NSString *outputFileType;
@property(readonly, nonatomic) NSURL *outputURL;
- (_Bool)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(id)arg3;
- (_Bool)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2;
@property(readonly, getter=_helper) AVAssetWriterHelper *helper;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id *)arg3;
- (id)init;

@end

