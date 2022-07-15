//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKGameServicePrivate
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000001dd54c
+ (Class)interfaceClass;	// IMP=0x00100000001dd53b
- (oneway void)getFriendListAccessForAllGames:(CDUnknownBlockType)arg1;	// IMP=0x00200000001f2947
- (void)fetchGameRecommendationsInContext:(id)arg1 responseKind:(int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f1d18
- (oneway void)removeGameForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f1718
- (oneway void)getGamesWithAchievementStatsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f09cd
- (void)loadGamesWithAchievementStatsForPlayer:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001efdd7
- (void)fetchGamesWithAchievementStatsForPlayer:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001efafa
- (oneway void)getStoreItemsForAdamIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ef336
- (void)loadStorePiecesForGames:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ee572
- (oneway void)getRatingForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001edb41
- (void)loadRatingForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ed2eb
- (void)fetchRatingForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ecf38
- (oneway void)getGameMetadataForBundleIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ec418
- (void)loadGameMetadataForBundleIDs:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001eb40d
- (void)fetchGameMetadataForBundleIDs:(id)arg1 responseKind:(int)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001eaa45
- (oneway void)getGameStatsForPlayer:(id)arg1 bundleIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e9c60
- (void)loadGameStatsForPlayer:(id)arg1 bundleIdentifiers:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001e8326
- (void)fetchGameStatsForPlayer:(id)arg1 bundleIdentifiers:(id)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001e7ba4
- (oneway void)getGamesForPlayer:(id)arg1 includeInstalled:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e6c2f
- (void)loadGamesForPlayer:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e5a29
- (void)fetchGamesForPlayer:(id)arg1 includeInstalled:(_Bool)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001e4f6a
- (void)scanInstalledGamesForPlayer:(id)arg1 transaction:(id)arg2;	// IMP=0x00100000001e44b4
- (oneway void)getOnDeviceMultiplayerGamesForBundleIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e3c5b
- (void)loadOnDeviceMultiplayerGamesWithContext:(id)arg1 forBundleIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e34c8
- (void)fetchOnDeviceMultiplayerGamesInContext:(id)arg1 forBundleIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e2d56
- (oneway void)getTopGamesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e22e8
- (void)loadTopGamesWithContext:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e1c4c
- (void)fetchTopGamesInContext:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e1774
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x00100000001e1722
- (oneway void)getGamesPlayedSummaries:(id)arg1 limit:(id)arg2 withinSecs:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001e0240
- (oneway void)getGamesPlayedSummaries:(id)arg1 limit:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e0228
- (oneway void)getGamesPlayedMetaData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001dd7dc
- (oneway void)submitFriendListAccess:(id)arg1 value:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001dd6e5
- (id)cachedGamesPlayed:(id)arg1 context:(id)arg2;	// IMP=0x00100000001dd557

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
