//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKObject.h>

@interface HKObject (HDCodingSupport)
+ (id)hd_allObjectsToInsertWithObjects:(id)arg1;	// IMP=0x0060000000056ff6
+ (Class)hd_dataEntityClass;	// IMP=0x006000000085a0fe
- (_Bool)addCodableRepresentationToCollectionForSync:(id)arg1;	// IMP=0x0010000000254fd5
- (_Bool)addCodableRepresentationToCollectionForJournal:(id)arg1;	// IMP=0x0010000000017357
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x0010000000254fcb
- (id)codableRepresentationForSync;	// IMP=0x0010000000017591
- (_Bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000299a33
- (id)hd_relatedJournalEntries;	// IMP=0x001000000001734a
- (long long)entityType;	// IMP=0x0010000000299a2a
- (id)hd_associatedSampleTypes;	// IMP=0x001000000085a10e
- (id)hd_associatedObjects;	// IMP=0x00100000000572db
- (Class)hd_dataEntityClass;	// IMP=0x001000000001703e
- (id)hd_sampleType;	// IMP=0x001000000085a0f6
@end

