//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObjectID.h"

@class NSEntityDescription;

__attribute__((visibility("hidden")))
@interface NSTemporaryObjectID : NSManagedObjectID
{
    int _cd_rc;	// 8 = 0x8
    int _counter;	// 12 = 0xc
    NSEntityDescription *_entity;	// 16 = 0x10
}

+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;	// IMP=0x006000000020818e
+ (id)initWithEntity:(id)arg1;	// IMP=0x0060000000208181
+ (unsigned int)allocateBatch:(id *)arg1 forEntity:(id)arg2 count:(unsigned int)arg3;	// IMP=0x00600000002080ea
+ (void)_release_1;	// IMP=0x0060000000207fa0
+ (id)_retain_1;	// IMP=0x0060000000207f85
+ (long long)version;	// IMP=0x0060000000207f7a
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x0060000000207f72
+ (id)alloc;	// IMP=0x0060000000207f69
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000207f60
+ (_Bool)_usesTaggedPointers;	// IMP=0x0060000000207f58
+ (Class)classForStore:(id)arg1;	// IMP=0x0060000000207b95
+ (void)setObjectStoreIdentifier:(id)arg1;	// IMP=0x0060000000207b42
+ (void)_storeDeallocated;	// IMP=0x0060000000207b27
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000207b1f
+ (void)initialize;	// IMP=0x0060000000207a44
- (id)_referenceData;	// IMP=0x00000000002084f9
- (id)URIRepresentation;	// IMP=0x000000000020848a
- (id)_retainedURIString;	// IMP=0x00000000002083a3
- (_Bool)_isPersistentStoreAlive;	// IMP=0x0000000000208377
- (id)_storeIdentifier;	// IMP=0x0000000000208307
- (int)_temporaryIDCounter;	// IMP=0x00000000002082f7
- (_Bool)isTemporaryID;	// IMP=0x00000000002082ef
- (id)entity;	// IMP=0x00000000002082de
- (void)_setPersistentStore:(id)arg1;	// IMP=0x000000000020828f
- (id)persistentStore;	// IMP=0x000000000020826f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020821f
- (unsigned long long)hash;	// IMP=0x00000000002081d9
- (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;	// IMP=0x00000000002081c0
- (id)initWithEntity:(id)arg1;	// IMP=0x00000000002081a7
- (void)dealloc;	// IMP=0x0000000000208045
- (unsigned long long)retainCount;	// IMP=0x0000000000208031
- (oneway void)release;	// IMP=0x0000000000208001
- (id)retain;	// IMP=0x0000000000207fed

@end

