/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CommunicationsSetupUI/CNFRegAuthorizedAccountWebViewController.h>

@class IMAccount;

@interface CNFRegSecureAccountWebViewController : CNFRegAuthorizedAccountWebViewController
{
    IMAccount *_account;
    _Bool _triedGettingNewCredentials;
    _Bool _gotNewCredential;
    unsigned long long _signinFailureCount;
}

@property(retain, nonatomic) IMAccount *account; // @synthesize account=_account;
- (void)_setupAccountHandlers;
- (id)authTokenHeaderValue;
- (id)authIdHeaderValue;
- (void)_showForgotPasswordAlert;
- (void)_incrementSigninFailureCount;
- (void)_resetSigninFailureCount;
- (void)_launchForgotPasswordUrl;
- (void)_showRequestPasswordAlert;
- (void)_showBadPasswordAlert;
- (void)_showRegistrationFailureWithError:(id)arg1;
- (void)_handleTimeout;
- (void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithRegController:(id)arg1 account:(id)arg2;

@end

