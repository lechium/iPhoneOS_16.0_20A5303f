//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICMusicLibraryArtistAffinityAnalyzer, NSNumber, NSString;
@protocol NSCopying, OS_dispatch_queue;

@interface ICMusicLibraryRecommendationController : NSObject
{
    ICMusicLibraryArtistAffinityAnalyzer *_affinityAnalyzer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    _Bool _userHasOptedIn;	// 24 = 0x18
    _Bool _userHasEverToggledOptInSwitch;	// 25 = 0x19
    id <NSCopying> _subscriptionObservationToken;	// 32 = 0x20
    _Bool _isSystemService;	// 40 = 0x28
    _Bool _failedToPerformAnalysis;	// 41 = 0x29
    NSNumber *_lastSeenDSID;	// 48 = 0x30
    double _lastTimePeriodicXPCFired;	// 56 = 0x38
    double _refreshIntervalFromBag;	// 64 = 0x40
}

+ (id)sharedLibraryRecommendationController;	// IMP=0x00200000000a1545
- (void).cxx_destruct;	// IMP=0x002000000009b9ed
- (id)_createLocalNotificationDictionaryForRecommendationResult:(id)arg1 storePlatformMetadata:(id)arg2 recommendationID:(id)arg3 identifier:(id)arg4;	// IMP=0x001000000009ac76
- (void)_updateOptInIfNecessary;	// IMP=0x001000000009abad
- (void)_optInMessageForPriorityMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009aab2
- (id)_optInMessageContentForPriorityMessageContent:(id)arg1;	// IMP=0x001000000009a914
- (void)_createApplicationMessagesForResult:(id)arg1 artistNewContentResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009a6c7
- (void)_cleanupExpiredApplicationMessages;	// IMP=0x001000000009a5fe
- (id)_retrievePreviousRecommendationMatchesFromCache;	// IMP=0x001000000009a505
- (id)_cacheDirectoryPath;	// IMP=0x001000000009a47a
- (id)_getNetworkConstraints;	// IMP=0x001000000009a42a
- (id)_storeRequestContext;	// IMP=0x001000000009a3fa
- (id)_wrapAndCacheResponseModelWithCompiledMLModel:(id)arg1;	// IMP=0x0010000000099ca0
- (_Bool)_setupCacheDirectoryStructureWithPath:(id)arg1;	// IMP=0x0010000000099aee
- (void)_clearMLModelCache;	// IMP=0x0010000000099927
- (void)_fetchRecommendationsSetAndModelWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000099839
- (void)_computeLibraryRecommendationWithResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000996ad
- (void)_handleRecommendationsResponseModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000994ca
- (void)_performRecommendationsRequest;	// IMP=0x001000000009939a
- (void)_performRecommendationsUpdate;	// IMP=0x001000000009912b
- (void)_cacheMatchedRecommendations:(id)arg1;	// IMP=0x001000000009909e
- (void)_clearRecommendationsData;	// IMP=0x0010000000098ddd
- (void)_handleNewArtistContentResponseNotification:(id)arg1;	// IMP=0x0010000000098b8b
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x0010000000098a96
- (void)handleAccountStateChange:(id)arg1;	// IMP=0x00100000000989bc
- (void)scheduleRecommendationsRefreshTimer;	// IMP=0x00100000000987f9
- (void)stopSystemService;	// IMP=0x001000000009866b
- (void)startSystemService;	// IMP=0x00100000000984e0
- (void)dealloc;	// IMP=0x0010000000098450
- (id)init;	// IMP=0x00100000000982d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

