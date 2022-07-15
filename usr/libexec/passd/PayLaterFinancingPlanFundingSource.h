//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterFinancingPlanFundingSource
{
}

+ (id)_propertySettersForFundingSource;	// IMP=0x00400000000db6a2
+ (id)_propertyValuesForFundingSource:(id)arg1;	// IMP=0x00100000000db5b7
+ (id)_predicateForPlanPID:(long long)arg1;	// IMP=0x00100000000db544
+ (void)deleteFinancingPlanFundingSourceForPlanPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000db1b9
+ (id)anyInDatabase:(id)arg1 forPlanPID:(long long)arg2;	// IMP=0x00100000000db12d
+ (void)insertOrUpdateFinancingPlanFundingSource:(id)arg1 forPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000dae7e
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000000dad3e
+ (id)databaseTable;	// IMP=0x00100000000dad31
- (id)fundingSource;	// IMP=0x00400000000db319
- (_Bool)deleteFromDatabase;	// IMP=0x00100000000db252
- (void)updateWithFundingSource:(id)arg1;	// IMP=0x00100000000db0b3
- (id)initWithFundingSource:(id)arg1 forPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000dad87

@end
