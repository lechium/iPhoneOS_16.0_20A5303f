//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol SecCKKSKeyClass;

@interface CKKSCurrentKeyPointer
{
    NSString<SecCKKSKeyClass> *_keyclass;	// 8 = 0x8
    NSString *_currentKeyUUID;	// 16 = 0x10
}

+ (_Bool)intransactionRecordDeleted:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x00400000000a75c4
+ (_Bool)intransactionRecordChanged:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 flagHandler:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000a6def
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x00100000000a6bed
+ (id)sqlColumns;	// IMP=0x00100000000a6be0
+ (id)sqlTable;	// IMP=0x00100000000a6bd3
+ (_Bool)deleteAll:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a6abd
+ (id)all:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a69e3
+ (id)forKeyClass:(id)arg1 contextID:(id)arg2 withKeyUUID:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000a6875
+ (id)tryFromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000a6746
+ (id)fromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000a6617
- (void).cxx_destruct;	// IMP=0x00200000000a65e6
@property(retain) NSString *currentKeyUUID; // @synthesize currentKeyUUID=_currentKeyUUID;
@property(retain) NSString<SecCKKSKeyClass> *keyclass; // @synthesize keyclass=_keyclass;
- (id)sqlValues;	// IMP=0x00100000000a6333
- (id)whereClauseToFindSelf;	// IMP=0x00100000000a6202
- (void)setFromCKRecord:(id)arg1;	// IMP=0x00100000000a5f47
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x00100000000a5d98
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000000a5a5e
- (id)CKRecordName;	// IMP=0x00100000000a5a4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a578b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a5692
- (id)description;	// IMP=0x00100000000a5586
- (id)initForClass:(id)arg1 contextID:(id)arg2 currentKeyUUID:(id)arg3 zoneID:(id)arg4 encodedCKRecord:(id)arg5;	// IMP=0x00100000000a5435

@end

