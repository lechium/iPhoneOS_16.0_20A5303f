//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (PKAdditions)
+ (id)pk_recordWithSystemFieldsData:(id)arg1;	// IMP=0x0060000000200627
- (id)pk_systemFieldsData;	// IMP=0x00100000002006d2
- (_Bool)pk_isRemoteAsset;	// IMP=0x0010000000200592
- (_Bool)pk_isPassCatalog;	// IMP=0x00100000002004fd
- (_Bool)pk_isPass;	// IMP=0x0010000000200468
- (id)_dictionaryFromStringValue:(id)arg1;	// IMP=0x001000000020031f
- (id)_arrayFromStringValue:(id)arg1;	// IMP=0x00100000002001d6
- (id)_copyArray:(id)arg1 forNewRecordZone:(id)arg2;	// IMP=0x00100000001fff8e
- (id)_copyReference:(id)arg1 forNewRecordZone:(id)arg2;	// IMP=0x00100000001ffe68
- (id)pk_share;	// IMP=0x00100000001ffe29
- (id)pk_participantWithLookupInfo:(id)arg1;	// IMP=0x00100000001ffbdf
- (id)pk_participantWithPhoneNumber:(id)arg1;	// IMP=0x00100000001ffb55
- (id)pk_participantWithEmailAddress:(id)arg1;	// IMP=0x00100000001ffacb
- (id)pk_participantWithRecipientHandle:(id)arg1;	// IMP=0x00100000001ffa4f
- (id)pk_copyRecordForNewRecordZone:(id)arg1;	// IMP=0x00100000001ff4de
- (unsigned long long)pk_hash;	// IMP=0x00100000001fef97
- (id)description;	// IMP=0x00100000001fef34
- (id)pk_description;	// IMP=0x00100000001fe923
- (id)pk_objectForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00100000001fe7e0
- (id)pk_referenceForKey:(id)arg1;	// IMP=0x00100000001fe77c
- (unsigned long long)pk_unsignedIntegerForKey:(id)arg1;	// IMP=0x00100000001fe72f
- (unsigned long long)pk_uint64ForKey:(id)arg1;	// IMP=0x00100000001fe6e2
- (int)pk_intForKey:(id)arg1;	// IMP=0x00100000001fe695
- (long long)pk_integerForKey:(id)arg1;	// IMP=0x00100000001fe648
- (_Bool)pk_boolForKey:(id)arg1;	// IMP=0x00100000001fe5fb
- (id)pk_arrayForKey:(id)arg1;	// IMP=0x00100000001fe48a
- (id)pk_dictionaryForKey:(id)arg1;	// IMP=0x00100000001fe42b
- (id)pk_urlForKey:(id)arg1;	// IMP=0x00100000001fe3cb
- (id)pk_decimalNumberForKey:(id)arg1;	// IMP=0x00100000001fe36b
- (id)pk_locationForKey:(id)arg1;	// IMP=0x00100000001fe307
- (id)pk_dataForKey:(id)arg1;	// IMP=0x00100000001fe2a3
- (id)pk_dateForKey:(id)arg1;	// IMP=0x00100000001fe23f
- (id)pk_numberForKey:(id)arg1;	// IMP=0x00100000001fe1db
- (id)pk_stringForKey:(id)arg1;	// IMP=0x00100000001fe177
- (id)pk_encryptedObjectForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00100000001fe00f
- (unsigned long long)pk_encryptedUnsignedIntegerForKey:(id)arg1;	// IMP=0x00100000001fdfc2
- (unsigned long long)pk_encryptedUint64ForKey:(id)arg1;	// IMP=0x00100000001fdf75
- (int)pk_encryptedIntForKey:(id)arg1;	// IMP=0x00100000001fdf28
- (long long)pk_encryptedIntegerForKey:(id)arg1;	// IMP=0x00100000001fdedb
- (_Bool)pk_encryptedBoolForKey:(id)arg1;	// IMP=0x00100000001fde8e
- (id)pk_encryptedArrayOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000001fdae2
- (id)pk_encryptedDictionaryForKey:(id)arg1;	// IMP=0x00100000001fda83
- (id)pk_encryptedUrlForKey:(id)arg1;	// IMP=0x00100000001fda23
- (id)pk_encryptedDecimalNumberForKey:(id)arg1;	// IMP=0x00100000001fd9c3
- (id)pk_encryptedLocationForKey:(id)arg1;	// IMP=0x00100000001fd95f
- (id)pk_encryptedDataForKey:(id)arg1;	// IMP=0x00100000001fd8fb
- (id)pk_encryptedDateForKey:(id)arg1;	// IMP=0x00100000001fd897
- (id)pk_encryptedNumberForKey:(id)arg1;	// IMP=0x00100000001fd833
- (id)pk_encryptedUUIDForKey:(id)arg1;	// IMP=0x00100000001fd7cf
- (id)pk_encryptedStringForKey:(id)arg1;	// IMP=0x00100000001fd76b
@end

