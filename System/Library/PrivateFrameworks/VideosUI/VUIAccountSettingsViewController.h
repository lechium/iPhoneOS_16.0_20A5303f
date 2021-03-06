//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSString, NSURL, PSSpecifier, UITextField;

__attribute__((visibility("hidden")))
@interface VUIAccountSettingsViewController : PSListController
{
    _Bool _authenticationInProgress;	// 192 = 0xc0
    long long _watchListAppsCount;	// 200 = 0xc8
    PSSpecifier *_credentialsAppleIDSpecifier;	// 208 = 0xd0
    PSSpecifier *_credentialsPasswordSpecifier;	// 216 = 0xd8
    PSSpecifier *_signInSpecifier;	// 224 = 0xe0
    PSSpecifier *_createAccountSpecifier;	// 232 = 0xe8
    PSSpecifier *_syncMySportsSpecifier;	// 240 = 0xf0
    UITextField *_credentialsAppleIDTextField;	// 248 = 0xf8
    UITextField *_credentialsPasswordTextField;	// 256 = 0x100
    NSURL *_addFundsUrl;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00000000000ca62f
@property(retain, nonatomic) NSURL *addFundsUrl; // @synthesize addFundsUrl=_addFundsUrl;
@property(retain, nonatomic) UITextField *credentialsPasswordTextField; // @synthesize credentialsPasswordTextField=_credentialsPasswordTextField;
@property(retain, nonatomic) UITextField *credentialsAppleIDTextField; // @synthesize credentialsAppleIDTextField=_credentialsAppleIDTextField;
@property(retain, nonatomic) PSSpecifier *syncMySportsSpecifier; // @synthesize syncMySportsSpecifier=_syncMySportsSpecifier;
@property(retain, nonatomic) PSSpecifier *createAccountSpecifier; // @synthesize createAccountSpecifier=_createAccountSpecifier;
@property(retain, nonatomic) PSSpecifier *signInSpecifier; // @synthesize signInSpecifier=_signInSpecifier;
@property(retain, nonatomic) PSSpecifier *credentialsPasswordSpecifier; // @synthesize credentialsPasswordSpecifier=_credentialsPasswordSpecifier;
@property(retain, nonatomic) PSSpecifier *credentialsAppleIDSpecifier; // @synthesize credentialsAppleIDSpecifier=_credentialsAppleIDSpecifier;
@property(nonatomic) long long watchListAppsCount; // @synthesize watchListAppsCount=_watchListAppsCount;
@property(nonatomic) _Bool authenticationInProgress; // @synthesize authenticationInProgress=_authenticationInProgress;
- (void)_dismissViewController;	// IMP=0x00000000000ca245
- (void)_handleAccountSettingsEventWithUrl:(id)arg1 amsBagKey:(id)arg2 useAMSWebView:(_Bool)arg3;	// IMP=0x00000000000ca0f2
- (long long)_alertStyle;	// IMP=0x00000000000ca06e
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000ca049
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000000000c9dc4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000c9b18
- (void)_recordDialogClick:(id)arg1;	// IMP=0x00000000000c9a4c
- (id)_dialogMetricsData;	// IMP=0x00000000000c99c1
- (id)_getConnectedAppsCountString;	// IMP=0x00000000000c9991
- (void)_checkExternalLinksWithDispatchGroup:(id)arg1;	// IMP=0x00000000000c953e
- (void)_checkConnectedAppsWithDispatchGroup:(id)arg1;	// IMP=0x00000000000c920d
- (void)_loadDynamicIdentifiers;	// IMP=0x00000000000c910a
- (void)_setSyncMySportsEnabled:(id)arg1;	// IMP=0x00000000000c8efc
- (id)_syncMySportsEnabled;	// IMP=0x00000000000c8d42
- (void)_syncMySportsSettingDidChange:(id)arg1;	// IMP=0x00000000000c8c76
- (void)_openiForgotAppleURL;	// IMP=0x00000000000c8b40
- (void)_clearPlayHistory:(id)arg1;	// IMP=0x00000000000c8622
- (void)_didSelectSpecifier:(id)arg1;	// IMP=0x00000000000c7621
- (id)_createAccountSpecifiers;	// IMP=0x00000000000c73d2
- (id)_signInSpecifiers;	// IMP=0x00000000000c7069
- (id)_credentialsSpecifiers;	// IMP=0x00000000000c6cf3
- (id)_signOutSpecifiers;	// IMP=0x00000000000c6b38
- (void)_showPrivacySheet:(id)arg1;	// IMP=0x00000000000c6ad1
- (void)_addPrivacyFooterToGroup:(id)arg1;	// IMP=0x00000000000c6876
- (id)_mySportsSpecifiers;	// IMP=0x00000000000c6637
- (id)_clearHistorySpecifiers;	// IMP=0x00000000000c643a
- (id)_externalSpecifiers;	// IMP=0x00000000000c5fa1
- (id)_sourcesSpecifiers;	// IMP=0x00000000000c5df4
- (id)_accountSpecifiers;	// IMP=0x00000000000c5a00
- (void)viewDidLoad;	// IMP=0x00000000000c5639
- (id)specifiers;	// IMP=0x00000000000c5411
- (id)init;	// IMP=0x00000000000c5363

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

