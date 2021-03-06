//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSMultipleChoiceAnswerFormat.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSMultipleChoiceAnswerFormat (PDSyncableItem)
+ (id)recordType;	// IMP=0x0020000000080bf6
+ (long long)migrationOrder;	// IMP=0x0010000000138843
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001386b2
+ (id)entityName;	// IMP=0x00100000001383db
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x0010000000080e2a
- (long long)syncBackend:(id)arg1;	// IMP=0x0010000000080d70
- (void)populate:(id)arg1;	// IMP=0x0010000000080cb9
- (id)initWithCKRecord:(id)arg1;	// IMP=0x0010000000080c03
- (_Bool)canCopyToDatabase:(id)arg1;	// IMP=0x00100000000c98e8
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x001000000013876c
- (void)bindTo:(id)arg1;	// IMP=0x0010000000138513
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000001383e8

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

