//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKAcceptedInviteManager, NSMutableDictionary, NSString, UNUserNotificationCenter;

@interface GKBulletinController : NSObject
{
    NSMutableDictionary *_bulletins;	// 8 = 0x8
    GKAcceptedInviteManager *_acceptedInviteManager;	// 16 = 0x10
    UNUserNotificationCenter *_userNotificationCenter;	// 24 = 0x18
}

+ (id)sharedController;	// IMP=0x00200000001248d3
+ (void)startBulletinController;	// IMP=0x001000000012457c
+ (id)bulletinQueue;	// IMP=0x0010000000086c9b
- (void).cxx_destruct;	// IMP=0x0010000000128bfe
@property(retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property(retain) GKAcceptedInviteManager *acceptedInviteManager; // @synthesize acceptedInviteManager=_acceptedInviteManager;
@property(retain, nonatomic) NSMutableDictionary *bulletins; // @synthesize bulletins=_bulletins;
- (void)clearBulletin:(id)arg1;	// IMP=0x00100000001287ec
- (void)removeAllBulletins;	// IMP=0x0010000000128579
- (void)presentBulletin:(id)arg1;	// IMP=0x0010000000128145
- (id)notificationRequestFromBulletin:(id)arg1;	// IMP=0x0010000000127b84
- (id)userInfoFromBulletin:(id)arg1;	// IMP=0x001000000012766f
- (void)expireBulletin:(id)arg1;	// IMP=0x00100000001274c0
- (void)withdrawBulletin:(id)arg1;	// IMP=0x0010000000127311
- (void)removeBulletin:(id)arg1;	// IMP=0x0010000000126f58
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001261dd
- (id)categoryWithIdentifier:(id)arg1 defaultActionTitle:(id)arg2 defaultActionIcon:(id)arg3 dismissActionTitle:(id)arg4 dismissActionIcon:(id)arg5;	// IMP=0x0010000000125f1c
- (id)registeredCategories;	// IMP=0x0010000000125839
- (void)launchBulletin:(id)arg1;	// IMP=0x0010000000125087
- (id)init;	// IMP=0x0010000000124aeb
- (void)dealloc;	// IMP=0x0010000000124a83
- (void)clearChallengeBulletinsForChallengeID:(id)arg1;	// IMP=0x0010000000088fb4
- (void)clearTurnBasedBulletinsForMatchID:(id)arg1;	// IMP=0x0010000000088d2d
- (void)loadBulletins;	// IMP=0x0010000000087e6d
- (void)updateSavedBulletins;	// IMP=0x001000000008771a
- (void)clearSavedBulletins;	// IMP=0x0010000000087006
- (id)bulletinStorageFilePathForEnvironment:(long long)arg1;	// IMP=0x0010000000086e4d
- (id)getBulletinsOfType:(Class)arg1;	// IMP=0x001000000008695b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

