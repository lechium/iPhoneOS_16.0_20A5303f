//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SecureElementPassField
{
}

+ (id)_paymentPassFieldsQueryWithPredicate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x004000000026a768
+ (void)deleteSecureElementPassFieldsInDatabase:(id)arg1 forPassPID:(long long)arg2;	// IMP=0x001000000026a65b
+ (id)secureElementPassFieldsFromDatabaseSecureElementFields:(id)arg1;	// IMP=0x001000000026a20e
+ (id)secureElementPassFieldsInDatabase:(id)arg1 forPassPID:(long long)arg2;	// IMP=0x001000000026a131
+ (id)paymentPassFieldsInDatabase:(id)arg1 forQuery:(id)arg2;	// IMP=0x0010000000269ff2
+ (id)paymentPassFieldsInDatabase:(id)arg1 forPassPID:(long long)arg2 source:(long long)arg3;	// IMP=0x0010000000269f37
+ (id)_predicateForPassPID:(long long)arg1 source:(long long)arg2;	// IMP=0x0010000000269df8
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x0010000000269d85
+ (id)insertBalanceFieldUnit:(id)arg1 forPass:(id)arg2 passDictionaryKey:(id)arg3 order:(long long)arg4 inDatabase:(id)arg5;	// IMP=0x0010000000269cca
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00100000002698a5
+ (id)databaseTable;	// IMP=0x0010000000269898
- (id)initWithBalanceFieldUnit:(id)arg1 forPass:(id)arg2 passDictionaryKey:(id)arg3 order:(long long)arg4 inDatabase:(id)arg5;	// IMP=0x00400000002698d4

@end

