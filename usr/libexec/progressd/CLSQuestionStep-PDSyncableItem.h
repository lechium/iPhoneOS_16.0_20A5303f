//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSQuestionStep.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSQuestionStep (PDSyncableItem)
+ (id)payloadsForObject:(id)arg1 withSyncItem:(id)arg2 database:(id)arg3;	// IMP=0x0020000000047cae
+ (id)recordType;	// IMP=0x0010000000047823
+ (long long)migrationOrder;	// IMP=0x001000000006b281
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x001000000006ae56
+ (id)entityName;	// IMP=0x001000000006a9ec
- (id)payloadsWithClassIDs:(id)arg1 dependencies:(id)arg2;	// IMP=0x0010000000048408
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x0010000000047c8e
- (long long)syncBackend:(id)arg1;	// IMP=0x0010000000047bd4
- (void)populate:(id)arg1;	// IMP=0x0010000000047a0a
- (id)initWithCKRecord:(id)arg1;	// IMP=0x0010000000047830
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x001000000006af10
- (void)bindTo:(id)arg1;	// IMP=0x001000000006abe2
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000006a9f9
- (_Bool)canCopyToDatabase:(id)arg1;	// IMP=0x00100000000c9840

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end
