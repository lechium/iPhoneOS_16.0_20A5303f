//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSKeychainBackedKey, NSData, NSString;
@protocol SecCKKSKeyClass, SecCKKSProcessedState;

@interface CKKSKey
{
    _Bool _currentkey;	// 8 = 0x8
    NSString *_uuid;	// 16 = 0x10
    NSString *_parentKeyUUID;	// 24 = 0x18
    NSString<SecCKKSKeyClass> *_keyclass;	// 32 = 0x20
    NSString<SecCKKSProcessedState> *_state;	// 40 = 0x28
    CKKSKeychainBackedKey *_keycore;	// 48 = 0x30
    NSData *_wrappedKeyDataBackingStore;	// 56 = 0x38
}

+ (_Bool)intransactionRecordDeleted:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x0040000000101599
+ (_Bool)intransactionRecordChanged:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 flagHandler:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000100b2e
+ (id)loadFromProtobuf:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000010081c
+ (id)countsByClassWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000100628
+ (id)countsWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001003c5
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x00100000001000a2
+ (id)sqlColumns;	// IMP=0x0010000000100095
+ (id)sqlTable;	// IMP=0x0010000000100088
+ (id)localKeysForContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000fff09
+ (id)remoteKeysForContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ffd8a
+ (id)allKeysForContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ffc21
+ (id)currentKeysForClass:(id)arg1 contextID:(id)arg2 state:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000ffa10
+ (id)currentKeyForClass:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000ff928
+ (id)selfWrappedKeysForContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ff743
+ (id)tryFromDatabaseAnyState:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000ff5a0
+ (id)tryFromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000ff3eb
+ (id)fromDatabaseAnyState:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000ff248
+ (id)fromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000ff093
+ (id)isItemKeyForKeychainView:(struct SecDbItem *)arg1;	// IMP=0x00100000000fed64
+ (id)randomKeyWrappedBySelf:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000fecc6
+ (id)randomKeyWrappedByParent:(id)arg1 keyclass:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000feba8
+ (id)randomKeyWrappedByParent:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000feb1c
+ (id)loadKeyWithUUID:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000fea5c
- (void).cxx_destruct;	// IMP=0x00200000000fe9e7
@property(retain) NSData *wrappedKeyDataBackingStore; // @synthesize wrappedKeyDataBackingStore=_wrappedKeyDataBackingStore;
@property(retain) CKKSKeychainBackedKey *keycore; // @synthesize keycore=_keycore;
@property _Bool currentkey; // @synthesize currentkey=_currentkey;
@property(copy) NSString<SecCKKSProcessedState> *state; // @synthesize state=_state;
@property(retain) NSString<SecCKKSKeyClass> *keyclass; // @synthesize keyclass=_keyclass;
@property(retain) NSString *parentKeyUUID; // @synthesize parentKeyUUID=_parentKeyUUID;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
- (id)serializeAsProtobuf:(id *)arg1;	// IMP=0x00100000000fe69e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000fe60b
- (id)sqlValues;	// IMP=0x00100000000fe1d2
- (id)whereClauseToFindSelf;	// IMP=0x00100000000fe077
- (id)description;	// IMP=0x00100000000fdf18
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x00100000000fda79
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000000fd77c
- (void)setFromCKRecord:(id)arg1;	// IMP=0x00100000000fd439
- (id)CKRecordName;	// IMP=0x00100000000fd427
- (_Bool)saveToDatabaseAsOnlyCurrentKeyForClassAndState:(id *)arg1;	// IMP=0x00100000000fd184
- (_Bool)deleteKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x00100000000fd102
- (_Bool)loadKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x00100000000fd080
- (_Bool)saveKeyMaterialToKeychain:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000000fcfeb
- (_Bool)saveKeyMaterialToKeychain:(id *)arg1;	// IMP=0x00100000000fcf64
- (id)decryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000fce91
- (id)encryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000fcdbe
- (id)unwrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000fcd08
- (id)wrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000fcc52
- (_Bool)trySelfWrappedKeyCandidate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000fcba8
- (_Bool)tlkMaterialPresentOrRecoverableViaTLKShareForContextID:(id)arg1 forTrustStates:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000fc5cf
- (_Bool)validTLK:(id *)arg1;	// IMP=0x00100000000fc427
- (_Bool)unwrapViaTLKSharesTrustedBy:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000fbe3f
- (id)unwrapViaKeyHierarchy:(id *)arg1;	// IMP=0x00100000000fba02
- (id)ensureKeyLoadedForContextID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000fb758
- (id)topKeyInAnyState:(id *)arg1;	// IMP=0x00100000000fb421
- (_Bool)wrapUnder:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000fb26c
- (_Bool)wrapsSelf;	// IMP=0x00100000000fb1f8
@property(readonly) NSString *zoneName;
@property(readonly) NSData *wrappedKeyData;
- (id)getKeychainBackedKey:(id *)arg1;	// IMP=0x00100000000facec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000faa3b
- (void)dealloc;	// IMP=0x00100000000faa0c
- (id)initWithKeyCore:(id)arg1 contextID:(id)arg2 state:(id)arg3 currentkey:(_Bool)arg4;	// IMP=0x00100000000fa841
- (id)initWithWrappedKeyData:(id)arg1 contextID:(id)arg2 uuid:(id)arg3 parentKeyUUID:(id)arg4 keyclass:(id)arg5 state:(id)arg6 zoneID:(id)arg7 encodedCKRecord:(id)arg8 currentkey:(long long)arg9;	// IMP=0x00100000000fa6fb
- (id)initSelfWrappedWithAESKey:(id)arg1 contextID:(id)arg2 uuid:(id)arg3 keyclass:(id)arg4 state:(id)arg5 zoneID:(id)arg6 encodedCKRecord:(id)arg7 currentkey:(long long)arg8;	// IMP=0x00100000000fa4e9
- (id)init;	// IMP=0x00100000000fa4ba

@end

