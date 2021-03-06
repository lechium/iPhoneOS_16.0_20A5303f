//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSContext.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSContext (PDSyncableItem)
+ (id)recordType;	// IMP=0x002000000011b857
+ (long long)migrationOrder;	// IMP=0x0010000000172b8b
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000171acf
+ (id)entityName;	// IMP=0x0010000000170d2d
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x001000000011c934
- (void)populate:(id)arg1;	// IMP=0x001000000011c32c
- (_Bool)shouldInsertInDatabase:(id)arg1;	// IMP=0x001000000011c25d
- (id)initWithCKRecord:(id)arg1;	// IMP=0x001000000011bbaf
- (void)futureProofedInitObjectIDFromCKRecord:(id)arg1;	// IMP=0x001000000011b864
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x0010000000172b96
@property(readonly, nonatomic) unsigned long long changeHash;
- (void)bindTo:(id)arg1;	// IMP=0x001000000017132e
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0010000000170d3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

