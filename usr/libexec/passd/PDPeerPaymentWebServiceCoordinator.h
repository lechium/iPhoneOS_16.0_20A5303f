//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSSet, NSString, PDAssertionManager, PDCardFileManager, PDCloudStoreNotificationCoordinator, PDDeviceRegistrationServiceCoordinator, PDFamilyCircleManager, PDPeerPaymentWebServiceAccountFetch, PDPeerPaymentWebServiceArchiver, PDPushNotificationManager, PDUserNotificationManager, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentPreferences, PKPeerPaymentWebService, PKSharingIDSManager;
@protocol OS_dispatch_queue, PDPeerPaymentWebServiceCoordinatorDataSource, PKTapToRadarDelegate;

@interface PDPeerPaymentWebServiceCoordinator : NSObject
{
    PDPushNotificationManager *_pushNotificationManager;	// 8 = 0x8
    PKSharingIDSManager *_sharingIDSManager;	// 16 = 0x10
    PDFamilyCircleManager *_familyCircleManager;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_sharedPeerPaymentWebServiceQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_replyQueue;	// 40 = 0x28
    PDPeerPaymentWebServiceArchiver *_archiver;	// 48 = 0x30
    PKPeerPaymentWebService *_sharedPeerPaymentWebService;	// 56 = 0x38
    PKPeerPaymentAccount *_account;	// 64 = 0x40
    PKPeerPaymentPreferences *_preferences;	// 72 = 0x48
    PKPeerPaymentAccount *_mockAccount;	// 80 = 0x50
    PDAssertionManager *_assertionManager;	// 88 = 0x58
    PDUserNotificationManager *_userNotificationManager;	// 96 = 0x60
    id <PDPeerPaymentWebServiceCoordinatorDataSource> _dataSource;	// 104 = 0x68
    PDCardFileManager *_passStore;	// 112 = 0x70
    NSMutableArray *_pendingPreferencesFetches;	// 120 = 0x78
    NSMutableArray *_queuedPendingPreferencesFetches;	// 128 = 0x80
    _Bool _isFetchingPreferences;	// 136 = 0x88
    id <PKTapToRadarDelegate> _tapToRadarDelegate;	// 144 = 0x90
    NSSet *_peerPaymentPushNotificationTopics;	// 152 = 0x98
    NSSet *_additionalPushNotificationTopics;	// 160 = 0xa0
    _Bool _unregistering;	// 168 = 0xa8
    NSMutableArray *_accountFetchRequests;	// 176 = 0xb0
    PDPeerPaymentWebServiceAccountFetch *_currentAccountFetchRequest;	// 184 = 0xb8
    struct os_unfair_lock_s _lockObservers;	// 192 = 0xc0
    struct os_unfair_lock_s _lockPushTopics;	// 196 = 0xc4
    NSHashTable *_observers;	// 200 = 0xc8
    PDCloudStoreNotificationCoordinator *_cloudStoreNotificationCoordinator;	// 208 = 0xd0
    PDDeviceRegistrationServiceCoordinator *_deviceRegistrationCoordinator;	// 216 = 0xd8
    PKPaymentWebService *_paymentWebService;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00200000003ef395
@property(retain, nonatomic) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property(retain, nonatomic) PDDeviceRegistrationServiceCoordinator *deviceRegistrationCoordinator; // @synthesize deviceRegistrationCoordinator=_deviceRegistrationCoordinator;
@property(retain, nonatomic) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator; // @synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator;
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000003ef138
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000003ef0d9
- (void)registerObserver:(id)arg1;	// IMP=0x00100000003ef07a
- (id)_mockAccountInitialState;	// IMP=0x00100000003ee942
- (unsigned long long)_peerPaymentErrorStateForRegistrationResponse:(id)arg1 error:(id)arg2;	// IMP=0x00100000003ee823
- (void)_updateSharedCacheWithAccount:(id)arg1;	// IMP=0x00100000003ee53f
- (void)updateSharedCache;	// IMP=0x00100000003ee529
- (void)_updateSharedCacheWithWebService:(id)arg1;	// IMP=0x00100000003ee492
- (void)_initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003ee3b5
- (void)_archiveSharedPeerPaymentWebServiceContext;	// IMP=0x00100000003ee2a2
- (void)_handleUpdatedAccount:(id)arg1 withOldAccount:(id)arg2;	// IMP=0x00100000003edf53
- (void)_completeUpdatingPreferences;	// IMP=0x00100000003edd4f
- (void)_writePreferences:(id)arg1 withError:(id)arg2;	// IMP=0x00100000003edb2d
- (void)_updatePreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003ed74c
- (void)_updateAccountWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003ed570
- (void)_postAccountChangedNotification;	// IMP=0x00100000003ed4bb
- (void)_postAssociatedAccountActiveNotificationIfNecessaryForNewAssociatedAccountInformation:(id)arg1 oldAssociatedAccountInformation:(id)arg2;	// IMP=0x00100000003ec6f8
- (void)_postGraduationNotificationIfNecessary;	// IMP=0x00100000003eba85
- (void)_queue_executeNextAccountFetchRequestIfPossible;	// IMP=0x00100000003e9e2d
- (void)_queue_addAccountFetchRequest:(id)arg1;	// IMP=0x00100000003e9b79
- (_Bool)_shouldAttemptBackgroundPeerPaymentPassDownload;	// IMP=0x00100000003e9b26
- (void)didReceiveRemoteRegistationResult:(unsigned long long)arg1 fromDestination:(id)arg2;	// IMP=0x00100000003e936c
- (void)_cancelPendingTransactionNotifications;	// IMP=0x00100000003e8ed6
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x00100000003e8b41
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x00100000003e8458
- (id)pushNotificationTopics;	// IMP=0x00100000003e831c
- (void)_updatePushTopics;	// IMP=0x00100000003e807e
- (void)cloudStoreNotificationCoordinator:(id)arg1 createdZoneWithName:(id)arg2 forContainerName:(id)arg3 scope:(long long)arg4;	// IMP=0x00100000003e7d44
- (void)_processStaleAccountFetchAfterTranactionScheduledTask:(id)arg1;	// IMP=0x00100000003e7943
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000003e7774
- (void)scheduleTaskToFetchStaleAccountIfNecessary:(_Bool)arg1 associatedAccountEndpoint:(_Bool)arg2;	// IMP=0x00100000003e74c6
- (void)_performPeerPaymentAssociatedAccountRemoteRegistrationRequestWithActivityIdentifier:(id)arg1 reason:(id)arg2;	// IMP=0x00100000003e6b72
- (id)_altDSIDFromAssociatedAccountRemoteRegistrationActivityIdentifier:(id)arg1;	// IMP=0x00100000003e6b01
- (id)_associatedAccountRemoteRegistrationActivityIdentifierForAltDSID:(id)arg1;	// IMP=0x00100000003e6ad5
- (void)_scheduleAssociatedAccountRemoteRegistrationActivityIfNecessaryForReason:(unsigned long long)arg1;	// IMP=0x00100000003e621e
- (void)_performPeerPaymentReregisterActivityForReason:(id)arg1;	// IMP=0x00100000003e5ec4
- (void)_schedulePeerPaymentReregisterActivityForReason:(id)arg1;	// IMP=0x00100000003e5db4
- (void)_performPeerPaymentPassDownloadActivity;	// IMP=0x00100000003e5ae4
- (void)_schedulePeerPaymentCoordinatorActivities;	// IMP=0x00100000003e59b7
- (void)remoteRegistrationRequest:(id)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003e58a7
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e57fb
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e574f
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e573d
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e5691
- (void)submitDeviceScoreIdentifiersForTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003e53a7
- (void);	// IMP=0x00100000003e524a
- (void)_downloadAssociatedPeerPaymentPassWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e3e8d
- (_Bool)_hasAssociatedPeerPaymentPassSetup;	// IMP=0x00100000003e3db7
- (_Bool)_hasAssociatedPeerPaymentPass;	// IMP=0x00100000003e3d3f
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e3ce3
- (_Bool)_peerPaymentPassExists;	// IMP=0x00100000003e3c19
- (void)handleMigratedAccount:(id)arg1;	// IMP=0x00100000003e3aa5
- (void)setPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003e37e0
- (void)deletePreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e371b
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e3637
- (void)updatePreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e3625
- (void)updateAccountAndAssociatedAccountsWithDiagnosticReasons:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003e355d
- (void)_updateAssociatedAccountsFromPush:(_Bool)arg1 diagnosticReasons:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003e3472
- (void)updateAssociatedAccountsWithDiagnosticReasons:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003e3458
- (void)_updateAccountFromPush:(_Bool)arg1 diagnosticReasons:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003e336d
- (void)updateAccountWithDiagnosticReasons:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003e3353
- (void)updateAccountAndAssociatedAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e32d0
- (void)updateAssociatedAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e324d
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e31ca
- (void)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e2d2d
- (void)_queue_processRegistrationResponse:(id)arg1 registrationError:(id)arg2 previouslyRegistered:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000003e200c
- (void)performDeviceRegistrationWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000003e1965
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(_Bool)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000003e159a
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000003e1572
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000003e1550
- (void)registerDeviceWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003e1534
- (void)registerDeviceWithForceReregister:(_Bool)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003e130f
- (void)handleCompanionSerialNumberChanged;	// IMP=0x00100000003e11d0
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e0f5d
- (void)identityVerificationResponseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e0e1b
- (void)receivedPeerPaymentMessage:(id)arg1;	// IMP=0x00100000003e0cff
- (void)handlePassLibraryChangedWithPassUniqueIdentifier:(id)arg1;	// IMP=0x00100000003e0c25
- (void)preferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e0adb
- (void)accountWithPreventingServerFetch:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003e06f0
- (void)updateSharedWebServiceContext:(id)arg1;	// IMP=0x00100000003e04ce
- (void)deleteSharedWebServiceWithDiagnosticReason:(id)arg1;	// IMP=0x00100000003dfddd
@property(readonly, nonatomic) PKPeerPaymentWebService *sharedPeerPaymentWebService;
- (void)dealloc;	// IMP=0x00100000003dfc51
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 userNotificationManager:(id)arg4 sharingIDSManager:(id)arg5 familyCircleManager:(id)arg6 dataSource:(id)arg7 passStore:(id)arg8 tapToRadarDelegate:(id)arg9;	// IMP=0x00100000003df22d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

