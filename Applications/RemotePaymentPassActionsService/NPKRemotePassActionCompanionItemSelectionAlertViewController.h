//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NPKRemotePassActionCompanionItemSelectionViewController, NSString, UINavigationController;

@interface NPKRemotePassActionCompanionItemSelectionAlertViewController
{
    NPKRemotePassActionCompanionItemSelectionViewController *_selectItemViewController;	// 8 = 0x8
    UINavigationController *_navigationController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000077f7
- (void)selectItemViewController:(id)arg1 didFinishWithRenewalAmount:(id)arg2 serviceProviderData:(id)arg3 forRequestIdentifier:(id)arg4;	// IMP=0x0010000000007662
- (void)selectItemViewController:(id)arg1 didCancelForRequestIdentifier:(id)arg2;	// IMP=0x001000000000751e
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000073c3
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006f23
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000006ec7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
