//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableStoreItem
{
    NSString *_storeID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000065ba0
- (void).cxx_destruct;	// IMP=0x0020000000065c62
@property(copy, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000065bd7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000065ba8
- (id)configuredRecordFromAttributes;	// IMP=0x0010000000065b62
- (id)zoneName;	// IMP=0x0010000000065b4e
- (id)identifier;	// IMP=0x0010000000065b3c
- (id)recordType;	// IMP=0x0010000000065b2f
- (id)initWithRecord:(id)arg1;	// IMP=0x0010000000065a5b
- (id)initWithCloudData:(id)arg1;	// IMP=0x001000000006593e
- (id)initWithStoreID:(id)arg1;	// IMP=0x001000000006587c

// Remaining properties
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end

