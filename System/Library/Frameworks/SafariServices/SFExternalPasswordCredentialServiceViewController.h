//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _ASPasswordCredentialAuthenticationViewController, _SFAuthenticationContext;

__attribute__((visibility("hidden")))
@interface SFExternalPasswordCredentialServiceViewController
{
    _SFAuthenticationContext *_authenticationContext;	// 8 = 0x8
    _ASPasswordCredentialAuthenticationViewController *_extensionController;	// 16 = 0x10
    long long _completionAction;	// 24 = 0x18
    CDUnknownBlockType _getCredentialCompletion;	// 32 = 0x20
}

+ (id)_remoteViewControllerInterface;	// IMP=0x001000000013fac8
+ (id)_exportedInterface;	// IMP=0x001000000013f9b6
- (void).cxx_destruct;	// IMP=0x0000000000140c50
- (void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000140632
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;	// IMP=0x00000000001405a0
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;	// IMP=0x000000000014059a
- (void)_finishRequestToReturnCredential:(id)arg1 extensionShowedUI:(_Bool)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001404fd
- (void)getCredentialForCredentialIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000014017f
- (void)_finishRequestToAutoFillCredential:(id)arg1 extensionShowedUI:(_Bool)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000013fd04
- (void)autoFillWithCredentialIdentity:(id)arg1;	// IMP=0x000000000013fb73
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000013fae1
- (_Bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;	// IMP=0x000000000013f9ae
- (_Bool)contextShouldAllowPasscodeFallback:(id)arg1;	// IMP=0x000000000013f9a6
- (_Bool)contextRequiresSessionBasedAuthentication:(id)arg1;	// IMP=0x000000000013f99e
- (_Bool)displayMessageAsTitleForContext:(id)arg1;	// IMP=0x000000000013f996
- (id)passcodePromptForContext:(id)arg1;	// IMP=0x000000000013f97d
- (id)authenticationMessageForContext:(id)arg1;	// IMP=0x000000000013f964
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;	// IMP=0x000000000013f95c
- (id)_authenticationContext;	// IMP=0x000000000013f8fe
- (void)_dismiss;	// IMP=0x000000000013f87b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

