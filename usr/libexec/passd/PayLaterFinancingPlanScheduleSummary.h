//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterFinancingPlanScheduleSummary
{
}

+ (id)_propertySettersForPayLaterFinancingPlanScheduleSummary;	// IMP=0x004000000006d550
+ (id)_propertyValuesForPayLaterScheduleSummary:(id)arg1;	// IMP=0x001000000006d4e0
+ (id)_predicateForFinancingPlanPID:(long long)arg1;	// IMP=0x001000000006d46d
+ (void)deletePayLaterFinancingPlanScheduleSummaryForFinancingPlanPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000006d098
+ (id)anyInDatabase:(id)arg1 forFinancingPlanPID:(long long)arg2;	// IMP=0x001000000006d00c
+ (id)insertOrUpdatePayLaterFinancingPlanScheduleSummary:(id)arg1 forFinancingPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000006cdf7
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000006cce7
+ (id)databaseTable;	// IMP=0x001000000006ccda
- (id)scheduleSummary;	// IMP=0x004000000006d20b
- (_Bool)deleteFromDatabase;	// IMP=0x001000000006d131
- (void)updateWithPayLaterFinancingPlanScheduleSummary:(id)arg1;	// IMP=0x001000000006cf92
- (id)initWithPayLaterFinancingPlanScheduleSummary:(id)arg1 forFinancingPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000006cd16

@end
