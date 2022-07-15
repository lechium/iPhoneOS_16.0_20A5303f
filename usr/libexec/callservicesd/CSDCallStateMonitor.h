//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDRouteManager, MISSING_TYPE, NSString, TUCallCenter;
@protocol CSDCallContainer, OS_dispatch_queue, OS_dispatch_source;

@interface CSDCallStateMonitor : NSObject
{
    _Bool _audioMutedForHoldMusic;	// 8 = 0x8
    int _requestCLTMThrottleUncapToken;	// 12 = 0xc
    int _lockStateNotificationToken;	// 16 = 0x10
    TUCallCenter *_callCenter;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_callDurationLimitTimer;	// 40 = 0x28
    CDUnknownBlockType _setUpBreakBeforeMakeTimeout;	// 48 = 0x30
}

+ (double)breakBeforeMakeTimeout;	// IMP=0x002000000005922b
- (void).cxx_destruct;	// IMP=0x002000000005cdd4
@property(copy, nonatomic) CDUnknownBlockType setUpBreakBeforeMakeTimeout; // @synthesize setUpBreakBeforeMakeTimeout=_setUpBreakBeforeMakeTimeout;
@property(nonatomic) int lockStateNotificationToken; // @synthesize lockStateNotificationToken=_lockStateNotificationToken;
@property(nonatomic) int requestCLTMThrottleUncapToken; // @synthesize requestCLTMThrottleUncapToken=_requestCLTMThrottleUncapToken;
@property(nonatomic, getter=isAudioMutedForHoldMusic) _Bool audioMutedForHoldMusic; // @synthesize audioMutedForHoldMusic=_audioMutedForHoldMusic;
@property(retain) NSObject<OS_dispatch_source> *callDurationLimitTimer; // @synthesize callDurationLimitTimer=_callDurationLimitTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;	// IMP=0x001000000005cc3a
- (void)setHeySiriEnabled:(_Bool)arg1;	// IMP=0x001000000005cc34
- (void)_updateCallMutingForHoldMusic;	// IMP=0x001000000005c858
- (void)_handleCallDurationTimerFired;	// IMP=0x001000000005c41d
- (void)_setUpCallDurationLimitIfNecessary;	// IMP=0x001000000005c005
- (id)_ringingTimerForCallWithIdentifier:(id)arg1;	// IMP=0x001000000005bc3b
- (MISSING_TYPE *)_handleAudioReadyForCall: /* Error: Ran out of types for this method. */;	// IMP=0x001000000005ba26
- (void)_setUpBreakBeforeMakeTimeoutIfNecessaryForCall:(id)arg1;	// IMP=0x001000000005b5c9
- (void)_pushCallToAlternateDestinationIfNecessary:(id)arg1;	// IMP=0x001000000005b185
- (void)_disconnectOrPullExistingCallsForCallIfNecessary:(id)arg1;	// IMP=0x001000000005ad30
- (void)_notifyCLTMOfIncomingCall;	// IMP=0x001000000005ac55
- (void)_handleLockStateChanged;	// IMP=0x001000000005ac4f
- (void)enableEmergencyModeIfNecessaryForCall:(id)arg1;	// IMP=0x001000000005aaf9
- (void)_handleCallWantsHoldMusicChanged:(id)arg1;	// IMP=0x001000000005aae7
- (void)_handleCallMayRequireBreakBeforeMakeChanged:(id)arg1;	// IMP=0x001000000005aad5
- (void)disconnectActiveCallsBasedOnCallStatusForCall:(id)arg1;	// IMP=0x001000000005a73c
- (void)disconnectAllCallsBesides:(id)arg1;	// IMP=0x001000000005a408
- (void)_handleCallConnected:(id)arg1;	// IMP=0x001000000005a2e9
- (void)handleCallUpgradedToVideoNotification:(id)arg1;	// IMP=0x001000000005a141
- (void)handleCallOneToOneModeChangedNotification:(id)arg1;	// IMP=0x0010000000059f11
- (void)callIsOnHoldChangedNotification:(id)arg1;	// IMP=0x0010000000059dd3
- (void)leaveAVLessConversationsIfNecessaryForCall:(id)arg1;	// IMP=0x0010000000059a0c
- (void)_handleCallStartedConnecting:(id)arg1;	// IMP=0x001000000005992c
- (void)_handleCallStatusChanged:(id)arg1;	// IMP=0x00100000000592c6
- (void)_handleCallHasStartedOutgoingChanged:(id)arg1;	// IMP=0x00100000000592b4
- (_Bool)wantsBreakBeforeMakeForCall:(id)arg1;	// IMP=0x0010000000058f9b
@property(readonly, nonatomic) CSDRouteManager *routeManager;
@property(readonly, nonatomic) id <CSDCallContainer> callContainer;
- (void)_cleanCallMediaCache;	// IMP=0x0010000000058b85
- (void)handleCallWantsHoldMusicChangedNotification:(id)arg1;	// IMP=0x0010000000058b36
- (void)handleCallMayRequireBreakBeforeMakeChangedNotification:(id)arg1;	// IMP=0x0010000000058ae7
- (void)handleCallConnectedNotification:(id)arg1;	// IMP=0x0010000000058a98
- (void)handleCallStartedConnectingNotification:(id)arg1;	// IMP=0x0010000000058a49
- (void)handleCallStatusChangedNotification:(id)arg1;	// IMP=0x0010000000058903
- (void)handleCallHasStartedOutgoingChangedNotification:(id)arg1;	// IMP=0x00100000000588b4
- (void)dealloc;	// IMP=0x00100000000587d3
- (id)initWithCallCenter:(id)arg1;	// IMP=0x00100000000582e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
