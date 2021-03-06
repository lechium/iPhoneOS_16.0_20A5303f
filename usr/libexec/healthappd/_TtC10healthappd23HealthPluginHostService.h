//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10healthappd23HealthPluginHostService : NSObject
{
    MISSING_TYPE *daemonHealthExperienceStoreOracle;	// 8 = 0x8
    MISSING_TYPE *availablePlugins;	// 16 = 0x10
    MISSING_TYPE *feedPopulationManagerOracle;	// 24 = 0x18
    MISSING_TYPE *lock;	// 32 = 0x20
    MISSING_TYPE *ongoingWork;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x004000000000bff0
- (id)init;	// IMP=0x001000000000f0c0
- (void)service:(id)arg1 changedAuthorizationStatus:(long long)arg2;	// IMP=0x001000000000f040
- (id)runLaunchGenerationIfIdleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000eef0
- (void)cancelAllGenerationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ee50
- (void)cancelAllGenerationAndRunBackgroundGenerationForGenerationType:(unsigned long long)arg1 commitUrgentTransaction:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000edd0
- (void)runOrRequestBackgroundGenerationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000eda0
- (void)requestBackgroundGenerationForAllModelsAfterUnlockWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ed10
- (void)requestBackgroundGenerationForFeedItemsAfterUnlockWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ecf0
- (void)handleJournaledSharingEntries:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ec50
- (void)commitSharedSummaryTransactionAsUrgent:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ebd0
- (void)updateFavoritesWithFavoriteIdentifiers:(id)arg1 isFavorite:(_Bool)arg2 replaceExistingFavorites:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000eb30
- (void)deleteFeedWithFeedKinds:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ea90
- (void)collectFeedPopulationDiagnosticLogsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e9f0
- (void)postNotificationWith:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000000e440
- (void)indicateMajorUserInteractionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e130
- (void)submitTrainingFor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000de90
- (void)populateFeedWithFeedKinds:(id)arg1 for:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000d3f0
- (id)startInteractiveFeedItemGenerationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ca60
- (id)runBackgroundGenerationFor:(id)arg1 pluginIdentifiers:(id)arg2 commitUrgentTransaction:(_Bool)arg3 generationType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000000c760
- (id)runBackgroundGenerationFor:(id)arg1 pluginIdentifiers:(id)arg2 commitUrgentTransaction:(_Bool)arg3 feedItemsOnly:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000000c5f0
- (id)runBackgroundGenerationFor:(id)arg1 pluginIdentifier:(id)arg2 commitUrgentTransaction:(_Bool)arg3 feedItemsOnly:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000000c400
- (void)invalidateStoreCache;	// IMP=0x001000000000c3e0
- (void)dealloc;	// IMP=0x001000000000bf40

@end

