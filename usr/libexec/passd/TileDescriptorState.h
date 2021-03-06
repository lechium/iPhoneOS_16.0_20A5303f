//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TileDescriptorState
{
}

+ (id)_createStateForPID:(long long)arg1 withProperties:(id)arg2 values:(id *)arg3 propertySetters:(id)arg4 indices:(CDStruct_4bcfbbae)arg5 inDatabase:(id)arg6;	// IMP=0x00400000001ca3ab
+ (id)_propertySettersWithProperties:(id)arg1 effectiveProperties:(id *)arg2 indices:(CDStruct_4bcfbbae *)arg3;	// IMP=0x00100000001c9fae
+ (id)statesInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x00100000001c9949
+ (id)insertState:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001c96aa
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000001c944c
+ (id)databaseTable;	// IMP=0x00100000001c943f
- (id)stateOverride;	// IMP=0x00400000001c9f1a
- (id)passTileDescriptorState;	// IMP=0x00100000001c9d04
- (_Bool)deleteFromDatabase;	// IMP=0x00100000001c98db
- (id)initWithState:(id)arg1 tileStateOverride:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001c9520

@end

