/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFileHandle, NSString, TSMTraceController;

// Not exported
@interface TSMTraceBuffer : NSObject
{
    NSString *mTag;
    long long mBufferID;
    long long mBufferSize;
    _Bool mSynchronizedAccess;
    NSFileHandle *mFileHandle;
    TSMTraceController *mController;
    long long mCurrentIndex;
    struct __CFData *mData;
    _Bool mActive;
    unsigned int mFilters[256];
    struct _opaque_pthread_mutex_t mLock;
}

+ (id)bufferWithTag:(id)arg1 size:(long long)arg2;
@property(retain, nonatomic) TSMTraceController *controller; // @synthesize controller=mController;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=mFileHandle;
@property(readonly, nonatomic) _Bool active; // @synthesize active=mActive;
@property(nonatomic) _Bool synchronizedAccess; // @synthesize synchronizedAccess=mSynchronizedAccess;
@property(readonly, nonatomic) long long bufferSize; // @synthesize bufferSize=mBufferSize;
@property(readonly, nonatomic) long long bufferID; // @synthesize bufferID=mBufferID;
@property(readonly, nonatomic) NSString *tag; // @synthesize tag=mTag;
- (void)setBufferID:(long long)arg1;
- (void)flush;
- (void)start;
- (void)stop;
- (void)writeTraceRecord:(struct TSMTraceRecord_s *)arg1 withFilter:(unsigned int)arg2;
- (void)setFilter:(unsigned int)arg1 forModule:(int)arg2;
- (unsigned int)filterForModule:(int)arg1;
@property(readonly, nonatomic) unsigned int *filters;
- (void)dealloc;
- (id)initWithTag:(id)arg1 size:(long long)arg2;

@end

