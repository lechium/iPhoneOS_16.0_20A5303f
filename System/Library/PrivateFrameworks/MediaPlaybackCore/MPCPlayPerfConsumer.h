//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCPlayPerfConsumer : NSObject
{
    NSString *_lastSiriReferenceIdentifier;	// 8 = 0x8
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 24 = 0x18
}

+ (id)coreAnalyticsEventNameWithEventType:(id)arg1;	// IMP=0x00100000000badc1
+ (id)identifier;	// IMP=0x00100000000badb4
- (void).cxx_destruct;	// IMP=0x00000000000b9264
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)sendMetricsToSiriSelfLogger:(id)arg1;	// IMP=0x00000000000b9198
- (void)sendMetricsToCoreAnalytics:(id)arg1;	// IMP=0x00000000000b9086
- (void)handleMetrics:(id)arg1;	// IMP=0x00000000000b8e1e
- (void)setupErrorHandlerForEventType:(id)arg1 errorKey:(id)arg2 prefix:(id)arg3;	// IMP=0x00000000000b8d57
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x00000000000b8d3d
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x00000000000b8adb
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x00000000000b8a77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

