//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountPromotionBehavior
{
}

+ (id)_propertyValuesForPromotionBehavior:(id)arg1 accountPID:(long long)arg2;	// IMP=0x00000000003c5456
+ (id)_propertySettersForAccountPromotionBehavior;	// IMP=0x00100000003c5157
+ (id)_queryForPredicate:(id)arg1 database:(id)arg2;	// IMP=0x00100000003c513c
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x00100000003c50c9
+ (void)deleteAccountPromotionBehaviorForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003c4fdd
+ (id)_insertAccountPromotionBehavior:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003c4f62
+ (void)insertOrUpdateAccountPromotionBehavior:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003c4eaa
+ (id)_anyInDatabase:(id)arg1 withAccountPID:(long long)arg2;	// IMP=0x00100000003c4e21
+ (id)accountPromotionBehaviorForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003c4dc8
+ (id)databaseTable;	// IMP=0x00100000003c4d2f
- (id)accountPromotionBehavior;	// IMP=0x00400000003c52e9
- (void)_updateWithAccountPromotionBehavior:(id)arg1 accountPID:(long long)arg2;	// IMP=0x00100000003c5076
- (id)initWithAccountPromotionBehavior:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003c4d3c

@end
