//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationEndorserRapportDiscovery, AKAuthorizationRapportClient, AKAuthorizationSessionManager, AKClient, AKCredentialRequestContext, MISSING_TYPE, NSArray, NSString;
@protocol AKAuthorizationClientProtocol, AKAuthorizationDaemonServiceDelegate;

@interface AKAuthorizationDaemonService : NSObject
{
    struct os_unfair_lock_s _authorizationRealUserLock;	// 8 = 0x8
    id <AKAuthorizationClientProtocol> _clientProxy;	// 16 = 0x10
    AKAuthorizationSessionManager *_authSessionManager;	// 24 = 0x18
    NSString *_realUserVerificationResults;	// 32 = 0x20
    AKClient *_client;	// 40 = 0x28
    id <AKAuthorizationDaemonServiceDelegate> _delegate;	// 48 = 0x30
    AKAuthorizationRapportClient *_rapportClient;	// 56 = 0x38
    AKAuthorizationEndorserRapportDiscovery *_endorserRapportDiscovery;	// 64 = 0x40
    NSArray *_credentials;	// 72 = 0x48
    AKCredentialRequestContext *_originalRequestContext;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000853bb
@property(retain, nonatomic) AKCredentialRequestContext *originalRequestContext; // @synthesize originalRequestContext=_originalRequestContext;
@property(copy, nonatomic) NSArray *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) AKAuthorizationEndorserRapportDiscovery *endorserRapportDiscovery; // @synthesize endorserRapportDiscovery=_endorserRapportDiscovery;
@property(retain, nonatomic) AKAuthorizationRapportClient *rapportClient; // @synthesize rapportClient=_rapportClient;
@property(nonatomic) __weak id <AKAuthorizationDaemonServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (void)cancelAuthorizationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000084ef3
- (void)continueAuthorizationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000843b6
- (void)beginAuthorizationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000083b82
- (void)_processUserResponse:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000083651
- (void)_validateAndProcessUserResponse:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000083356
- (void)performAuthorizationWithContext:(id)arg1 withUserProvidedInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000083135
- (void)presentAuthorizationUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000082f81
- (id)authorizationContextWithRequest:(id)arg1 client:(id)arg2;	// IMP=0x0010000000082a29
- (id)authorizationContextHelperWithContext:(id)arg1 client:(id)arg2;	// IMP=0x001000000008299d
- (void)_completeAuthorizationWithServerResponse:(id)arg1 userResponse:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000823db
- (void)_performSRPAuthorizationForUserResponse:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000082125
- (void)_safePerformSRPWithUserResponse:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000081f71
- (void)_requestUserAuthorizationForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000081bfd
- (void)_fetchCredentialsForAssociatedDomains:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000081ab5
- (void)_fetchSafariCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000081934
- (void)_setupLoginChoicesForPresentationContext:(id)arg1;	// IMP=0x001000000008142c
- (long long)_credentialStateForRequestContext:(id)arg1;	// IMP=0x00100000000813b6
- (void)_prepareRequestContext:(id)arg1 forCredentialState:(long long)arg2;	// IMP=0x00100000000810eb
- (void)_getPresentationContextForRequestContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000807f1
- (void)storeAuthorization:(id)arg1 forProxiedRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000805bb
- (_Bool)_shouldStartSatoriVerificationForRequestContext:(id)arg1;	// IMP=0x001000000008054f
- (void)_initiateRapportAuthorizationWithRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008039d
- (void)_initiateAuthorizationWithRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000080224
- (_Bool)_verifyEntitlementsForRequest:(id)arg1;	// IMP=0x001000000007fe67
- (void)_performSilentRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007fb6d
- (void)_performRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007fa74
- (void)_determineUIAndPerformRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007f9a5
- (_Bool)_shouldEarlyReturnRequest:(id)arg1 forCredentialState:(long long)arg2;	// IMP=0x001000000007f922
- (void)_createAndPerformRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007f33d
- (id)_clientForContext:(id)arg1;	// IMP=0x001000000007f23f
- (void)getPresentationContextForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007ef57
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007ecda
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007e9f9
- (void)continueFetchingIconForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007e8d7
- (void)fetchPrimaryApplicationInformationForWebServiceWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007e6f0
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000007e2e2
- (void)revokeUpgradeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007e027
- (void)fetchAppleOwnedDomainSetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000007df93
- (void)fetchAppleIDAuthorizationURLSetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000007deff
- (void)startDiscoveryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000007dd86
- (MISSING_TYPE *)getCredentialStateForClientID:completion: /* Error: Ran out of types for this method. */;	// IMP=0x001000000007dcf3
- (void)getCredentialStateForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007daf6
- (void)performAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007d05e
- (void)dealloc;	// IMP=0x001000000007cff2
- (id)initWithClient:(id)arg1;	// IMP=0x001000000007ce91
- (id)init;	// IMP=0x001000000007ce66

@end
