//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, PDAppletSubcredentialManager, PDCarKeySharingManagementService, PDDatabaseManager, PDGeneralSharingManagementService, PDHomeShareManagementService, PDPaymentWebServiceCoordinator, PDPushNotificationManager, PDSharingChannelMonitor, PDSharingRelayServerService, PDSharingStatefulProvisioningManager, PDSharingUserCommunicationManager;
@protocol OS_dispatch_queue, PDSharingManagerDelegate;

@interface PDSharingManager : NSObject
{
    PDSharingChannelMonitor *_monitor;	// 8 = 0x8
    PDSharingStatefulProvisioningManager *_statefulProvisioningManager;	// 16 = 0x10
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 24 = 0x18
    PDDatabaseManager *_databaseManager;	// 32 = 0x20
    PDSharingUserCommunicationManager *_userCommunicationManager;	// 40 = 0x28
    PDPushNotificationManager *_pushNotificationManager;	// 48 = 0x30
    PDAppletSubcredentialManager *_subcredentialManager;	// 56 = 0x38
    id <PDSharingManagerDelegate> _delegate;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_replyQueue;	// 80 = 0x50
    PDSharingRelayServerService *_relayService;	// 88 = 0x58
    PDGeneralSharingManagementService *_sharingManagementService;	// 96 = 0x60
    PDHomeShareManagementService *_homeManagementService;	// 104 = 0x68
    PDCarKeySharingManagementService *_carKeyManagementService;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000d8706
- (void)processCLICommands:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d0b77
- (id)channelForEndpoint:(id)arg1;	// IMP=0x00100000000d0866
- (void)userDidDismissPendingShareActivationForShareIdentifier:(id)arg1;	// IMP=0x00100000000d0763
- (id)pendingShareActivationForShareIdentifier:(id)arg1;	// IMP=0x00100000000d062e
- (id)pendingShareActivations;	// IMP=0x00100000000d02d5
- (void)provisioningOperationsDidUpdate;	// IMP=0x00100000000d02bf
- (void)finishedStatefulProvisioningAttemptWithSuccess:(_Bool)arg1 operation:(id)arg2 share:(id)arg3;	// IMP=0x00100000000d004a
- (void)endpointWasUpdated:(id)arg1 oldTransportIdentifier:(id)arg2;	// IMP=0x00100000000cff45
- (void)endpointWasRemotelyTerminated:(id)arg1;	// IMP=0x00100000000cfdc9
- (void)handleOutstandingShareMessage:(id)arg1 endpoint:(id)arg2;	// IMP=0x00100000000cf88a
- (void)revokePendingCredentialsForReaderIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cf34f
- (void)pendingCredentialsBeingProvisioned:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cf043
- (void)pendingShareActivationForShareIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ceb03
- (void)didReceiveActivationCodeFailureForCredentialIdentifier:(id)arg1 attemptsRemaining:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ce8d4
- (void)acceptCarKeyShareForMessage:(id)arg1 activationCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000cd6be
- (void)sendSharingMessageTo:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000cd0e9
- (void)passUpdated:(id)arg1 oldPass:(id)arg2 oldShares:(id)arg3 oldEntitlements:(id)arg4;	// IMP=0x00100000000cce60
- (void)passUpdated:(id)arg1 oldShares:(id)arg2;	// IMP=0x00100000000cce3a
- (void)passAdded:(id)arg1;	// IMP=0x00100000000cccfa
- (void)displayableEntitlementsForPassIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cc69d
- (void)displayableSharesForPassIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cc1a4
- (id)entitlementsForPassIdentifier:(id)arg1;	// IMP=0x00100000000cc063
- (_Bool)hasSharesForPassIdentifier:(id)arg1;	// IMP=0x00100000000cbf61
- (void)sharesForPassIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cbddf
- (_Bool)hasActiveExternallySharedPasses;	// IMP=0x00100000000cbd21
- (void)createSingleUseShareURLWithMessage:(id)arg1 timeToLive:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000cb869
- (void)revokeShareForPassIdentifier:(id)arg1 share:(id)arg2 shouldCascade:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000cb1d4
- (void)updateShareForPassIdentifier:(id)arg1 share:(id)arg2 authorization:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000cab87
- (void)createShareForPartialShareInvitation:(id)arg1 authorization:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c875a
- (void)prewarmCreateShareForPassIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c8262
- (void)deleteSharingMessage:(id)arg1;	// IMP=0x00100000000c7f35
- (MISSING_TYPE *)cacheSharingMessageFromMailboxAddress:message: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000c7c67
- (void)relinquishInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c791c
- (void)retrieveShareInvitationForMailboxAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c6c2d
- (void)checkInvitationStatusForMailboxAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c6a11
- (void)start;	// IMP=0x00100000000c69fb
- (id)initWithWebServiceCoordinator:(id)arg1 databaseManager:(id)arg2 notificationManager:(id)arg3 pushNotificationManager:(id)arg4 cardFileManager:(id)arg5 subcredentialManager:(id)arg6 applicationMessageManager:(id)arg7 delegate:(id)arg8;	// IMP=0x00100000000c6721
- (id)init;	// IMP=0x00100000000c6713

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

