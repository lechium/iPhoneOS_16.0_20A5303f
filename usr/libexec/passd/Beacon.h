//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface Beacon
{
}

+ (id)_propertySettersForBeacon;	// IMP=0x0040000000343208
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000034316f
+ (id)beaconsInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x00100000003430e3
+ (id)beaconsInDatabase:(id)arg1 forPass:(id)arg2;	// IMP=0x0010000000343057
+ (id)_predicateForPass:(id)arg1;	// IMP=0x0010000000343023
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x0010000000342fb0
+ (id)_beaconsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0010000000342db6
+ (void)insertBeacons:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000342c23
+ (id);	// IMP=0x00100000003429e0
+ (id)databaseTable;	// IMP=0x00100000003429d3
- (id)initWithBeacon:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0040000000342a0f

@end
