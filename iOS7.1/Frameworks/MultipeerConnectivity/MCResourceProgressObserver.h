//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCSession, NSProgress, NSString;

@interface MCResourceProgressObserver : NSObject
{
    NSString *_name;
    MCSession *_session;
    NSProgress *_progress;
    CDUnknownBlockType _cancelHandler;
}

@property(nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) MCSession *session; // @synthesize session=_session;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)invalidate;
- (id)initWithName:(id)arg1 session:(id)arg2 progress:(id)arg3 cancelHandler:(CDUnknownBlockType)arg4;

@end
