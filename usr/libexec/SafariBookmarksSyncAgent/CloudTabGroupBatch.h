//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface CloudTabGroupBatch : NSObject
{
    NSMutableSet *_items;	// 8 = 0x8
    NSMutableSet *_deletedRecordZoneIDsInPrivateDatabase;	// 16 = 0x10
    NSMutableSet *_updatedRecordsInPrivateDatabase;	// 24 = 0x18
    NSMutableSet *_deletedRecordIDsInPrivateDatabase;	// 32 = 0x20
    NSMutableSet *_deletedRecordZoneIDsInSharedDatabase;	// 40 = 0x28
    NSMutableSet *_updatedRecordsInSharedDatabase;	// 48 = 0x30
    NSMutableSet *_deletedRecordIDsInSharedDatabase;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000009da7a
- (void)addItem:(id)arg1;	// IMP=0x001000000009d563
@property(readonly, copy, nonatomic) NSSet *deletedRecordIDsInSharedDatabase;
@property(readonly, copy, nonatomic) NSSet *updatedRecordsInSharedDatabase;
@property(readonly, copy, nonatomic) NSSet *deletedRecordIDsInPrivateDatabase;
@property(readonly, copy, nonatomic) NSSet *updatedRecordsInPrivateDatabase;
@property(readonly, copy, nonatomic) NSSet *deletedRecordZoneIDsInPrivateDatabase;
@property(readonly, copy, nonatomic) NSSet *changes;
- (unsigned long long)_sizeOfRecordUpdateBatch:(id)arg1;	// IMP=0x001000000009cf6f
@property(readonly, nonatomic) _Bool isFull;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)init;	// IMP=0x001000000009cba6

@end
