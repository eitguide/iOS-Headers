/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AirPlayControllerAsync-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface AirPlayControllerServer : NSObject <NSXPCListenerDelegate, AirPlayControllerAsync>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serviceName;
    NSXPCListener *_xpcListener;
    id _performCommandBlock;
    id _copyPropertyBlock;
    id _setPropertyBlock;
}

@property(copy, nonatomic) id setPropertyBlock; // @synthesize setPropertyBlock=_setPropertyBlock;
@property(copy, nonatomic) id copyPropertyBlock; // @synthesize copyPropertyBlock=_copyPropertyBlock;
@property(copy, nonatomic) id performCommandBlock; // @synthesize performCommandBlock=_performCommandBlock;
@property(nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_queue;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(id)arg4;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(id)arg3;
- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(id)arg4;
- (void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(id)arg4;
- (void)_connectionInvalidated:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startWithXPCName:(id)arg1;
- (void)invalidate;
- (void)dealloc;

@end

