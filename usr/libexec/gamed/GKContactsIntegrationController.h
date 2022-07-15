//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, GKContactsIntegrationControllerSettings, GKContactsIntegrationTimer, NSString;
@protocol OS_dispatch_queue;

@interface GKContactsIntegrationController : NSObject
{
    GKContactsIntegrationControllerSettings *_settings;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_concurrentQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_idsBatchQueue;	// 32 = 0x20
    GKContactsIntegrationTimer *_contactsUpdateTimer;	// 40 = 0x28
    GKContactsIntegrationTimer *_idsExpiredUpdateTimer;	// 48 = 0x30
    GKContactsIntegrationTimer *_contactsChangedCoalescingTimer;	// 56 = 0x38
}

+ (id)sharedController;	// IMP=0x002000000016f6fe
+ (id)associationIDFromServerResult:(id)arg1;	// IMP=0x001000000016f6ab
+ (int)integrationConsentValueFromServerResult:(id)arg1;	// IMP=0x001000000016f609
- (void).cxx_destruct;	// IMP=0x0020000000178fda
@property(retain, nonatomic) GKContactsIntegrationTimer *contactsChangedCoalescingTimer; // @synthesize contactsChangedCoalescingTimer=_contactsChangedCoalescingTimer;
@property(retain, nonatomic) GKContactsIntegrationTimer *idsExpiredUpdateTimer; // @synthesize idsExpiredUpdateTimer=_idsExpiredUpdateTimer;
@property(retain, nonatomic) GKContactsIntegrationTimer *contactsUpdateTimer; // @synthesize contactsUpdateTimer=_contactsUpdateTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *idsBatchQueue; // @synthesize idsBatchQueue=_idsBatchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain) GKContactsIntegrationControllerSettings *settings; // @synthesize settings=_settings;
- (void)updateIDSEntriesFromFriendList:(id)arg1 againstServerRepresentation:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000178876
- (void)connectionManagerReady:(id)arg1;	// IMP=0x00100000001786e7
- (void)populateContactInfoForProfiles:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000177c0d
- (id)createFriendAssociationIDMapWithIDs:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000017750a
- (id)createRelationshipFromEntity:(id)arg1 usingFriendMap:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000177193
- (id)relationshipsForHandles:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000176a5e
- (id)transactionGroup;	// IMP=0x00100000001769d7
- (id)primaryInternalPlayer;	// IMP=0x001000000017691b
- (void)clearCachesAndRefreshImmediately:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000176758
- (void)stopTimers;	// IMP=0x00100000001766f4
- (void)resetTimersAndStartImmediately:(_Bool)arg1;	// IMP=0x0010000000175af4
- (void)storeBagUpdated:(id)arg1;	// IMP=0x001000000017520b
- (void)contactsChanged:(id)arg1;	// IMP=0x0010000000174aa4
- (void)playerAuthenticated:(id)arg1;	// IMP=0x001000000017491b
- (void)refreshGameCenterRelationshipsForContact:(id)arg1 replyQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000017462f
- (void)relationshipsForHandles:(id)arg1 replyQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001743c2
- (void)relationshipsForMeContact:(id)arg1 replyQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000173e3b
- (void)getRelationshipsForContact:(id)arg1 shouldRefresh:(_Bool)arg2 replyQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000173adf
- (void)handleIDSBatchUpdate:(id)arg1;	// IMP=0x001000000017328d
- (void)fetchInvalidIDSDataAndUpdateCacheForHandles:(id)arg1;	// IMP=0x0010000000172721
- (void)fetchIDSDataAndUpdateCacheForHandles:(id)arg1;	// IMP=0x0010000000171921
- (void)startIDSExpiredUpdate;	// IMP=0x00100000001710e8
- (id)nextBatchOfHandlesWithContext:(id)arg1;	// IMP=0x0010000000170870
- (void)startContactsUpdate;	// IMP=0x00100000001704e8
- (void)updateCachesAndRefreshImmediately:(_Bool)arg1;	// IMP=0x00100000001700aa
- (_Bool)hasRecentlyPlayedGames:(id)arg1;	// IMP=0x001000000016fd28
- (unsigned long long)currentEligibilityWithContext:(id)arg1;	// IMP=0x001000000016fb69
- (unsigned long long)currentStateWithContext:(id)arg1;	// IMP=0x001000000016fae1
- (_Bool)isEligibleForUpdatesWithContext:(id)arg1;	// IMP=0x001000000016f904
- (id)init;	// IMP=0x001000000016f753

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
