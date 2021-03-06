//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface AccountPromotion
{
}

+ (id)_propertyValuesForPromotion:(id)arg1 accountPID:(long long)arg2;	// IMP=0x00400000000457ca
+ (void)populateAssociatedCompletionStepsForPromotion:(id)arg1 promotionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000045725
+ (id)_propertySettersForAccountPromotion;	// IMP=0x0010000000045297
+ (id)_queryForPredicate:(id)arg1 database:(id)arg2;	// IMP=0x0010000000045174
+ (id)_predicateForProgramIdentifier:(id)arg1 accountPID:(long long)arg2;	// IMP=0x0010000000045076
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x0010000000045003
+ (id)_predicateForProgramIdentifier:(id)arg1;	// IMP=0x0010000000044fc4
+ (void)deleteAccountPromotion:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000044dea
+ (void)deleteAccountPromotionsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000044d51
+ (id)_insertAccountPromotion:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000044cd6
+ (void)insertOrUpdateAccountPromotion:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000044beb
+ (void)insertOrUpdateAccountPromotions:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000044a50
+ (id)accountPromotionForProgramIdentifier:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000449f4
+ (id)_anyInDatabase:(id)arg1 withProgramIdentifier:(id)arg2 accountPID:(long long)arg3;	// IMP=0x0010000000044965
+ (id)_promotionsWithPredicate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000044747
+ (id)promotionPIDsForProgramIdentifier:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000004459e
+ (id)accountPromotionsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000044515
+ (MISSING_TYPE *)databaseTable;	// IMP=0x001000000004440a
- (void)updateWithPromotionCompletionSteps:(id)arg1;	// IMP=0x0040000000045696
- (id)accountPromotion;	// IMP=0x00100000000454c8
- (void)_updateWithAccountPromotion:(id)arg1 accountPID:(long long)arg2;	// IMP=0x0010000000044f14
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000044e84
- (id)initWithAccountPromotion:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000044417

@end

