//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMHome.h>

@class NSArray, NSDictionary;

@interface HMHome (HMUAdditions)
+ (id)hmu_homesFromHomes:(id)arg1 withHomeLocationStatus:(long long)arg2;	// IMP=0x00200000000040a1
+ (id)hmu_homesFromHomes:(id)arg1 withZoneNames:(id)arg2;	// IMP=0x0020000000003d47
+ (id)hmu_homesFromHomes:(id)arg1 withRoomNames:(id)arg2;	// IMP=0x00200000000039ed
@property(readonly, nonatomic) NSArray *hmu_endpointAccessories;
@property(readonly, nonatomic) NSDictionary *hmu_homePodsIncludingCurrentAccessoryDictionary;
@property(readonly, nonatomic) NSDictionary *hmu_homePodsDictionary;
- (id)hmu_accessoryWithUniqueIdentifierUUIDString:(id)arg1;	// IMP=0x00100000000048dd
- (id)hmu_zoneWithName:(id)arg1;	// IMP=0x00100000000047b6
- (id)hmu_zonesWithUniqueIdentifiers:(id)arg1;	// IMP=0x001000000000466a
- (id)hmu_zoneWithUniqueIdentifier:(id)arg1;	// IMP=0x0010000000004543
- (id)hmu_roomWithName:(id)arg1;	// IMP=0x001000000000441c
- (id)hmu_roomsWithUniqueIdentifiers:(id)arg1;	// IMP=0x00100000000042d0
- (id)hmu_roomWithUniqueIdentifier:(id)arg1;	// IMP=0x00100000000041a9
@property(readonly, nonatomic) NSArray *hmu_allRoomsIncludingRoomForEntireHome;
- (id)hmu_userWithSenderCorrelationIdentifier:(id)arg1;	// IMP=0x00100000000038c6
- (_Bool)hmu_isOwner:(id)arg1;	// IMP=0x0010000000003882
- (_Bool)hmu_isAdministrator:(id)arg1;	// IMP=0x001000000000383e
- (_Bool)hmu_isRemoteAccessAllowedForUser:(id)arg1;	// IMP=0x00100000000037fa
@property(readonly, nonatomic) _Bool hmu_isCurrentUserOwner;
@property(readonly, nonatomic) _Bool hmu_isCurrentUserAdministrator;
@property(readonly, nonatomic) _Bool hmu_isRemoteAccessAllowedForCurrentUser;
- (id)hmu_userWithUniqueIdentifierUUIDString:(id)arg1;	// IMP=0x0010000000003677
- (id)hmu_userWithUniqueIdentifier:(id)arg1;	// IMP=0x0010000000003550
@property(readonly, nonatomic) NSArray *hmu_users;
@property(readonly, nonatomic) NSArray *hmu_allUsersIncludingCurrentUser;
- (id)hmu_accessoryWithDestination:(id)arg1 service:(id)arg2;	// IMP=0x00100000000060c6
- (id)hmu_userWithDestination:(id)arg1;	// IMP=0x0010000000005f45
- (id)hmu_userWithFromID:(id)arg1;	// IMP=0x0010000000005d9e
- (id)hmu_accessoryWithFromID:(id)arg1 service:(id)arg2;	// IMP=0x0010000000005b76
@end

