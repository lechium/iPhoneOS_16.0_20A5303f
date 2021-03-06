//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKVStore, NSString;
@protocol OS_dispatch_queue;

@interface IMDCKMockRecordZone : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    IDSKVStore *_recordStore;	// 24 = 0x18
}

@property(retain, nonatomic) IDSKVStore *recordStore; // @synthesize recordStore=_recordStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_handleModifyRecordsOperation:(id)arg1;	// IMP=0x0000000000097923
- (id)_serializedCKRecordData:(id)arg1;	// IMP=0x00000000000978c1
- (void)_handleFetchZoneChangesOperation:(id)arg1;	// IMP=0x00000000000972cb
- (id)_ckRecordFromData:(id)arg1;	// IMP=0x0000000000097260
- (unsigned long long)_fetchResultLimit:(id)arg1;	// IMP=0x0000000000097235
- (id)_fetchRecordZoneChangesOptionsFromOperation:(id)arg1;	// IMP=0x00000000000971fb
- (void)handleOperation:(id)arg1;	// IMP=0x000000000009704e
- (void)dealloc;	// IMP=0x0000000000096ffb
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000096f52
- (id)_kvStorePath;	// IMP=0x0000000000096f22

@end

