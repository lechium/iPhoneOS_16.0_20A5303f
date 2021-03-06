//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable, NSSet, NSString, PDAppletSubcredentialManager, PDAssertionManager, PDDatabaseManager, PDNotificationStreamManager, PDRemoteInterfacePresenter, PKSecureElement;
@protocol OS_dispatch_queue, PKTapToRadarDelegate;

@interface PDExpressPassManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDAssertionManager *_assertionManager;	// 16 = 0x10
    PKSecureElement *_secureElement;	// 24 = 0x18
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 32 = 0x20
    PDNotificationStreamManager *_notificationStreamManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_accessQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_replyQueue;	// 56 = 0x38
    _Atomic _Bool _setup;	// 64 = 0x40
    _Bool _expressModesEnableable;	// 65 = 0x41
    NSDictionary *_expressState;	// 72 = 0x48
    struct os_unfair_lock_s _lock;	// 80 = 0x50
    long long _outstandingExpressType;	// 88 = 0x58
    _Bool _outstandingExpressTypeProcessing;	// 96 = 0x60
    NSString *_outstandingExpressApplicationIdentifier;	// 104 = 0x68
    NSString *_outstandingPassUniqueIdentifier;	// 112 = 0x70
    NSSet *_outstandingExpressECP2TCIs;	// 120 = 0x78
    unsigned long long _lastReceivedExpressTransactionEvents;	// 128 = 0x80
    long long _outstandingStandAloneTransactionType;	// 136 = 0x88
    struct os_unfair_lock_s _observersLock;	// 144 = 0x90
    NSHashTable *_observers;	// 152 = 0x98
    PDAppletSubcredentialManager *_subcredentialManager;	// 160 = 0xa0
    id <PKTapToRadarDelegate> _tapToRadarDelegate;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x002000000015810a
@property(nonatomic) __weak id <PKTapToRadarDelegate> tapToRadarDelegate; // @synthesize tapToRadarDelegate=_tapToRadarDelegate;
@property(retain, nonatomic) PDAppletSubcredentialManager *subcredentialManager; // @synthesize subcredentialManager=_subcredentialManager;
- (void)assertionManager:(id)arg1 didInvalidateAssertion:(id)arg2;	// IMP=0x00100000001580b6
- (void)assertionManager:(id)arg1 didAcquireAssertion:(id)arg2;	// IMP=0x00100000001580b0
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;	// IMP=0x00100000001580a8
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;	// IMP=0x001000000015808e
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x0010000000158073
- (id)createCurrentNotificationRegistrationState;	// IMP=0x001000000015801a
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x0010000000158014
- (void)receivedSecureExpressTransactionEvent:(id)arg1;	// IMP=0x00100000001570da
- (void)presentPassWithEvent:(id)arg1;	// IMP=0x0010000000156f89
- (void)carKeyDidUnlockWithAppletIdentifier:(id)arg1 keyIdentifier:(id)arg2;	// IMP=0x0010000000156f0a
- (void)carKeyDidLockWithAppletIdentifier:(id)arg1 keyIdentifier:(id)arg2;	// IMP=0x0010000000156e8b
- (void)handleStandaloneTransactionWithCredentialIdentifier:(id)arg1 appletIdentifier:(id)arg2 transactionType:(long long)arg3;	// IMP=0x0010000000156b3b
- (void)secureElementRadioStateChanged;	// IMP=0x0010000000156b35
- (void)secureElementExpressConfigurationDidFail;	// IMP=0x0010000000156ad4
- (void)secureElementDidRunScriptsFromTSM;	// IMP=0x0010000000156ac2
- (void)secureElementExpressConfigurationNeedsUpdate;	// IMP=0x0010000000156ab0
- (void)outstandingExpressTransactionStateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000015695c
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000001567ef
- (void)registerObserver:(id)arg1;	// IMP=0x0010000000156790
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000155a22
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001557b7
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000155330
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001550e6
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000154e6b
- (id)expressPassesInformation;	// IMP=0x0010000000154d8e
- (void)expressPassesInformationWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000154c3b
- (void)expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001547a8
- (void)expressPassesInformationWithCardType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000154551
- (void)expressPassInformationWithPassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000015439e
- (void)isPassExpressWithPassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001541d2
- (void)processPaymentApplicationsUpdateFromPriorPaymentApplications:(id)arg1 toPaymentApplications:(id)arg2 forPassUniqueIdentifier:(id)arg3;	// IMP=0x0010000000153ee0
- (void)requestRadarIfAuthenticationLockedOut;	// IMP=0x0010000000153eda
- (void)resetExpressPasses;	// IMP=0x0010000000153cad
- (void)sanitizeExpressPasses;	// IMP=0x0010000000153c4c
- (void)stopExpressModes;	// IMP=0x0010000000153bed
- (void)startExpressModes;	// IMP=0x0010000000153b45
- (id)initWithDatabaseManager:(id)arg1 assertionManager:(id)arg2 secureElement:(id)arg3 remoteInterfacePresenter:(id)arg4 notificationStreamManager:(id)arg5 isFirstUnlockedLaunchForBoot:(_Bool)arg6 tapToRadarDelegate:(id)arg7;	// IMP=0x001000000015364e
- (id)init;	// IMP=0x0010000000153640

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

