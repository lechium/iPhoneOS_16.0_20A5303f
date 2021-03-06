//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSCollectionItem.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSCollectionItem (CLSSyncableItem)
+ (id)recordType;	// IMP=0x002000000006ef6f
+ (long long)migrationOrder;	// IMP=0x00100000000e1923
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000e1765
+ (id)entityName;	// IMP=0x00100000000e1487
@property(readonly, nonatomic) NSString *parentReferenceName;
- (long long)syncOrder;	// IMP=0x001000000006f22d
- (long long)syncBackend:(id)arg1;	// IMP=0x001000000006f1e5
- (void)populate:(id)arg1;	// IMP=0x001000000006f0ad
- (id)initWithCKRecord:(id)arg1;	// IMP=0x001000000006ef87
@property(readonly, nonatomic) long long syncableItemType;
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x00100000000e192e
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000000e1608
- (void)bindTo:(id)arg1;	// IMP=0x00100000000e1494

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

