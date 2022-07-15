//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PhysicalCard
{
}

+ (id)_propertySettersForPhysicalCard;	// IMP=0x0040000000346541
+ (id)_physicalCardsWithQuery:(id)arg1;	// IMP=0x001000000034626d
+ (id)_predicateForPhysicalCardIdentifier:(id)arg1;	// IMP=0x0010000000346018
+ (id)_predicateForPhysicalCardStatusUpdatePID:(long long)arg1;	// IMP=0x0010000000345fa5
+ (id)_predicateForAccountPID:(long long)arg1 physicalCardIdentifier:(id)arg2;	// IMP=0x0010000000345e8c
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x0010000000345e19
+ (id)physicalCardsForPhysicalCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000345d65
+ (id)physicalCardsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000345cb1
+ (void)deletePhysicalCardsForPhysicalCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000345b88
+ (void)deletePhysicalCardsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000345aef
+ (id)insertPhysicalCards:(id)arg1 forPhysicalCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000345569
+ (id)insertOrUpdatePhysicalCard:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000345420
+ (id)insertOrUpdatePhysicalCards:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000345083
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000344911
+ (id)databaseTable;	// IMP=0x0010000000344904
- (id)physicalCard;	// IMP=0x004000000034603b
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000345c21
- (void)updateWithPhysicalCard:(id)arg1;	// IMP=0x001000000034577f
- (id)initWithPhysicalCard:(id)arg1 forPhysicalCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000344d2a
- (id)initWithPhysicalCard:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000034495a

@end
