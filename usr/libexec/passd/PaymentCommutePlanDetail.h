//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentCommutePlanDetail
{
}

+ (id)_postProcessValue:(id)arg1;	// IMP=0x004000000031eb84
+ (id)_propertySettersForPaymentPlan;	// IMP=0x001000000031e8d9
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x001000000031e8b6
+ (id)_predicateForPaymentPass:(id)arg1;	// IMP=0x001000000031e82f
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x001000000031e80c
+ (id)paymentPlansInDatabase:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;	// IMP=0x001000000031e3aa
+ (long long)countInDatabase:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;	// IMP=0x001000000031e32a
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2 forPassWithUniqueIdentifier:(id)arg3;	// IMP=0x001000000031e1ce
+ (void)truncateEntitiesForPass:(id)arg1 inDatabase:(id)arg2 toCount:(long long)arg3;	// IMP=0x001000000031dfcc
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000031df33
+ (id)insertPaymentPlan:(id)arg1 withPaymentPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000031dea5
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x001000000031ddc7
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000031dd98
+ (id)databaseTable;	// IMP=0x001000000031dd8b
- (id)passUniqueIdentifier;	// IMP=0x004000000031e7f3
- (id)identifier;	// IMP=0x001000000031e7da
- (id)paymentPlan;	// IMP=0x001000000031e68c
- (id)initWithPaymentPlan:(id)arg1 paymentPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000031da92

@end
