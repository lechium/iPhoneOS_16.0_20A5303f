//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCCloudData : NSManagedObject
{
    id <BCCloudDataPrivacyDelegate> _privacyDelegate;	// 8 = 0x8
}

+ (id)localIdentifierFromRecord:(id)arg1;	// IMP=0x002000000003d937
+ (id)propertyIDKey;	// IMP=0x001000000003d8ef
- (void).cxx_destruct;	// IMP=0x002000000003da1d
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate; // @synthesize privacyDelegate=_privacyDelegate;
- (id)zoneName;	// IMP=0x001000000003d8a7
- (id)identifier;	// IMP=0x001000000003d864
- (id)recordType;	// IMP=0x001000000003d81c
- (id)configuredRecordFromAttributes;	// IMP=0x001000000003d788
- (void)incrementEditGeneration;	// IMP=0x001000000003d756
@property(copy, nonatomic) CKRecord *systemFields; // @dynamic systemFields;
- (id);	// IMP=0x001000000003cf5f
- (_Bool)hasValidSalt;	// IMP=0x001000000003cce9
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;	// IMP=0x001000000003cb8f
- (_Bool)isEqualExceptForDate:(id)arg1;	// IMP=0x001000000003c8d5
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;	// IMP=0x001000000003c4a2
- (id)mutableCopy;	// IMP=0x001000000003c474

// Remaining properties
@property(copy, nonatomic) NSData *ckSystemFields; // @dynamic ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deletedFlag; // @dynamic deletedFlag;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long editGeneration; // @dynamic editGeneration;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(copy, nonatomic) NSString *saltedHashedID; // @dynamic saltedHashedID;
@property(readonly) Class superclass;
@property(nonatomic) long long syncGeneration; // @dynamic syncGeneration;

@end

