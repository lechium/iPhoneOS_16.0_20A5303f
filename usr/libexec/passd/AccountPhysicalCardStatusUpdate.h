//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountPhysicalCardStatusUpdate
{
}

+ (id)_propertySettersForAccountPhysicalCardStatusUpdate;	// IMP=0x004000000034d53e
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x001000000034d4cb
+ (id)databaseTable;	// IMP=0x001000000034d4be
+ (void)deletePhysicalCardStatusUpdatesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000034d395
+ (id)insertPhysicalCardStatusUpdate:(id)arg1 forEventPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000034d004
+ (id)physicalCardStatusUpdatesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000034cde5
- (_Bool)deleteFromDatabase;	// IMP=0x004000000034d42e
- (id)physicalCardStatusUpdate;	// IMP=0x001000000034d1a6

@end

