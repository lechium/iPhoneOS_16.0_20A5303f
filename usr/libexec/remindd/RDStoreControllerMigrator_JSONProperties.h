//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RDStoreControllerMigrator_JSONProperties : NSObject
{
    _Bool _migratedAccount;	// 8 = 0x8
    unsigned long long _totalMigratedCount;	// 16 = 0x10
    unsigned long long _totalListCount;	// 24 = 0x18
    unsigned long long _migratedListsCount;	// 32 = 0x20
}

@property(nonatomic) unsigned long long migratedListsCount; // @synthesize migratedListsCount=_migratedListsCount;
@property(nonatomic) _Bool migratedAccount; // @synthesize migratedAccount=_migratedAccount;
@property(nonatomic) unsigned long long totalListCount; // @synthesize totalListCount=_totalListCount;
@property(nonatomic) unsigned long long totalMigratedCount; // @synthesize totalMigratedCount=_totalMigratedCount;
- (id)reminderIDsMergeableOrderingReplicaIDSourceWithAccountID:(id)arg1 listID:(id)arg2;	// IMP=0x0010000000065a16
- (void)migrateCRDTsInList:(id)arg1;	// IMP=0x0010000000065333
- (void)migrateCRDTsInAccount:(id)arg1;	// IMP=0x0010000000064d0f
- (void)migrateCRDTsInObject:(id)arg1;	// IMP=0x0010000000064c77
- (void)migrateTokenResolutionMapInObject:(id)arg1;	// IMP=0x0010000000064af1
- (void)migrateStore:(id)arg1;	// IMP=0x00100000000640d0
- (void)migrateStoreIfNeeded:(id)arg1 metadata:(id)arg2;	// IMP=0x001000000006400f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
