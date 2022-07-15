//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountWebServiceEndpointMetadata
{
}

+ (id)_propertySettersForAccountEndpointMetadata;	// IMP=0x00400000003484ca
+ (id)_propertyValuesForAccountEndpointMetadata:(id)arg1;	// IMP=0x00100000003483d2
+ (id)_predicateFoEndpoint:(unsigned long long)arg1;	// IMP=0x00100000003481f2
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x001000000034817f
+ (id)_predicateForAccountPID:(long long)arg1 endpoint:(unsigned long long)arg2;	// IMP=0x0010000000348084
+ (void)deleteEntitiesForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000347f65
+ (id)anyInDatabase:(id)arg1 withAccountPID:(long long)arg2 endpoint:(unsigned long long)arg3;	// IMP=0x0010000000347ed4
+ (id)anyInDatabase:(id)arg1 accountIdentifier:(id)arg2 endpoint:(unsigned long long)arg3;	// IMP=0x0010000000347e24
+ (id)anyInDatabase:(id)arg1 endpointMetadata:(id)arg2;	// IMP=0x0010000000347d6d
+ (id)insertOrUpdateinitWithAccountEndpointMetadata:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000347baa
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x0010000000347a15
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000003479e6
+ (id)databaseTable;	// IMP=0x00100000003479d9
- (id)endpointMetadata;	// IMP=0x0040000000348265
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000347ffe
- (void)updateWithAccountEndpointMetadata:(id)arg1;	// IMP=0x0010000000347cf3
- (id)initWithAccountEndpointMetadata:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000347ac9

@end
