//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterFinancingPlanTermsDetails
{
}

+ (id)_propertySettersForPayLaterFinancingPlanTermsDetails;	// IMP=0x00400000003ceaa7
+ (id)_propertyValuesForPayLaterTermsDetails:(id)arg1;	// IMP=0x00100000003cea1c
+ (id)_predicateForFinancingPlanPID:(long long)arg1;	// IMP=0x00100000003ce9a9
+ (void)deletePayLaterFinancingPlanTermsDetailsForFinancingPlanPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003ce774
+ (id)anyInDatabase:(id)arg1 forFinancingPlanPID:(long long)arg2;	// IMP=0x00100000003ce6e8
+ (id)insertOrUpdatePayLaterFinancingPlanTermsDetails:(id)arg1 forFinancingPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003ce57f
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000003ce46f
+ (id)databaseTable;	// IMP=0x00100000003ce462
- (id)termsDetails;	// IMP=0x00400000003ce83c
- (_Bool)deleteFromDatabase;	// IMP=0x00100000003ce80d
- (void)updateWithPayLaterFinancingPlanTermsDetails:(id)arg1;	// IMP=0x00100000003ce66e
- (id)initWithPayLaterFinancingPlanTermsDetails:(id)arg1 forFinancingPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003ce49e

@end
