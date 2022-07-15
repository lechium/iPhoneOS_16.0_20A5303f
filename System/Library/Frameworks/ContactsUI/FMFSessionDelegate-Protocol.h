//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class FMFDevice, FMFFriendshipRequest, FMFHandle, FMFLocation, NSArray, NSDictionary, NSError, NSSet, NSString;

@protocol FMFSessionDelegate <NSObject>

@optional
- (void)networkReachabilityUpdated:(_Bool)arg1;
- (void)didUpdatePreferences:(NSDictionary *)arg1;
- (void)didUpdateFences:(NSSet *)arg1;
- (void)didUpdateFavoriteHandles:(NSArray *)arg1;
- (void)didReceiveServerError:(NSError *)arg1;
- (void)didUpdatePendingOffersForHandles:(NSSet *)arg1;
- (void)didUpdateActiveDeviceList:(NSSet *)arg1;
- (void)didChangeActiveLocationSharingDevice:(FMFDevice *)arg1;
- (void)didFailToHandleMappingPacket:(NSString *)arg1 error:(NSError *)arg2;
- (void)mappingPacketProcessingCompleted:(NSString *)arg1;
- (void)sendMappingPacket:(NSString *)arg1 toHandle:(FMFHandle *)arg2;
- (void)didUpdateHidingStatus:(_Bool)arg1;
- (void)didStopAbilityToGetLocationForHandle:(FMFHandle *)arg1;
- (void)didStartAbilityToGetLocationForHandle:(FMFHandle *)arg1;
- (void)didStopSharingMyLocationWithHandle:(FMFHandle *)arg1;
- (void)didStartSharingMyLocationWithHandle:(FMFHandle *)arg1;
- (void)didReceiveFriendshipRequest:(FMFFriendshipRequest *)arg1;
- (void)connectionError:(NSError *)arg1;
- (void)didFailToFetchLocationForHandle:(FMFHandle *)arg1 withError:(NSError *)arg2;
- (void)didReceiveLocation:(FMFLocation *)arg1;
@end
