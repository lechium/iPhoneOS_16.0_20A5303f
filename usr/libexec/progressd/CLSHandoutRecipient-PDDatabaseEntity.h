//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSHandoutRecipient.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSHandoutRecipient (PDDatabaseEntity)
+ (id)entityDidInsertNotificationName;	// IMP=0x002000000004f8c5
+ (long long)migrationOrder;	// IMP=0x001000000004f8ba
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x001000000004f566
+ (id)entityName;	// IMP=0x001000000004f2e7
+ (id)payloadsForObject:(id)arg1 withSyncItem:(id)arg2 database:(id)arg3;	// IMP=0x00100000000ad4e3
+ (id)recordType;	// IMP=0x00100000000acf40
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x001000000004f768
- (void)bindTo:(id)arg1;	// IMP=0x001000000004f3ed
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000004f2f4
- (id)payloadsWithClassIDs:(id)arg1 dependencies:(id)arg2;	// IMP=0x00100000000ad778
- (long long)syncBackend:(id)arg1;	// IMP=0x00100000000ad429
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x00100000000ad409
- (void)populate:(id)arg1;	// IMP=0x00100000000ad02c
- (id)initWithCKRecord:(id)arg1;	// IMP=0x00100000000acf4d
- (_Bool)canCopyToDatabase:(id)arg1;	// IMP=0x00100000000c93e5

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

