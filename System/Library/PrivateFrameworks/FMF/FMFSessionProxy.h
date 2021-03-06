//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FMFSession, NSString;

__attribute__((visibility("hidden")))
@interface FMFSessionProxy : NSObject
{
    FMFSession *_session;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001d305
@property(nonatomic) __weak FMFSession *session; // @synthesize session=_session;
- (oneway void)didReceiveServerError:(id)arg1;	// IMP=0x000000000001d26c
- (oneway void)didUpdateLocations:(id)arg1;	// IMP=0x000000000001d1fa
- (oneway void)didUpdateFollowing:(id)arg1;	// IMP=0x000000000001d188
- (oneway void)didUpdateFollowers:(id)arg1;	// IMP=0x000000000001d116
- (oneway void)abPreferencesDidChange;	// IMP=0x000000000001d0d9
- (oneway void)abDidChange;	// IMP=0x000000000001d09c
- (oneway void)didUpdatePreferences:(id)arg1;	// IMP=0x000000000001d02a
- (oneway void)didUpdateFences:(id)arg1;	// IMP=0x000000000001cfb8
- (oneway void)didUpdateFavorites:(id)arg1;	// IMP=0x000000000001cf46
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;	// IMP=0x000000000001cec0
- (oneway void)didUpdateActiveDeviceList:(id)arg1;	// IMP=0x000000000001ce4e
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;	// IMP=0x000000000001cddc
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;	// IMP=0x000000000001cd6a
- (oneway void)didUpdateHideFromFollowersStatus:(_Bool)arg1;	// IMP=0x000000000001cd1e
- (void)didReceiveFriendshipRequest:(id)arg1;	// IMP=0x000000000001ccac
- (oneway void)didStopFollowingHandle:(id)arg1;	// IMP=0x000000000001cc3a
- (oneway void)didStartFollowingHandle:(id)arg1;	// IMP=0x000000000001cbc8
- (oneway void)didRemoveFollowerHandle:(id)arg1;	// IMP=0x000000000001cb56
- (oneway void)didAddFollowerHandle:(id)arg1;	// IMP=0x000000000001cae4
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;	// IMP=0x000000000001ca5e
- (oneway void)setLocations:(id)arg1;	// IMP=0x000000000001c9ec
- (oneway void)networkReachabilityUpdated:(_Bool)arg1;	// IMP=0x000000000001c9a0
- (oneway void)modelDidLoad;	// IMP=0x000000000001c963
- (id)initWithFMFSession:(id)arg1;	// IMP=0x000000000001c8fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

