/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, SBApplication;

@interface SBProxyRemoteView : UIView
{
    id _delegate;
    SBApplication *_app;
    NSString *_remoteViewIdentifier;
    _Bool _remoteViewOpaque;
}

+ (Class)layerClass;
@property(nonatomic) _Bool remoteViewOpaque; // @synthesize remoteViewOpaque=_remoteViewOpaque;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *remoteViewIdentifier; // @synthesize remoteViewIdentifier=_remoteViewIdentifier;
- (void)disconnect;
- (void)noteConnectionLost;
- (void)_setIsConnected:(_Bool)arg1;
- (void)connectToContextID:(unsigned int)arg1 forIdentifier:(id)arg2 application:(id)arg3;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)init;

@end

