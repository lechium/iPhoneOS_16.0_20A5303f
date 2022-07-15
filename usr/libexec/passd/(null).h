//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, CLPlacemark, MISSING_TYPE, NSArray, NSDecimalNumber, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, PDAccountManager, PDApplyManager, PDDatabaseManager, PDDiscoveryManager, PDExpressPassManager, PDFamilyCircleManager, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator, PDTransitNotificationService, PKAccount, PKFeatureApplication, PKPeerPaymentAccount;

@interface (null) : NSObject
{
    PDAccountManager *_accountManager;	// 8 = 0x8
    PDApplyManager *_applyManager;	// 16 = 0x10
    PDDatabaseManager *_databaseManager;	// 24 = 0x18
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 32 = 0x20
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 40 = 0x28
    PDTransitNotificationService *_transitNotificationService;	// 48 = 0x30
    PDFamilyCircleManager *_familyCircleManager;	// 56 = 0x38
    PDExpressPassManager *_expressPassManager;	// 64 = 0x40
    PDDiscoveryManager *_discoveryManager;	// 72 = 0x48
    NSSet *_prefetchedCreditAccounts;	// 80 = 0x50
    NSDictionary *_prefetchedPhysicalCards;	// 88 = 0x58
    NSDictionary *_prefetchedCreditAccountUsers;	// 96 = 0x60
    long long _defaultPhysicalCardStatus;	// 104 = 0x68
    long long _daysSincePhysicalAppleCardShipmentUpdate;	// 112 = 0x70
    PKAccount *_prefetchedDefaultCreditAccount;	// 120 = 0x78
    NSString *_defaultPassUniqueIdentifier;	// 128 = 0x80
    long long _daysSinceLastDefaultCreditAccountTransaction;	// 136 = 0x88
    long long _daysSinceLastApplePayTransaction;	// 144 = 0x90
    long long _daysSinceLastPeerPaymentTransaction;	// 152 = 0x98
    NSArray *_prefetchedCreditApplications;	// 160 = 0xa0
    PKFeatureApplication *_prefetchedCurrentCreditApplication;	// 168 = 0xa8
    PKPeerPaymentAccount *_prefetchedPeerPaymentAccount;	// 176 = 0xb0
    NSArray *_prefetchedSetupFeatures;	// 184 = 0xb8
    NSArray *_prefetchedFamilyMembers;	// 192 = 0xc0
    _Bool _hasQueriedApplePayActive;	// 200 = 0xc8
    _Bool _isApplePayActive;	// 201 = 0xc9
    _Bool _isApplePaySetupAvailable;	// 202 = 0xca
    _Bool _hasPaymentCard;	// 203 = 0xcb
    _Bool _hasDebitCard;	// 204 = 0xcc
    _Bool _hasApplePayTransaction;	// 205 = 0xcd
    _Bool _isBrokerRegistered;	// 206 = 0xce
    _Bool _hasQueriedApplePaySetUpState;	// 207 = 0xcf
    _Bool _hasQueriedPaymentCards;	// 208 = 0xd0
    _Bool _hasQueriedDebitCards;	// 209 = 0xd1
    _Bool _hasQueriedApplePayTransactions;	// 210 = 0xd2
    _Bool _hasQueriedDaysSinceLastTransaction;	// 211 = 0xd3
    _Bool _hasQueriedBrokerRegistration;	// 212 = 0xd4
    _Bool _hasQueriedPaymentTransaction;	// 213 = 0xd5
    _Bool _hasPaymentTransaction;	// 214 = 0xd6
    _Bool _hasQueriedTransitTransaction;	// 215 = 0xd7
    _Bool _hasTransitTransaction;	// 216 = 0xd8
    _Bool _hasQueriedDefaultCreditAccountInStoreTransaction;	// 217 = 0xd9
    _Bool _hasDefaultCreditAccountInStoreTransaction;	// 218 = 0xda
    _Bool _hasQueriedDefaultCreditAccountInAppTransaction;	// 219 = 0xdb
    _Bool _hasDefaultCreditAccountInAppTransaction;	// 220 = 0xdc
    _Bool _hasQueriedDefaultCreditAccountWebTransaction;	// 221 = 0xdd
    _Bool _hasDefaultCreditAccountWebTransaction;	// 222 = 0xde
    _Bool _hasQueriedDefaultCreditAccountVirtualCardTransaction;	// 223 = 0xdf
    _Bool _hasDefaultCreditAccountVirtualCardTransaction;	// 224 = 0xe0
    _Bool _hasQueriedDefaultCreditAccountPhysicalCardTransaction;	// 225 = 0xe1
    _Bool _hasDefaultCreditAccountPhysicalCardTransaction;	// 226 = 0xe2
    _Bool _hasQueriedPeerPaymentTransaction;	// 227 = 0xe3
    _Bool _hasPeerPaymentTransaction;	// 228 = 0xe4
    _Bool _hasQueriedPeerPaymentContaclessTransaction;	// 229 = 0xe5
    _Bool _hasPeerPaymentContactlessTransaction;	// 230 = 0xe6
    _Bool _hasQueriedPeerPaymentDaysSinceLastTransaction;	// 231 = 0xe7
    _Bool _hasSentMoneyToAnyParticipant;	// 232 = 0xe8
    _Bool _hasQueriedPeerPaymentHasSentMoneyToAnyParticipant;	// 233 = 0xe9
    _Bool _hasQueriedPeerPaymentPassProvisioned;	// 234 = 0xea
    _Bool _peerPaymentPassProvisioned;	// 235 = 0xeb
    _Bool _hasQueriedFamilyCircleFamilyOrganizer;	// 236 = 0xec
    _Bool _familyCircleFamilyOrganizer;	// 237 = 0xed
    _Bool _hasQueriedFamilyCircleParent;	// 238 = 0xee
    _Bool _familyCircleParent;	// 239 = 0xef
    _Bool _hasQueriedFamilyCircleHasFamily;	// 240 = 0xf0
    _Bool _familyCircleHasFamily;	// 241 = 0xf1
    _Bool _hasQueriedFamilyCircleCurrentUserAge;	// 242 = 0xf2
    long long _familyCircleCurrentUserAge;	// 248 = 0xf8
    _Bool _hasQueriedFamilyCircleMembersUnderAge;	// 256 = 0x100
    MISSING_TYPE *_familyCircleMembersUnderAge;	// 264 = 0x108
    _Bool _hasQueriedfamilyCircleMembersCount;	// 272 = 0x110
    long long _familyCircleMembersCount;	// 280 = 0x118
    _Bool _hasQueriedFamilyCircleDaysSinceNewestJoinedDate;	// 288 = 0x120
    long long _familyCircleDaysSinceNewestJoinedDate;	// 296 = 0x128
    _Bool _hasQueriedFamilyCircleMinimumMemberAge;	// 304 = 0x130
    long long _familyCircleMinimumMemberAge;	// 312 = 0x138
    _Bool _hasQueriedDefaultCreditAccountHasUnderageParticipant;	// 320 = 0x140
    _Bool _defaultCreditAccountHasUnderageParticipant;	// 321 = 0x141
    _Bool _hasQueriedForDisputeState;	// 322 = 0x142
    _Bool _defaultCreditAccountHasDisputeOpen;	// 323 = 0x143
    long long _defaultCreditAccountDaysSinceDisputeOpened;	// 328 = 0x148
    _Bool _hasQueriedAnyCreditAccountIsClosed;	// 336 = 0x150
    _Bool _anyCreditAccountIsClosed;	// 337 = 0x151
    _Bool _hasQueriedAnyCreditAccountIsRemoved;	// 338 = 0x152
    _Bool _anyCreditAccountIsRemoved;	// 339 = 0x153
    _Bool _hasQueriedDaysSinceOldestPaymentPassIngestDate;	// 340 = 0x154
    long long _daysSinceOldestPaymentPassIngestDate;	// 344 = 0x158
    NSMutableSet *_passStyles;	// 352 = 0x160
    NSMutableSet *_unexpiredPassStyles;	// 360 = 0x168
    NSMutableSet *_cardTypes;	// 368 = 0x170
    NSMutableSet *_unexpiredCardTypes;	// 376 = 0x178
    NSArray *_transitNetworksPresent;	// 384 = 0x180
    NSArray *_transitNetworksPresentAndUnexpired;	// 392 = 0x188
    _Bool _hasTransitPassForCurrentLocation;	// 400 = 0x190
    _Bool _hasUnexpiredTransitPassForCurrentLocation;	// 401 = 0x191
    NSMutableDictionary *_discoveryItemStatus;	// 408 = 0x198
    NSSet *_discoveryItemsExpanded;	// 416 = 0x1a0
    NSSet *_discoveryItemsDismissed;	// 424 = 0x1a8
    NSSet *_discoveryCTAsTapped;	// 432 = 0x1b0
    NSSet *_discoveryCTAsCompleted;	// 440 = 0x1b8
    _Bool _rulesNeedLocation;	// 448 = 0x1c0
    _Bool _rulesNeedPlacemark;	// 449 = 0x1c1
    _Bool _hasQueriedPayLaterNumberOfLoans;	// 450 = 0x1c2
    long long _payLaterNumberOfLoans;	// 456 = 0x1c8
    _Bool _hasQueriedPayLaterDaysSinceFirstActiveLoan;	// 464 = 0x1d0
    long long _payLaterDaysSinceFirstActiveLoan;	// 472 = 0x1d8
    _Bool _hasQueriedPayLaterNumberOfActiveLoans;	// 480 = 0x1e0
    long long _payLaterNumberOfActiveLoans;	// 488 = 0x1e8
    _Bool _hasQueriedPayLaterNumberOfPendingLoans;	// 496 = 0x1f0
    long long _payLaterNumberOfPendingLoans;	// 504 = 0x1f8
    _Bool _hasQueriedPayLaterNumberOfDelinquentLoans;	// 512 = 0x200
    long long _payLaterNumberOfDelinquentLoans;	// 520 = 0x208
    _Bool _hasQueriedPayLaterNumberOfCanceledLoans;	// 528 = 0x210
    long long _payLaterNumberOfCanceledLoans;	// 536 = 0x218
    _Bool _hasQueriedPayLaterNumberOfCompleteLoans;	// 544 = 0x220
    long long _payLaterNumberOfCompleteLoans;	// 552 = 0x228
    NSArray *_prefetchedPayLaterFinancingPlans;	// 560 = 0x230
    PKAccount *_prefetchedPayLaterAccount;	// 568 = 0x238
    NSMutableDictionary *_queriedMerchantIdentifierPresence;	// 576 = 0x240
    NSMutableDictionary *_queriedMapsIdentifierPresence;	// 584 = 0x248
    NSMutableDictionary *_queriedMapsBrandIdentifierPresence;	// 592 = 0x250
    NSMutableDictionary *_queriedDefaultCreditAccountMerchantIdentifierPresence;	// 600 = 0x258
    NSMutableDictionary *_queriedDefaultCreditAccountMerchantIdentifierLast30DaysPresence;	// 608 = 0x260
    NSMutableDictionary *_queriedDefaultCreditAccountMapsIdentifierPresence;	// 616 = 0x268
    NSMutableDictionary *_queriedDefaultCreditAccountMapsIdentifierLast30DaysPresence;	// 624 = 0x270
    NSMutableDictionary *_queriedDefaultCreditAccountMapsBrandIdentifierPresence;	// 632 = 0x278
    NSMutableDictionary *_queriedDefaultCreditAccountMapsBrandIdentifierLast30DaysPresence;	// 640 = 0x280
    NSMutableDictionary *_queriedAppIdentifierPresence;	// 648 = 0x288
    CLLocation *_latestValidLocation;	// 656 = 0x290
    CLPlacemark *_currentPlacemark;	// 664 = 0x298
    NSSet *_sentTransitDCINotifications;	// 672 = 0x2a0
    NSSet *_sentTransitOpenLoopUpgradeNotifications;	// 680 = 0x2a8
    NSSet *_sentTransitOpenLoopRenotifiedInMarketNotifications;	// 688 = 0x2b0
    NSSet *_cardTypesWithExpressEnabled;	// 696 = 0x2b8
    NSSet *_supportedMarketsForCurrentLocation;	// 704 = 0x2c0
    NSSet *_supportedTransitMarketsForCurrentLocation;	// 712 = 0x2c8
    NSSet *_supportedTransitNetworksForCurrentLocation;	// 720 = 0x2d0
    NSSet *_expressTransitNetworksForCurrentLocation;	// 728 = 0x2d8
}

+ (id)_applePayRelevantTransactionTypes;	// IMP=0x0040000000102f4d
+ (_Bool)isTransactionRelevant:(id)arg1;	// IMP=0x0010000000102e95
+ (id)availableKeysAndOperators;	// IMP=0x0010000000102433
- (void).cxx_destruct;	// IMP=0x002000000010d75d
@property(readonly, nonatomic) _Bool hasUnexpiredTransitPassForCurrentLocation; // @synthesize hasUnexpiredTransitPassForCurrentLocation=_hasUnexpiredTransitPassForCurrentLocation;
@property(readonly, nonatomic) _Bool hasTransitPassForCurrentLocation; // @synthesize hasTransitPassForCurrentLocation=_hasTransitPassForCurrentLocation;
@property(readonly, nonatomic) CLPlacemark *currentPlacemark; // @synthesize currentPlacemark=_currentPlacemark;
@property(readonly, nonatomic) NSSet *expressTransitNetworksForCurrentLocation; // @synthesize expressTransitNetworksForCurrentLocation=_expressTransitNetworksForCurrentLocation;
@property(readonly, nonatomic) NSSet *supportedTransitNetworksForCurrentLocation; // @synthesize supportedTransitNetworksForCurrentLocation=_supportedTransitNetworksForCurrentLocation;
@property(readonly, nonatomic) NSSet *supportedTransitMarketsForCurrentLocation; // @synthesize supportedTransitMarketsForCurrentLocation=_supportedTransitMarketsForCurrentLocation;
@property(readonly, nonatomic) NSSet *supportedMarketsForCurrentLocation; // @synthesize supportedMarketsForCurrentLocation=_supportedMarketsForCurrentLocation;
@property(readonly, nonatomic) NSSet *cardTypesWithExpressEnabled; // @synthesize cardTypesWithExpressEnabled=_cardTypesWithExpressEnabled;
@property(readonly, nonatomic) NSSet *sentTransitOpenLoopRenotifiedInMarketNotifications; // @synthesize sentTransitOpenLoopRenotifiedInMarketNotifications=_sentTransitOpenLoopRenotifiedInMarketNotifications;
@property(readonly, nonatomic) NSSet *sentTransitOpenLoopUpgradeNotifications; // @synthesize sentTransitOpenLoopUpgradeNotifications=_sentTransitOpenLoopUpgradeNotifications;
@property(readonly, nonatomic) NSSet *sentTransitDCINotifications; // @synthesize sentTransitDCINotifications=_sentTransitDCINotifications;
- (id)description;	// IMP=0x001000000010cc14
- (id)_unactivatedPhysicalCardForAltDSID:(id)arg1;	// IMP=0x001000000010c95d
- (id)_accountUsersForAccountIdentifier:(id)arg1 accessLevel:(unsigned long long)arg2;	// IMP=0x001000000010c896
- (id)_creditAccountUsersForAccountIdentifier:(id)arg1;	// IMP=0x001000000010c864
- (id)_creditAccountPhysicalCardsForAccountIdentifier:(id)arg1;	// IMP=0x001000000010c832
- (id)_familyMemberWithAltDSID:(id)arg1;	// IMP=0x001000000010c5de
- (id)_creditAccountWithIdentifier:(id)arg1;	// IMP=0x001000000010c38d
- (id)_defaultCreditAccountAccountStatement;	// IMP=0x001000000010c2db
- (id)_defaultCreditAccountAccountSummary;	// IMP=0x001000000010c25f
- (id)_defaultCreditAccountCreditAccountDetails;	// IMP=0x001000000010c20f
- (_Bool)_hasDefaultCreditAccountTransactionOfTransactionSourceType:(unsigned long long)arg1;	// IMP=0x001000000010c17c
- (void)_prefetchDataSources:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000109d9c
- (void)preflightForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000109781
- (id)enumeratorOfInstalledApps;	// IMP=0x00100000001096f1
- (unsigned long long)countOfInstalledApps;	// IMP=0x001000000010966d
- (id)memberOfInstalledApps:(id)arg1;	// IMP=0x0010000000109508
- (long long)_countOfFinancingPlansWithSate:(unsigned long long)arg1;	// IMP=0x0010000000109488
- (long long)_countOfFinancingPlansOfType:(unsigned long long)arg1;	// IMP=0x0010000000109408
@property(readonly, nonatomic) long long payLaterNumberOfCompleteLoans;
@property(readonly, nonatomic) long long payLaterNumberOfCanceledLoans;
@property(readonly, nonatomic) long long payLaterNumberOfDelinquentLoans;
@property(readonly, nonatomic) long long payLaterNumberOfPendingLoans;
@property(readonly, nonatomic) long long payLaterNumberOfActiveLoans;
@property(readonly, nonatomic) long long payLaterDaysSinceFirstActiveLoan;
@property(readonly, nonatomic) long long payLaterNumberOfLoans;
@property(readonly, nonatomic) _Bool hasPayLaterAccount;
@property(readonly, nonatomic) NSSet *discoveryCTAsCompleted;
@property(readonly, nonatomic) NSSet *discoveryCTAsTapped;
@property(readonly, nonatomic) NSSet *discoveryItemsDismissed;
@property(readonly, nonatomic) NSSet *discoveryItemsExpanded;
@property(readonly, nonatomic) NSSet *discoveryItemsWithWaitingForTriggerStatus;
@property(readonly, nonatomic) NSSet *discoveryItemsWithDismissedStatus;
@property(readonly, nonatomic) NSSet *discoveryItemsWithActionedStatus;
@property(readonly, nonatomic) NSSet *discoveryItemsWithActiveStatus;
- (id)discoveryItemStatus;	// IMP=0x0010000000108887
@property(readonly, nonatomic) long long familyCircleMinimumMemberAge;
@property(readonly, nonatomic) long long familyCircleDaysSinceNewestJoinedDate;
@property(readonly, nonatomic) long long familyCircleMembersCount;
@property(readonly, nonatomic) long long familyCircleMembersUnderAge;
@property(readonly, nonatomic) long long familyCircleCurrentUserAge;
@property(readonly, nonatomic) _Bool familyCircleHasFamily;
@property(readonly, nonatomic) _Bool familyCircleParent;
@property(readonly, nonatomic) _Bool familyCircleFamilyOrganizer;
@property(readonly, nonatomic) _Bool peerPaymentAccountHasSentMoneyToAnyParticipant;
@property(readonly, nonatomic) long long daysSinceParticipantPeerPaymentAccountIdentifiedDate;
@property(readonly, nonatomic) long long peerPaymentAccountDaysSinceIdentifiedDate;
@property(readonly, nonatomic) long long peerPaymentAccountDaysSinceCreatedDate;
@property(readonly, nonatomic) unsigned long long peerPaymentAccountRole;
@property(readonly, nonatomic) long long peerPaymentFamilyParticipantAccounts;
@property(readonly, nonatomic) long long peerPaymentAccountBalanceBase;
@property(readonly, nonatomic) _Bool peerPaymentAccountHasBalance;
@property(readonly, nonatomic) long long daysSinceLastPeerPaymentTransaction;
@property(readonly, nonatomic) _Bool peerPaymentAccountHasContactlessTransaction;
@property(readonly, nonatomic) _Bool peerPaymentAccountHasTransaction;
@property(readonly, nonatomic) long long peerPaymentAccountStateReason;
@property(readonly, nonatomic) long long peerPaymentAccountStage;
@property(readonly, nonatomic) long long peerPaymentAccountState;
@property(readonly, nonatomic) _Bool hasPeerPaymentPassProvisioned;
@property(readonly, nonatomic) _Bool hasPeerPaymentAccount;
@property(readonly, copy, nonatomic) NSString *currentDefaultCreditApplicationState;
@property(readonly, nonatomic) long long currentDefaultCreditApplictionDaysSinceLastUpdated;
@property(readonly, nonatomic) long long defaultCreditApplicationCount;
@property(readonly, nonatomic) _Bool hasTransitTransaction;
@property(readonly, nonatomic) _Bool hasPaymentTransaction;
- (id)enumeratorOfMapsBrandIdentifiers;	// IMP=0x0010000000106aa0
- (MISSING_TYPE *)countOfMapsBrandIdentifiers;	// IMP=0x0010000000106a87
- (id)memberOfMapsBrandIdentifiers:(id)arg1;	// IMP=0x0010000000106970
- (id)enumeratorOfMapsIdentifiers;	// IMP=0x00100000001068e0
- (unsigned long long)countOfMapsIdentifiers;	// IMP=0x00100000001068c7
- (id)memberOfMapsIdentifiers:(id)arg1;	// IMP=0x00100000001067b0
- (id)enumeratorOfMerchantIdentifiers;	// IMP=0x0010000000106720
- (unsigned long long)countOfMerchantIdentifiers;	// IMP=0x0010000000106707
- (id)memberOfMerchantIdentifiers:(id)arg1;	// IMP=0x00100000001065f0
@property(readonly, nonatomic) NSSet *transitNetworksPresentAndUnexpired;
@property(readonly, nonatomic) NSSet *transitNetworksPresent;
@property(readonly, nonatomic) NSSet *unexpiredSecureElementCardTypes;
@property(readonly, nonatomic) NSSet *secureElementCardTypes;
@property(readonly, nonatomic) NSSet *unexpiredPassStyles;
@property(readonly, nonatomic) NSSet *passStyles;
@property(readonly, nonatomic) _Bool anyCreditAccountStateIsRemoved;
@property(readonly, nonatomic) _Bool anyCreditAccountStateIsClosed;
@property(readonly, nonatomic) long long daysSincePhysicalAppleCardShipmentUpdate;
@property(readonly, nonatomic) NSString *defaultCreditAccountPhysicalAppleCardStatus;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasUnderageParticipant;
@property(readonly, nonatomic) long long defaultCreditAccountParticipantUsersCount;
@property(readonly, nonatomic) _Bool defaultCreditAccountIsCoOwner;
@property(readonly, nonatomic) long long defaultCreditAccountAccessLevel;
@property(readonly, nonatomic) _Bool defaultCreditAccountIsShared;
- (id)enumeratorOfDefaultCreditAccountMapsBrandIdentifiersLast30Days;	// IMP=0x0010000000105633
- (unsigned long long)countOfDefaultCreditAccountMapsBrandIdentifiersLast30Days;	// IMP=0x001000000010561a
- (id)memberOfDefaultCreditAccountMapsBrandIdentifiersLast30Days:(id)arg1;	// IMP=0x001000000010545f
- (id)enumeratorOfDefaultCreditAccountMapsBrandIdentifiers;	// IMP=0x00100000001053cf
- (unsigned long long)countOfDefaultCreditAccountMapsBrandIdentifiers;	// IMP=0x00100000001053b6
- (id)memberOfDefaultCreditAccountMapsBrandIdentifiers:(id)arg1;	// IMP=0x0010000000105259
- (id)enumeratorOfDefaultCreditAccountMapsIdentifiersLast30Days;	// IMP=0x00100000001051c9
- (unsigned long long)countOfDefaultCreditAccountMapsIdentifiersLast30Days;	// IMP=0x00100000001051b0
- (id)memberOfDefaultCreditAccountMapsIdentifiersLast30Days:(id)arg1;	// IMP=0x0010000000104ff5
- (id)enumeratorOfDefaultCreditAccountMapsIdentifiers;	// IMP=0x0010000000104f65
- (unsigned long long)countOfDefaultCreditAccountMapsIdentifiers;	// IMP=0x0010000000104f4c
- (id)memberOfDefaultCreditAccountMapsIdentifiers:(id)arg1;	// IMP=0x0010000000104def
- (id)enumeratorOfDefaultCreditAccountMerchantIdentifiersLast30Days;	// IMP=0x0010000000104d5f
- (unsigned long long)countOfDefaultCreditAccountMerchantIdentifiersLast30Days;	// IMP=0x0010000000104d46
- (id)memberOfDefaultCreditAccountMerchantIdentifiersLast30Days:(id)arg1;	// IMP=0x0010000000104b8b
- (id)enumeratorOfDefaultCreditAccountMerchantIdentifiers;	// IMP=0x0010000000104afb
- (unsigned long long)countOfDefaultCreditAccountMerchantIdentifiers;	// IMP=0x0010000000104ae2
- (id)memberOfDefaultCreditAccountMerchantIdentifiers:(id)arg1;	// IMP=0x0010000000104985
- (_Bool)defaultCreditAccountHasUsedInstallments;	// IMP=0x0010000000104913
@property(readonly, nonatomic) _Bool defaultCreditAccountHasActiveInstallment;
@property(readonly, nonatomic) long long defaultCreditAccountDaysSinceCreatedDate;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasPhysicalCardTransaction;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasVirtualCardTransaction;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasWebTransaction;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasInAppTransaction;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasInStoreTransaction;
@property(readonly, nonatomic) long long defaultCreditAccountDaysSinceLastTransaction;
@property(readonly, nonatomic) _Bool defaultCreditAccountPassIsDefault;
@property(readonly, nonatomic) _Bool defaultCreditAccountSupportsShowNotifications;
@property(readonly, nonatomic) NSDecimalNumber *defaultCreditAccountAvailableCredit;
@property(readonly, nonatomic) long long defaultCreditAccountDaysSinceDisputeOpened;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasDisputeOpen;
- (void)updateDisputeState;	// IMP=0x0010000000103fe2
@property(readonly, nonatomic) _Bool defaultCreditAccountInDisasterRecovery;
@property(readonly, nonatomic) _Bool defaultCreditAccountInGrace;
@property(readonly, nonatomic) long long defaultCreditAccountCyclesPastDue;
@property(readonly, nonatomic) long long defaultCreditAccountBalanceStatus;
@property(readonly, nonatomic) _Bool defaultCreditAccountRequiresDebtCollectionNotices;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasDynamicSecurityCode;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasVirtualCard;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasPhysicalCard;
@property(readonly, nonatomic) NSDecimalNumber *defaultCreditAccountLifetimeRewards;
@property(readonly, nonatomic) long long defaultCreditAccountState;
@property(readonly, nonatomic) _Bool hasDefaultCreditAccount;
@property(readonly, nonatomic) long long defaultCreditAccountSetupFeatureState;
@property(readonly, nonatomic) long long daysSinceOldestPaymentPassIngestDate;
@property(readonly, nonatomic) long long daysSinceLastTransaction;
@property(readonly, nonatomic) _Bool hasApplePayTransaction;
@property(readonly, nonatomic) _Bool hasDebitCard;
@property(readonly, nonatomic) _Bool hasPaymentCard;
@property(readonly, nonatomic, getter=isDeviceRegisteredWithBroker) _Bool deviceRegisteredWithBroker;
@property(readonly, nonatomic, getter=isPrimaryAppleAccountVerified) _Bool primaryAppleAccountVerified;
@property(readonly, nonatomic, getter=isApplePaySetupAvailable) _Bool applePaySetupAvailable;
@property(readonly, nonatomic, getter=isApplePayActive) _Bool applePayActive;
@property(readonly, nonatomic) NSString *deviceLanguage;
@property(readonly, nonatomic) NSString *currentRegion;
- (id)initWithAccountManager:(id)arg1 applyManager:(id)arg2 databaseManager:(id)arg3 peerPaymentWebServiceCoordinator:(id)arg4 paymentWebServiceCoordinator:(id)arg5 transitNotificationService:(id)arg6 familyCircleManager:(id)arg7 expressPassManager:(id)arg8 discoveryManager:(id)arg9;	// IMP=0x0010000000102f94
- (id)init;	// IMP=0x0010000000102f5a

// Remaining properties
@property(readonly, nonatomic) NSSet *defaultCreditAccountMapsBrandIdentifiers; // @dynamic defaultCreditAccountMapsBrandIdentifiers;
@property(readonly, nonatomic) NSSet *defaultCreditAccountMapsBrandIdentifiersLast30Days; // @dynamic defaultCreditAccountMapsBrandIdentifiersLast30Days;
@property(readonly, nonatomic) NSSet *defaultCreditAccountMapsIdentifiers; // @dynamic defaultCreditAccountMapsIdentifiers;
@property(readonly, nonatomic) NSSet *defaultCreditAccountMapsIdentifiersLast30Days; // @dynamic defaultCreditAccountMapsIdentifiersLast30Days;
@property(readonly, nonatomic) NSSet *defaultCreditAccountMerchantIdentifiers; // @dynamic defaultCreditAccountMerchantIdentifiers;
@property(readonly, nonatomic) NSSet *defaultCreditAccountMerchantIdentifiersLast30Days; // @dynamic defaultCreditAccountMerchantIdentifiersLast30Days;
@property(readonly, nonatomic) NSSet *installedApps; // @dynamic installedApps;
@property(readonly, nonatomic) NSSet *mapsBrandIdentifiers; // @dynamic mapsBrandIdentifiers;
@property(readonly, nonatomic) NSSet *mapsIdentifiers; // @dynamic mapsIdentifiers;
@property(readonly, nonatomic) NSSet *merchantIdentifiers; // @dynamic merchantIdentifiers;

@end
