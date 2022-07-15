//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSMutableDictionary, NSString;

@interface CKKSManifestLeafRecord
{
    NSString *_uuid;	// 8 = 0x8
    NSMutableDictionary *_recordDigestDict;	// 16 = 0x10
    NSString *_zoneName;	// 24 = 0x18
    NSData *_derData;	// 32 = 0x20
    NSData *_digestValue;	// 40 = 0x28
}

+ (id)sqlTable;	// IMP=0x004000000005e632
+ (id)sqlColumns;	// IMP=0x001000000005e625
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x001000000005e42a
+ (id)leafRecordForPendingRecord:(id)arg1;	// IMP=0x001000000005e312
+ (id)tryLeafRecordForID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005e23b
+ (id)leafRecordForID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005e164
+ (id)leafUUIDForRecordID:(id)arg1;	// IMP=0x001000000005e0c6
+ (_Bool)recordExistsForID:(id)arg1;	// IMP=0x001000000005df39
- (void).cxx_destruct;	// IMP=0x002000000005ddb3
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSDictionary *recordDigestDict; // @synthesize recordDigestDict=_recordDigestDict;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)clearDigest;	// IMP=0x001000000005dd39
@property(readonly, nonatomic) NSData *digestValue;
@property(readonly, nonatomic) NSData *derData;
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x001000000005dab6
- (void)setFromCKRecord:(id)arg1;	// IMP=0x001000000005d804
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x001000000005d711
- (id)ckRecordType;	// IMP=0x001000000005d6f2
- (id)CKRecordName;	// IMP=0x001000000005d6bb
- (id)whereClauseToFindSelf;	// IMP=0x001000000005d57f
- (id)sqlValues;	// IMP=0x001000000005d3b2
- (id)initWithUUID:(id)arg1 digest:(id)arg2 recordDigestDict:(id)arg3 zone:(id)arg4 encodedRecord:(id)arg5;	// IMP=0x001000000005d334
- (id)initWithUUID:(id)arg1 digest:(id)arg2 recordDigestDict:(id)arg3 zone:(id)arg4;	// IMP=0x001000000005d14d
- (id)initWithCKRecord:(id)arg1;	// IMP=0x001000000005ce72
- (id)description;	// IMP=0x001000000005cd69

@end
