//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PeerPaymentAccount
{
}

+ (id)_propertySettersForPeerPaymentAccount;	// IMP=0x00400000001d48b4
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00100000001d3eed
+ (id)anyInDatabase:(id)arg1 withTransactionSourcePID:(long long)arg2;	// IMP=0x00100000001d3e2c
+ (id)anyInDatabase:(id)arg1 withPersistentID:(long long)arg2;	// IMP=0x00100000001d3d6b
+ (id)anyInDatabase:(id)arg1;	// IMP=0x00100000001d3cd7
+ (void)_deleteAssociatedPeerPaymentAccountForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001d3c3e
+ (id)insertOrUpdatePeerPaymentAccount:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001d3b3b
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000001d37b2
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000001d3769
+ (id)databaseTable;	// IMP=0x00100000001d375c
+ (id)associatedPeerPaymentAccountForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001d3554
+ (id)_predicateForAssociatedPeerPaymentAccountIdentifier:(id)arg1;	// IMP=0x00100000001d2caa
+ (id)_predicateForAssociatedPeerPaymentAccountPID:(long long)arg1;	// IMP=0x00100000001d2c37
+ (void)_insertOrUpdateAssociatedPeerPaymentAccounts:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 accountIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x00100000001d21c2
- (id)_dictionaryForPeerPaymentAccount:(id)arg1;	// IMP=0x00400000001d407d
- (id)_passForPeerPaymentAccount:(id)arg1 database:(id)arg2;	// IMP=0x00100000001d3f79
- (_Bool)deleteFromDatabase;	// IMP=0x00100000001d38ed
- (id)transactionSourceIdentifier;	// IMP=0x00100000001d348f
- (id)identifier;	// IMP=0x00100000001d3476
- (id)associatedPassUniqueID;	// IMP=0x00100000001d33fb
- (id)associatedPassSerialNumber;	// IMP=0x00100000001d33ad
- (id)associatedPassTypeIdentifier;	// IMP=0x00100000001d335f
- (unsigned long long)state;	// IMP=0x00100000001d3314
- (id)associatedAccountInformation;	// IMP=0x00100000001d3077
- (id)currentBalance;	// IMP=0x00100000001d2f5e
- (id)peerPaymentAccount;	// IMP=0x00100000001d2ccd
- (void)updateWithPeerPaymentAccount:(id)arg1;	// IMP=0x00100000001d27bd
- (id)_commonInitForPeerPaymentAccount:(id)arg1 dictionary:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001d1f5b
- (id)initWithPeerPaymentAccount:(id)arg1 inDatabase:(id)arg2 associatedPeerPaymentAccountPID:(long long)arg3;	// IMP=0x00100000001d1e9c
- (id)initWithPeerPaymentAccount:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001d1dfb

@end

