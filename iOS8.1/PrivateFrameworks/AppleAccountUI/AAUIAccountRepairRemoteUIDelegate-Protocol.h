//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AAUIAccountRepairRemoteUI, ACAccount;

@protocol AAUIAccountRepairRemoteUIDelegate <NSObject>
- (void)accountRepairRemoteUI:(AAUIAccountRepairRemoteUI *)arg1 account:(ACAccount *)arg2 didFinishWithSuccess:(BOOL)arg3;

@optional
- (void)accountRepairRemoteUIWillDismiss:(AAUIAccountRepairRemoteUI *)arg1;
- (void)accountRepairRemoteUIWillAppear:(AAUIAccountRepairRemoteUI *)arg1;
@end
