/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CUTPowerMonitorDelegate-Protocol.h"

@class NSDictionary, NSMapTable, NSNumber, NSRecursiveLock, NSString;

@interface CUTWiFiManager : NSObject <CUTPowerMonitorDelegate>
{
    int _linkToken;
    NSRecursiveLock *_lock;
    void *_wifiManager;
    void *_wifiDevice;
    void *_currentNetwork;
    void *_dynamicStore;
    NSMapTable *_delegateMap;
    NSDictionary *_lastWiFiPowerInfo;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *lastWiFiPowerInfo; // @synthesize lastWiFiPowerInfo=_lastWiFiPowerInfo;
@property(retain, nonatomic) NSMapTable *delegateMap; // @synthesize delegateMap=_delegateMap;
@property(nonatomic) int linkToken; // @synthesize linkToken=_linkToken;
@property(nonatomic) void *dynamicStore; // @synthesize dynamicStore=_dynamicStore;
@property(nonatomic) void *currentNetwork; // @synthesize currentNetwork=_currentNetwork;
@property(nonatomic) void *wifiDevice; // @synthesize wifiDevice=_wifiDevice;
@property(nonatomic) void *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) _Bool isWiFiCaptive;
- (_Bool)_isPrimaryCellular;
@property(readonly, nonatomic) NSString *currentSSID;
@property(readonly, nonatomic) NSDictionary *currentWiFiNetworkPowerUsage;
- (double)_wifiMeasurementErrorForInterval:(double)arg1;
- (void)_performPowerReading;
- (void)_setCurrentNetwork:(struct __WiFiNetwork *)arg1;
- (void)_handlePotentialDeviceChange:(struct __WiFiDeviceClient *)arg1;
- (void)_handleDeviceAttachedCallback;
- (id)_ssidFromNetwork:(struct __WiFiNetwork *)arg1;
- (void)_performCurrentNetworkBlock:(id)arg1;
- (void)_performCurrentNetworkBlock:(id)arg1 withDevice:(void)arg2;
- (void)_performDeviceBlock:(id)arg1;
- (void)_performDeviceBlock:(id)arg1 useCache:(void)arg2;
@property(readonly, nonatomic) _Bool isWiFiEnabled;
@property(readonly, nonatomic) _Bool isWiFiAssociated;
@property(readonly, nonatomic) NSNumber *wiFiScaledRate;
@property(readonly, nonatomic) NSNumber *wiFiScaledRSSI;
@property(readonly, nonatomic) NSNumber *wiFiSignalStrength;
- (_Bool)willTryToSearchForWiFiNetwork;
- (_Bool)willTryToAutoAssociateWiFiNetwork;
@property(readonly, nonatomic) _Bool isHostingWiFiHotSpot;
- (void)_createDynamicStore;
- (void)_createWiFiManager;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

