//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentBalance
{
}

+ (id)_postProcessValue:(id)arg1;	// IMP=0x00400000002e8da8
+ (id)_propertySettersForPaymentBalance;	// IMP=0x00100000002e8a5d
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x00100000002e8a3a
+ (id)_predicateForPaymentPass:(id)arg1;	// IMP=0x00100000002e89b3
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00100000002e8990
+ (id)paymentBalancesInDatabase:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;	// IMP=0x00100000002e84da
+ (long long)countInDatabase:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;	// IMP=0x00100000002e845a
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2 forPassWithUniqueIdentifier:(id)arg3;	// IMP=0x00100000002e82fe
+ (void)truncateEntitiesForPass:(id)arg1 inDatabase:(id)arg2 toCount:(long long)arg3;	// IMP=0x00100000002e80f7
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002e805e
+ (id)insertPaymentBalance:(id)arg1 withPaymentPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002e7fd0
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000002e7ef2
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000002e7ec3
+ (id)databaseTable;	// IMP=0x00100000002e7eb6
- (id)passUniqueIdentifier;	// IMP=0x00400000002e8977
- (id)identifier;	// IMP=0x00100000002e895e
- (_Bool)isPrimaryBalance;	// IMP=0x00100000002e8913
- (id)paymentBalance;	// IMP=0x00100000002e87c5
- (id)initWithPaymentBalance:(id)arg1 paymentPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002e7a98

@end
