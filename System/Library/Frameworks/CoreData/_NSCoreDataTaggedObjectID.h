//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _NSCoreDataTaggedObjectID
{
}

+ (_Bool)_usesTaggedPointers;	// IMP=0x008000000007ec09
+ (void)_storeDeallocated;	// IMP=0x008000000007ec03
+ (void)_setStoreInfo1:(id)arg1;	// IMP=0x008000000007ebfd
+ (id)_storeInfo1;	// IMP=0x008000000007ebf7
+ (void)setObjectStoreIdentifier:(id)arg1;	// IMP=0x008000000007ebf1
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;	// IMP=0x008000000007eba6
+ (unsigned int)allocateBatch:(id *)arg1 count:(unsigned int)arg2;	// IMP=0x008000000007eba0
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;	// IMP=0x008000000007e97a
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000007e6e0
+ (id)alloc;	// IMP=0x008000000007e6d7
+ (void)initialize;	// IMP=0x008000000007e5f6
- (id)_storeInfo1;	// IMP=0x000000000007ebac
- (id)_retainedURIString;	// IMP=0x000000000007e880
- (_Bool)_isPersistentStoreAlive;	// IMP=0x000000000007e851
- (id)_storeIdentifier;	// IMP=0x000000000007e82d
- (long long)_referenceData64;	// IMP=0x000000000007e7eb
- (_Bool)isTemporaryID;	// IMP=0x000000000007e7d7
- (id)persistentStore;	// IMP=0x000000000007e7b4
- (id)entityName;	// IMP=0x000000000007e790
- (id)entity;	// IMP=0x000000000007e76c
- (unsigned long long)hash;	// IMP=0x000000000007e763
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007e757
- (id)copy;	// IMP=0x000000000007e74e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007e745
- (void)dealloc;	// IMP=0x000000000007e73f
- (unsigned long long)retainCount;	// IMP=0x000000000007e732
- (oneway void)release;	// IMP=0x000000000007e72c
- (id)retain;	// IMP=0x000000000007e723
- (id)initWithObject:(id)arg1;	// IMP=0x000000000007e6ef
- (id)initWithPK64:(long long)arg1;	// IMP=0x000000000007e6e9

@end

