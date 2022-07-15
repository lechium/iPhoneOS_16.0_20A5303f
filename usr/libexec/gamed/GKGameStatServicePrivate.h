//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKGameStatServicePrivate
{
}

+ (id)currentFriendsPlayedList:(id)arg1;	// IMP=0x002000000021100e
+ (unsigned long long)requiredEntitlements;	// IMP=0x001000000020ebcb
+ (Class)interfaceClass;	// IMP=0x001000000020ebba
- (oneway void)getReengagementAchievement:(CDUnknownBlockType)arg1;	// IMP=0x0020000000214df7
- (oneway void)getReengagementAchievements:(CDUnknownBlockType)arg1;	// IMP=0x0010000000214d5a
- (oneway void)loadReengagementAchievements:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000213ea1
- (id)processReengagementResults:(id)arg1 localPlayer:(id)arg2 expirationDate:(id)arg3 context:(id)arg4;	// IMP=0x0010000000213551
- (id)existingReengagementAchievement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000213070
- (id)findAchievementInternal:(id)arg1 identifier:(id)arg2 playerID:(id)arg3 context:(id)arg4 existingPercent:(double)arg5 existingDate:(id)arg6;	// IMP=0x00100000002129b1
- (id)getCachedAcievementListForLocalPlayer:(id)arg1 context:(id)arg2;	// IMP=0x001000000021285b
- (oneway void)getGamesFriendsPlayed:(long long)arg1 type:(id)arg2 fetchOptions:(unsigned long long)arg3 withinSecs:(long long)arg4 matchingBundleIDs:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000211977
- (oneway void)getGamesFriendsPlayed:(long long)arg1 type:(id)arg2 withinSecs:(long long)arg3 matchingBundleIDs:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000211953
- (oneway void)expireGamesFriendsPlayed;	// IMP=0x001000000021161a
- (void)loadGamesFriendsPlayed:(id)arg1 matchingBundleIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000020f998
- (id)ensureGameObject:(id)arg1 gameDescriptor:(id)arg2;	// IMP=0x001000000020f8a7
- (id)currentLocalPlayer;	// IMP=0x001000000020f895
- (oneway void)getHypotheticalLeaderboardRanksForScores:(id)arg1 forGameDescriptor:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000020f255
- (oneway void)getAchievementLeaderboardForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020f243
- (oneway void)getEntriesForLeaderboard:(id)arg1 fetchOptions:(unsigned long long)arg2 gameDescriptor:(id)arg3 localPlayer:(id)arg4 playerScope:(long long)arg5 timeScope:(long long)arg6 range:(struct _NSRange)arg7 players:(id)arg8 handler:(CDUnknownBlockType)arg9;	// IMP=0x001000000020ebd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
