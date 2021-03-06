//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (IMAdditions)
+ (id)mergePredicate:(id)arg1 andPredicate:(id)arg2;	// IMP=0x002000000000bcf1
- (_Bool)im_isPerformingSafeAccess;	// IMP=0x001000000000cae7
- (void)im_performSafeAccess:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c93d
- (void)im_popSafeAccessState;	// IMP=0x001000000000c937
- (void)im_pushSafeAccessState;	// IMP=0x001000000000c931
- (id)entity:(id)arg1 withPredicate:(id)arg2;	// IMP=0x001000000000c908
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(_Bool)arg4 fetchLimit:(unsigned long long)arg5;	// IMP=0x001000000000c8ec
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(_Bool)arg4 fetchLimit:(unsigned long long)arg5 prefetchRelationships:(id)arg6;	// IMP=0x001000000000c7ba
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 prefetchRelationships:(id)arg5;	// IMP=0x001000000000c5e6
- (id)unbatchedObjectsWithPredicate:(id)arg1 forEntity:(id)arg2;	// IMP=0x001000000000c4ae
- (id)objectIDsWithPredicate:(id)arg1 forEntity:(id)arg2;	// IMP=0x001000000000c367
- (id)newByClass:(Class)arg1;	// IMP=0x001000000000c308
- (id)copyEntityProperty:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3;	// IMP=0x001000000000c260
- (id)copyEntityPropertyArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5;	// IMP=0x001000000000c199
- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5;	// IMP=0x001000000000c17b
- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5 distinct:(_Bool)arg6;	// IMP=0x001000000000bedc
- (unsigned long long)countEntity:(id)arg1 withPredicate:(id)arg2;	// IMP=0x001000000000bdae
- (void)batchDeleteEntity:(id)arg1 matching:(id)arg2 prefetchRelationships:(id)arg3;	// IMP=0x001000000000caef
@end

