//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKAuthorizationPresentationContext, AKAuthorizationViewController, NSString;
@protocol AKAuthorizationPresenterHostProtocol;

@interface AKAuthorizationRemoteViewController
{
    AKAuthorizationPresentationContext *_presentationContext;	// 8 = 0x8
    AKAuthorizationViewController *_authorizationViewController;	// 16 = 0x10
    id <AKAuthorizationPresenterHostProtocol> _hostProxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000026d9
@property(retain, nonatomic) id <AKAuthorizationPresenterHostProtocol> hostProxy; // @synthesize hostProxy=_hostProxy;
@property(retain, nonatomic) AKAuthorizationViewController *authorizationViewController; // @synthesize authorizationViewController=_authorizationViewController;
@property(retain, nonatomic) AKAuthorizationPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
- (void)_main_dismissAndExit;	// IMP=0x0010000000002207
- (void)_didCompleteWithError:(id)arg1;	// IMP=0x0010000000001f93
- (void)_callCompletionWithAuthorization:(id)arg1 error:(id)arg2;	// IMP=0x0010000000001f05
- (void)authorizationViewController:(id)arg1 didRequestIconForRequestContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000001ee5
- (void)authorizationViewController:(id)arg1 didRequestAuthorizationWithUserProvidedInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000001e01
- (void)authorizationViewController:(id)arg1 didCompleteWithAuthorization:(id)arg2 error:(id)arg3;	// IMP=0x0010000000001cef
- (void)handleCancellation:(id)arg1;	// IMP=0x0010000000001c93
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001a72
- (id)remoteObjectInterface;	// IMP=0x0010000000001a59
- (void)setUpHostProxy;	// IMP=0x001000000000188a
- (void)_showTiburonFlow;	// IMP=0x0010000000001446
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000013f0
- (id)initWithPresentationContext:(id)arg1;	// IMP=0x0010000000001382

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
