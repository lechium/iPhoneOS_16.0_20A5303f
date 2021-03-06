//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSHandoutAssignedItem.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSHandoutAssignedItem (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x00200000000102a2
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x001000000001018c
+ (id)entityName;	// IMP=0x001000000000fd06
+ (id)recordType;	// IMP=0x0010000000167cd1
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x00100000000102ad
- (void)bindTo:(id)arg1;	// IMP=0x001000000000ff57
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000000fd13
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x0010000000168054
- (void)populate:(id)arg1;	// IMP=0x0010000000167e85
- (id)initWithCKRecord:(id)arg1;	// IMP=0x0010000000167cde

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

