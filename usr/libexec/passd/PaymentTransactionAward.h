//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentTransactionAward
{
}

+ (id)_propertySettersForPaymentTransactionAward;	// IMP=0x00400000000112da
+ (id)_postProcessedAmountForDecimalAmount:(id)arg1 currency:(id)arg2 exponent:(long long)arg3;	// IMP=0x0010000000011133
+ (id)_predicateForPaymentTransactionPIDs:(id)arg1;	// IMP=0x0010000000010c98
+ (id)_predicateForPaymentTransactionPID:(long long)arg1;	// IMP=0x0010000000010c25
+ (void)associateAwardsToPaymentTransactions:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000010613
+ (id)paymentTransactionAwardsInDatabase:(id)arg1 forPaymentTransactionPID:(long long)arg2;	// IMP=0x00100000000102d4
+ (void)deleteEntitiesForPaymentTransactionPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000001023b
+ (void)updateWithPaymentTransactionAwards:(id)arg1 forPaymentTransactionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000001019d
+ (id)insertPaymentTransactionAwards:(id)arg1 forPaymentTransactionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000010015
+ (id)insertPaymentTransactionAward:(id)arg1 forPaymentTransactionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000000ff9a
+ (id)databaseTable;	// IMP=0x001000000000ff08
- (id)_valuesDictionaryForPaymentTransactionAward:(id)arg1 forPaymentTransactionPID:(long long)arg2;	// IMP=0x0040000000010cbb
- (id)initWithPaymentTransactionAward:(id)arg1 forPaymentTransactionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000000ff15

@end

