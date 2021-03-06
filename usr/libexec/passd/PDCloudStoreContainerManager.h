//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, NSDictionary;

@interface PDCloudStoreContainerManager : NSObject
{
    NSDictionary *_databaseByScope;	// 8 = 0x8
    NSDictionary *_databaseByIdentifier;	// 16 = 0x10
    CKContainer *_container;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000402e75
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (id)description;	// IMP=0x0010000000402db3
- (void)createContainerCacheIfNecessary;	// IMP=0x0010000000402d81
- (void)clearCacheInContainer;	// IMP=0x0010000000402d4f
- (void)containerDatabaseIdentifier:(id)arg1 didUpdateShare:(id)arg2 forZoneID:(id)arg3;	// IMP=0x0010000000402cc1
- (void)containerDatabaseIdentifier:(id)arg1 didUpdateChangeToken:(id)arg2 fetchTimestamp:(id)arg3 forZoneID:(id)arg4;	// IMP=0x0010000000402c1c
- (void)containerDatabaseIdentifier:(id)arg1 didRemoveSubscriptionIdentifiers:(id)arg2;	// IMP=0x0010000000402ba4
- (void)containerDatabaseIdentifier:(id)arg1 didRemoveZoneIDs:(id)arg2;	// IMP=0x0010000000402b2c
- (void)containerDatabaseIdentifier:(id)arg1 didCreateZones:(id)arg2;	// IMP=0x0010000000402ab4
- (void)containerDatabaseIdentifier:(id)arg1 didCreateSubscriptions:(id)arg2;	// IMP=0x0010000000402a3c
- (id)fetchTimestampForCloudStoreStore:(id)arg1;	// IMP=0x00100000004029b5
- (id)changeTokenForCloudStoreStore:(id)arg1;	// IMP=0x001000000040292e
- (id)allPossibleZoneIDsInContainerDatabase:(id)arg1;	// IMP=0x0010000000402919
- (id)cloudStoreZoneForZoneName:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x001000000040286f
- (id)cloudStoreZoneForZoneID:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x001000000040285a
- (id)subscriptionIdentifiersForDatabaseZoneIDs:(id)arg1;	// IMP=0x00100000004026be
- (id)subscriptionsForDatabaseZones:(id)arg1;	// IMP=0x0010000000402522
- (id)allPossibleSubscriptionIdentifiersByDatabaseIdentifier;	// IMP=0x00100000004023ed
- (id)allPossibleZoneIDsByDatabaseIdentifier;	// IMP=0x00100000004022b8
- (id)subscriptionsThatNeedToBeCreated;	// IMP=0x0010000000402183
- (id)zonesThatNeedToBeCreated;	// IMP=0x001000000040204e
- (id)validDatabases;	// IMP=0x0010000000401fe7
- (id)validDatabaseIdentifiers;	// IMP=0x0010000000401f80
- (id)cloudStoreZonesInContainerDatabase:(id)arg1;	// IMP=0x0010000000401f6b
- (_Bool)cloudStoreZoneExistsForZoneName:(id)arg1;	// IMP=0x0010000000401e29
- (id)cloudStoreZonesFromZoneNames:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x0010000000401bb7
- (id)cloudStoreZonesByDatabaseIdentifierForItemType:(unsigned long long)arg1 configuration:(id)arg2 action:(unsigned long long)arg3;	// IMP=0x0010000000401a40
- (id)cloudStoreZonesByDatabaseIdentifierForItemType:(unsigned long long)arg1 action:(unsigned long long)arg2;	// IMP=0x00100000004018f5
- (id)cloudStoreZonesByDatabaseIdentifierForItem:(id)arg1 action:(unsigned long long)arg2;	// IMP=0x001000000040178b
- (id)databaseForCloudStoreZone:(id)arg1;	// IMP=0x0010000000401757
- (id)databaseForIdentifier:(id)arg1;	// IMP=0x0010000000401741
- (id)databaseIdentifierForScope:(long long)arg1;	// IMP=0x00100000004016f1
- (id)databaseForScope:(long long)arg1;	// IMP=0x001000000040168a
- (id)containerName;	// IMP=0x0010000000401674
- (id)initWithContainer:(id)arg1 validScopes:(id)arg2 cacheDataSource:(id)arg3 databaseContainerDataSource:(id)arg4;	// IMP=0x0010000000401208

@end

