//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentApplication
{
}

+ (id)_propertySettersForPaymentApplication;	// IMP=0x004000000029c54c
+ (id)_predicateForPersistentID:(long long)arg1;	// IMP=0x001000000029b5c6
+ (id)_predicateForPass:(id)arg1;	// IMP=0x001000000029b592
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x001000000029b51f
+ (id)_predicateForApplicationIdentifier:(id)arg1 subcredentialIdentifier:(id)arg2 secureElementIdentifiers:(id)arg3;	// IMP=0x001000000029b3b5
+ (id)_predicateForApplicationIdentifier:(id)arg1 secureElementIdentifiers:(id)arg2;	// IMP=0x001000000029b298
+ (id)_predicateForPassUniqueIdentifier:(id)arg1 applicationIdentifier:(id)arg2 secureElementIdentifier:(id)arg3;	// IMP=0x001000000029b16c
+ (id)_predicateForApplicationIdentifier:(id)arg1 secureElementIdentifier:(id)arg2;	// IMP=0x001000000029b04f
+ (id)predicateForPaymentMethodTypes:(id)arg1;	// IMP=0x001000000029b02c
+ (id)predicateForNetworks:(id)arg1;	// IMP=0x001000000029b009
+ (id)predicateForSupportBarcodePayment:(_Bool)arg1;	// IMP=0x001000000029af96
+ (id)predicateForHasMerchantTokens:(_Bool)arg1;	// IMP=0x001000000029af23
+ (id)predicateForSupportsMerchantTokens:(_Bool)arg1;	// IMP=0x001000000029aeb0
+ (id)predicateForSupportInAppPayment:(_Bool)arg1;	// IMP=0x001000000029ae3d
+ (id)predicateForStates:(id)arg1;	// IMP=0x001000000029ac30
+ (id)predicateForState:(long long)arg1;	// IMP=0x001000000029abbd
+ (id)predicateForPrimaryPaymentApplication:(_Bool)arg1;	// IMP=0x001000000029ab44
+ (id)predicateForNotificationService:(id)arg1;	// IMP=0x001000000029aac2
+ (id)predicateForSecureElementIdentifier:(id)arg1;	// IMP=0x001000000029aa9f
+ (id)predicateForSecureElementIdentifiers:(id)arg1;	// IMP=0x001000000029aa7c
+ (id)predicateForTransactionSourceWithPID:(unsigned long long)arg1;	// IMP=0x001000000029aa09
+ (id)predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x001000000029a9e6
+ (id)predicateForDPANIdentifier:(id)arg1;	// IMP=0x001000000029a9c3
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000029a7f4
+ (id)_paymentApplicationForPass:(id)arg1 applicationIdentifier:(id)arg2 secureElementIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x001000000029a686
+ (void)updatePaymentApplications:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000299252
+ (void)updatePaymentApplications:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000298fd5
+ (id)_paymentApplicationsInDatabase:(id)arg1 matchingPredicate:(id)arg2 withJoinKeys:(id)arg3;	// IMP=0x0010000000298898
+ (id)_paymentApplicationsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0010000000298883
+ (id)paymentApplicationsInDatabase:(id)arg1;	// IMP=0x001000000029886f
+ (id)paymentApplicationsInDatabase:(id)arg1 forNotificationService:(id)arg2;	// IMP=0x00100000002987e3
+ (id)paymentApplicationsInDatabase:(id)arg1 forTransitAppletStatesDirty:(id)arg2;	// IMP=0x00100000002984a8
+ (id)paymentApplicationsInDatabase:(id)arg1 forPassUniqueIdentifier:(id)arg2 secureElementIdentifiers:(id)arg3;	// IMP=0x0010000000298318
+ (id)primaryPaymentApplicationsInDatabase:(id)arg1 forSecureElementIdentifiers:(id)arg2;	// IMP=0x00100000002981d0
+ (id)paymentApplicationsInDatabase:(id)arg1 forSecureElementIdentifier:(id)arg2;	// IMP=0x0010000000298144
+ (id)paymentApplicationsInDatabase:(id)arg1 forSecureElementIdentifiers:(id)arg2;	// IMP=0x00100000002980b8
+ (id)paymentApplicationsInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x001000000029802c
+ (id)paymentApplicationsInDatabase:(id)arg1 forPass:(id)arg2;	// IMP=0x0010000000297fa0
+ (id)anyInDatabase:(id)arg1 withPassUniqueIdentifier:(id)arg2 secureElementIdentifier:(id)arg3 paymentApplicationIdentifier:(id)arg4;	// IMP=0x0010000000297d3e
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 subcredentialIdentifier:(id)arg3 secureElementIdentifiers:(id)arg4;	// IMP=0x0010000000297ca4
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifiers:(id)arg3;	// IMP=0x0010000000297c13
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifier:(id)arg3;	// IMP=0x0010000000297b82
+ (id)anyInDatabase:(id)arg1 withTransactionSourcePID:(unsigned long long)arg2;	// IMP=0x0010000000297af6
+ (id)anyInDatabase:(id)arg1 withPersistentID:(unsigned long long)arg2;	// IMP=0x0010000000297a6a
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x0010000000297833
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000002977d0
+ (id)databaseTable;	// IMP=0x00100000002977c3
- (void)updateTransitNetworkIdentifiers:(id)arg1;	// IMP=0x004000000029c422
- (void)updateAutomaticSelectionCriteria:(id)arg1;	// IMP=0x001000000029c2f8
- (void)_updateExpressModes:(id)arg1;	// IMP=0x001000000029c1ce
- (void)updateWithPaymentApplication:(id)arg1;	// IMP=0x001000000029ba8c
- (id)paymentApplication;	// IMP=0x001000000029b639
- (_Bool)deleteFromDatabase;	// IMP=0x001000000029a88d
- (id)applicationIdentifier;	// IMP=0x00100000002977aa
- (id)transactionSourceIdentifier;	// IMP=0x00100000002976e5
- (long long)passPID;	// IMP=0x001000000029769a
- (long long)paymentNetworkIdentifier;	// IMP=0x001000000029764f
- (id)initWithPaymentApplication:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000296c54

@end
