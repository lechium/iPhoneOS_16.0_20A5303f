//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerViewController, MPAVItem, MPCAVItemTrace, MPCErrorControllerImplementation, MPCExternalPlaybackControllerImplementation, MPCItemBookmarker, MPCLeaseController, MPCMediaFoundationTranslator, MPCPlayPerfAnalytics, MPCPlaybackEngine, MPCPlayerItemConfigurator, MPCQueueController, NSDictionary, NSNumber, NSString, _MPCAudioSessionController;
@protocol MFAssetLoading, MFPlaybackStackController><MFQueueManagement, MPCPlaybackEngineEventStreamDeferralAssertion;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackEngineMediaFoundationImplementation : NSObject
{
    _Bool _autoPlayWhenLikelyToKeepUp;	// 8 = 0x8
    _Bool _reloadingPlaybackContext;	// 9 = 0x9
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
    MPCQueueController *_queueController;	// 24 = 0x18
    long long _actionAtQueueEnd;	// 32 = 0x20
    long long _jumpIdentifier;	// 40 = 0x28
    id <MFPlaybackStackController><MFQueueManagement> _playbackStackController;	// 48 = 0x30
    MPCItemBookmarker *_bookmarker;	// 56 = 0x38
    MPCMediaFoundationTranslator *_translator;	// 64 = 0x40
    MPCErrorControllerImplementation *_errorController;	// 72 = 0x48
    MPCExternalPlaybackControllerImplementation *_externalPlaybackController;	// 80 = 0x50
    id <MFAssetLoading> _assetLoader;	// 88 = 0x58
    MPCLeaseController *_leaseController;	// 96 = 0x60
    MPCPlayerItemConfigurator *_configurator;	// 104 = 0x68
    unsigned long long _stateHandle;	// 112 = 0x70
    MPCAVItemTrace *_playbackStartTrace;	// 120 = 0x78
    MPCPlayPerfAnalytics *_playPerfAnalytics;	// 128 = 0x80
    _MPCAudioSessionController *_transientAudioSessionController;	// 136 = 0x88
    id <MPCPlaybackEngineEventStreamDeferralAssertion> _evsDeferralAssertionForFirstAudioFrame;	// 144 = 0x90
    NSNumber *_currentRelativeVolume;	// 152 = 0x98
}

+ (id)describePlayer:(id)arg1;	// IMP=0x0010000000059b96
- (void).cxx_destruct;	// IMP=0x00000000000168ef
@property(copy, nonatomic) NSNumber *currentRelativeVolume; // @synthesize currentRelativeVolume=_currentRelativeVolume;
@property(retain, nonatomic) id <MPCPlaybackEngineEventStreamDeferralAssertion> evsDeferralAssertionForFirstAudioFrame; // @synthesize evsDeferralAssertionForFirstAudioFrame=_evsDeferralAssertionForFirstAudioFrame;
@property(retain, nonatomic) _MPCAudioSessionController *transientAudioSessionController; // @synthesize transientAudioSessionController=_transientAudioSessionController;
@property(retain, nonatomic) MPCPlayPerfAnalytics *playPerfAnalytics; // @synthesize playPerfAnalytics=_playPerfAnalytics;
@property(retain, nonatomic) MPCAVItemTrace *playbackStartTrace; // @synthesize playbackStartTrace=_playbackStartTrace;
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) MPCPlayerItemConfigurator *configurator; // @synthesize configurator=_configurator;
@property(retain, nonatomic) MPCLeaseController *leaseController; // @synthesize leaseController=_leaseController;
@property(retain, nonatomic) id <MFAssetLoading> assetLoader; // @synthesize assetLoader=_assetLoader;
@property(retain, nonatomic) MPCExternalPlaybackControllerImplementation *externalPlaybackController; // @synthesize externalPlaybackController=_externalPlaybackController;
@property(retain, nonatomic) MPCErrorControllerImplementation *errorController; // @synthesize errorController=_errorController;
@property(retain, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(retain, nonatomic) MPCItemBookmarker *bookmarker; // @synthesize bookmarker=_bookmarker;
@property(retain, nonatomic) id <MFPlaybackStackController><MFQueueManagement> playbackStackController; // @synthesize playbackStackController=_playbackStackController;
@property(nonatomic) long long jumpIdentifier; // @synthesize jumpIdentifier=_jumpIdentifier;
@property(readonly, nonatomic, getter=isReloadingPlaybackContext) _Bool reloadingPlaybackContext; // @synthesize reloadingPlaybackContext=_reloadingPlaybackContext;
@property(nonatomic) long long actionAtQueueEnd; // @synthesize actionAtQueueEnd=_actionAtQueueEnd;
@property(nonatomic) _Bool autoPlayWhenLikelyToKeepUp; // @synthesize autoPlayWhenLikelyToKeepUp=_autoPlayWhenLikelyToKeepUp;
@property(retain, nonatomic) MPCQueueController *queueController; // @synthesize queueController=_queueController;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)invalidateEVSDeferralAssertionForFirstAudioFrame;	// IMP=0x000000000001669e
- (void)takeEVSDeferralAssertionForFirstAudioFrame;	// IMP=0x00000000000165ac
- (void)assetLoadingDidStartForItem:(id)arg1;	// IMP=0x00000000000162db
- (void)assetLoadingDidCompleteForItem:(id)arg1 error:(id)arg2;	// IMP=0x00000000000157a7
- (void)stackControllerDidCreateTransitionFrom:(id)arg1 to:(id)arg2 type:(long long)arg3 parameters:(id)arg4;	// IMP=0x00000000000155c8
- (void)errorResolutionDidEndForItem:(id)arg1 error:(id)arg2 resolution:(long long)arg3;	// IMP=0x0000000000015458
- (void)errorResolutionDidStartForItem:(id)arg1 error:(id)arg2;	// IMP=0x0000000000015325
- (void)didReportSignpostWithType:(long long)arg1;	// IMP=0x00000000000152b1
- (void)relativeVolumeDidChangeTo:(float)arg1 timeStamp:(id)arg2;	// IMP=0x00000000000150c1
- (void)firstVideoFrameWasRenderedForItem:(id)arg1 timeStamp:(id)arg2;	// IMP=0x0000000000014b18
- (void)playbackIsBlockedOnNonPlayableItem:(id)arg1;	// IMP=0x00000000000149aa
- (void)mediaServicesInterruptionDidEndWithTimeStamp:(id)arg1;	// IMP=0x0000000000014618
- (void)mediaServicesInterruptionDidBeginWithItemAtDeath:(id)arg1 timeAtDeath:(double)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000014100
- (void)userActionDidEnd:(id)arg1 error:(id)arg2;	// IMP=0x0000000000013e74
- (void)userActionDidBegin:(id)arg1;	// IMP=0x00000000000139ff
- (void)didReachEndOfQueueWithReason:(id)arg1;	// IMP=0x000000000001378e
- (void)screenRecordingDidChange:(_Bool)arg1 timeStamp:(id)arg2;	// IMP=0x000000000001357c
- (void)tracksDidChangeForItem:(id)arg1 timeStamp:(id)arg2;	// IMP=0x0000000000013388
- (void)playbackIsLikelyToKeepUp:(_Bool)arg1 forItem:(id)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000012ab8
- (void)playbackBufferStateDidChangeToState:(long long)arg1 forItem:(id)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000012237
- (void)interruptionDidFinishForInterruptor:(id)arg1 shouldResume:(_Bool)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000011f5c
- (void)interruptionDidBeginWithInterruptor:(id)arg1 timeStamp:(id)arg2;	// IMP=0x0000000000011ce8
- (void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000117b1
- (void)routeDidChange:(_Bool)arg1 metadata:(id)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000112d1
- (void)playbackWaitingToPlayForItem:(id)arg1 reason:(id)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000011076
- (void)timeControlStatusDidChange:(long long)arg1 waitingReason:(id)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000010d50
- (void)firstFrameWillRenderForItem:(id)arg1 timeStamp:(id)arg2;	// IMP=0x00000000000106c7
- (void)playbackRateDidChangeNotifiedForItem:(id)arg1 newRate:(float)arg2 reason:(id)arg3 participantIdentifier:(id)arg4 timeStamp:(id)arg5;	// IMP=0x000000000000ffce
- (void)playbackRateDidChangeToRate:(float)arg1 forItem:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000000fd60
- (void)playbackDidStopForItem:(id)arg1 source:(id)arg2 reason:(id)arg3 timeStamp:(id)arg4;	// IMP=0x000000000000fa5a
- (void)playbackDidStartForItem:(id)arg1 rate:(float)arg2 fromStalling:(_Bool)arg3 timeStamp:(id)arg4;	// IMP=0x000000000000f24c
- (void)_logPlayerEventsForQueueItem:(id)arg1;	// IMP=0x000000000000ee56
- (void)_updateActiveFormatForQueueItem:(id)arg1;	// IMP=0x000000000000ea7c
- (void)itemIsReadyToPlay:(id)arg1 timeStamp:(id)arg2;	// IMP=0x000000000000e5b9
- (void)itemDidPlayToEnd:(id)arg1 timeStamp:(id)arg2;	// IMP=0x000000000000e326
- (void)itemDidFailToPlayToEnd:(id)arg1 error:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000000dd47
- (void)itemDidFailToLoad:(id)arg1 error:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000000dad1
- (void)userSeekCompletedForItem:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 timeStamp:(id)arg4;	// IMP=0x000000000000d788
- (void)playbackTimeDidChangeTo:(double)arg1 forItem:(id)arg2 reason:(long long)arg3 timeStamp:(id)arg4;	// IMP=0x000000000000cf08
- (void)playbackDidReachQueueEndWithTimeStamp:(id)arg1;	// IMP=0x000000000000cd75
- (void)itemDidResignCurrent:(id)arg1 source:(long long)arg2 timeStamp:(id)arg3;	// IMP=0x000000000000c9a5
- (void)itemDidBecomeCurrent:(id)arg1 source:(long long)arg2 timeStamp:(id)arg3;	// IMP=0x000000000000c338
- (void)currentItemWillChangeFromItem:(id)arg1 toItem:(id)arg2 source:(long long)arg3 timeStamp:(id)arg4;	// IMP=0x000000000000bdc3
- (void)queueController:(id)arg1 didIncrementVersionForSegment:(id)arg2;	// IMP=0x000000000000bd86
- (void)queueController:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2;	// IMP=0x000000000000bd14
- (void)queueController:(id)arg1 didChangeShuffleType:(long long)arg2;	// IMP=0x000000000000bca2
- (void)queueController:(id)arg1 didChangeRepeatType:(long long)arg2;	// IMP=0x000000000000bc30
- (void)queueController:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;	// IMP=0x000000000000bc2a
- (void)queueController:(id)arg1 failedToLoadItem:(id)arg2;	// IMP=0x000000000000ba40
- (void)queueControllerDidChangeContents:(id)arg1;	// IMP=0x000000000000b8cb
- (void)_performSkipForUserAction:(id)arg1;	// IMP=0x000000000000b672
- (_Bool)_isAVKitSkipAction:(id)arg1;	// IMP=0x000000000000b5e7
- (void)_playbackDidStopForItem:(id)arg1 source:(id)arg2 reason:(id)arg3 time:(double)arg4;	// IMP=0x000000000000b215
- (id)_MPAVItemForMFQueuePlayerItem:(id)arg1;	// IMP=0x000000000000b0fb
- (void)_logTimeJumpForItem:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 userInitiated:(_Bool)arg4 timeStamp:(id)arg5;	// IMP=0x000000000000aa4b
@property(readonly, nonatomic) NSDictionary *_stateDictionary;
- (void)_setupPlaybackStackWithPlaybackEngine:(id)arg1 queueController:(id)arg2;	// IMP=0x000000000000a090
- (void)_resetPlaybackStack;	// IMP=0x000000000000a017
- (void)setRelativeVolume:(float)arg1;	// IMP=0x0000000000009f82
- (void)jumpToTime:(double)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009dbb
- (void)setRate:(float)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009b90
- (void)endScanningWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000099e0
- (void)beginScanningWithDirection:(long long)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009816
- (void)skipWithDirection:(long long)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000094cf
- (_Bool)skipWithDirectionShouldJumpToItemStart:(long long)arg1;	// IMP=0x000000000000947c
- (void)togglePlaybackWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009070
- (void)pauseForLeasePreventionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008eaf
- (void)pauseWithFadeout:(double)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008ce4
- (void)pauseWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008b23
- (void)playWithRate:(float)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000892d
- (void)endPlaybackWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008695
- (void)endPlayback;	// IMP=0x00000000000085e9
@property(readonly, nonatomic) _Bool hasPlayedSuccessfully;
@property(readonly, nonatomic) AVPlayerViewController *playerViewController;
@property(readonly, nonatomic) long long stateBeforeInterruption;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) float currentRate;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) MPAVItem *currentItem;
- (void)updateAudioSession;	// IMP=0x0000000000008224
- (void)endUsingVideoLayer;	// IMP=0x000000000000821e
- (void)beginUsingVideoLayer;	// IMP=0x0000000000008218
- (void)playWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000008206
- (void)pauseWithFadeout:(float)arg1;	// IMP=0x000000000000808c
- (void)pause;	// IMP=0x0000000000008077
- (_Bool)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(_Bool)arg3 force:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000007c99
- (void)becomeActiveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007b34
- (void)setQueueWithPlaybackContext:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000074e5
- (void)loadSessionWithQueueController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000733e
- (void)replaceCurrentItemWithPlaybackContext:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006f9e
- (void)reloadWithPlaybackContext:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006a3c
- (void)setupPlaybackStackIfNeeded;	// IMP=0x00000000000068be
- (void)prewarm;	// IMP=0x000000000000685b
- (void)dealloc;	// IMP=0x0000000000006821
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x0000000000006720

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

