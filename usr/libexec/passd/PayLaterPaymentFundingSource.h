//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterPaymentFundingSource
{
}

+ (id)_propertySettersForFundingSource;	// IMP=0x004000000038e44e
+ (id)_propertyValuesForFundingSource:(id)arg1;	// IMP=0x001000000038e386
+ (id)_predicateForInstallmentPaymentPID:(long long)arg1;	// IMP=0x001000000038e313
+ (void)deleteInstallmentPaymentFundingSourceForInstallmentPaymentPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000038df88
+ (id)installmentPaymentFundingSourceForInstallmentPaymentPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000038dede
+ (id)insertOrUpdateInstallmentPaymentFundingSource:(id)arg1 forInstallmentPaymentPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000038dc07
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000038dac7
+ (id)databaseTable;	// IMP=0x001000000038daba
- (id)fundingSource;	// IMP=0x004000000038e0e8
- (_Bool)deleteFromDatabase;	// IMP=0x001000000038e021
- (void)updateWithFundingSource:(id)arg1;	// IMP=0x001000000038de64
- (id)initWithFundingSource:(id)arg1 forInstallmentPaymentPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000038db10

@end

