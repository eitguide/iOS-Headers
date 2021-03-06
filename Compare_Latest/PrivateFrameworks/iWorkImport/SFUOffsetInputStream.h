//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFUInputStream.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUOffsetInputStream : NSObject <SFUInputStream>
{
    id <SFUInputStream> mInputStream;
    long long mInitialOffset;
}

- (id)closeLocalStream;
- (void)close;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (long long)offset;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 initialOffset:(long long)arg2;
- (id)initWithInputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

