//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObjectID.h"

__attribute__((visibility("hidden")))
@interface _NSCoreManagedObjectID : NSManagedObjectID
{
}

+ (void)_storeDeallocated;	// IMP=0x008000000007d9aa
+ (id)_storeInfo1;	// IMP=0x008000000007d992
+ (void)_setStoreInfo1:(id)arg1;	// IMP=0x008000000007d979
+ (void)setObjectStoreIdentifier:(id)arg1;	// IMP=0x008000000007d926
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;	// IMP=0x008000000007d770
+ (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x008000000007d629
+ (void)_release_1;	// IMP=0x008000000007d61f
+ (void)release;	// IMP=0x008000000007d619
+ (id)_retain_1;	// IMP=0x008000000007d5fe
+ (id)retain;	// IMP=0x008000000007d5f5
+ (long long)version;	// IMP=0x008000000007d5ea
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x008000000007d5e2
+ (id)alloc;	// IMP=0x008000000007d5d6
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000007d5ca
+ (unsigned int)allocateBatch:(id *)arg1 count:(unsigned int)arg2;	// IMP=0x008000000007d5a0
+ (_Bool)_usesTaggedPointers;	// IMP=0x008000000007d598
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;	// IMP=0x008000000007d090
+ (void)initialize;	// IMP=0x008000000007d018
+ (char *)generatedNameSuffix;	// IMP=0x008000000007cdd5
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x008000000007cdcd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007df56
- (unsigned long long)hash;	// IMP=0x000000000007df4c
- (id)URIRepresentation;	// IMP=0x000000000007db24
- (unsigned long long)retainCount;	// IMP=0x000000000007db10
- (_Bool)_isPersistentStoreAlive;	// IMP=0x000000000007dae4
- (id)_storeInfo1;	// IMP=0x000000000007dac4
- (id)_storeIdentifier;	// IMP=0x000000000007da54
- (_Bool)isTemporaryID;	// IMP=0x000000000007da4c
- (id)persistentStore;	// IMP=0x000000000007da2c
- (id)entityName;	// IMP=0x000000000007da01
- (id)entity;	// IMP=0x000000000007d9e1
- (oneway void)release;	// IMP=0x000000000007d9d4
- (id)retain;	// IMP=0x000000000007d9c7

@end
