//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BalanceReminder
{
}

+ (id)_propertySetters;	// IMP=0x00400000000ea737
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x00100000000ea508
+ (id)_predicateForBalanceIdentifier:(id)arg1;	// IMP=0x00100000000ea395
+ (id)_predicateForBalanceReminder:(id)arg1 passPID:(long long)arg2;	// IMP=0x00100000000ea24d
+ (id)_predicateForBalanceReminder:(id)arg1 passIdentifier:(id)arg2;	// IMP=0x00100000000ea0ed
+ (id)databaseTable;	// IMP=0x00100000000ea0e0
+ (id)insertOrUpdateBalanceReminder:(id)arg1 forBalanceIdentifier:(id)arg2 pass:(id)arg3 database:(id)arg4;	// IMP=0x00100000000e9bc6
+ (void)deleteAnyInDatabase:(id)arg1 forPassIdentifier:(id)arg2;	// IMP=0x00100000000e9b2d
+ (id)balanceReminderInDatabase:(id)arg1 forQuery:(id)arg2;	// IMP=0x00100000000e98a8
+ (id)balanceReminderInDatabase:(id)arg1 forBalanceIdentifier:(id)arg2 passIdentifier:(id)arg3;	// IMP=0x00100000000e97ed
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000000e970f
- (void)updateWithBalanceReminder:(id)arg1;	// IMP=0x00400000000ea663
- (id)balanceReminder;	// IMP=0x00100000000ea52b
- (id)initWithBalanceReminder:(id)arg1 forBalanceIdentifier:(id)arg2 pass:(id)arg3 database:(id)arg4;	// IMP=0x00100000000e9e9b

@end

