//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@interface NSManagedObject (IC)
+ (void)ic_enumerateObjectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 context:(id)arg4 batchSize:(unsigned long long)arg5 saveAfterBatch:(_Bool)arg6 usingBlock:(CDUnknownBlockType)arg7;	// IMP=0x0060000000022be4
+ (id)ic_objectIDsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0060000000022bcd
+ (id)ic_objectIDsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;	// IMP=0x0060000000022ba7
+ (id)ic_objectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0060000000022b90
+ (id)ic_objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 fetchLimit:(unsigned long long)arg4 context:(id)arg5;	// IMP=0x0060000000022b6c
+ (id)ic_objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;	// IMP=0x0060000000022b47
+ (id)ic_resultsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 resultType:(unsigned long long)arg3 relationshipKeyPathsForPrefetching:(id)arg4 fetchLimit:(unsigned long long)arg5 context:(id)arg6;	// IMP=0x006000000002284a
+ (id)ic_permanentObjectIDsFromObjects:(id)arg1;	// IMP=0x0060000000021e1d
+ (id)ic_objectIDsFromObjects:(id)arg1;	// IMP=0x0060000000021c6b
+ (id)ic_objectsFromObjectIDs:(id)arg1 context:(id)arg2;	// IMP=0x0060000000021c54
+ (id)ic_objectsFromObjectIDs:(id)arg1 relationshipKeyPathsForPrefetching:(id)arg2 context:(id)arg3;	// IMP=0x0060000000021a87
+ (id)ic_existingObjectWithID:(id)arg1 context:(id)arg2;	// IMP=0x00600000000218a4
+ (_Bool)ic_containsFaultingManagedObjects:(id)arg1;	// IMP=0x006000000002182d
- (id)ic_postNotificationOnMainThreadAfterSaveWithName:(id)arg1;	// IMP=0x0010000000022460
- (void)ic_postNotificationOnMainThreadWithName:(id)arg1;	// IMP=0x0010000000022169
- (id)ic_permanentObjectID;	// IMP=0x001000000002213b
- (_Bool)ic_obtainPermanentObjectIDIfNecessary;	// IMP=0x0010000000021fcf
@end
