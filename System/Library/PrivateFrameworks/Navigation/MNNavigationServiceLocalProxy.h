//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MNNavigationServiceClientInterface;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceLocalProxy : NSObject
{
    id <MNNavigationServiceClientInterface> _delegate;	// 8 = 0x8
    unsigned long long _navigationServiceState;	// 16 = 0x10
    CDUnknownBlockType _navigationServiceActiveBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000022150
@property(nonatomic) __weak id <MNNavigationServiceClientInterface> delegate; // @synthesize delegate=_delegate;
- (void)navigationSessionManager:(id)arg1 didReceiveTransitAlert:(id)arg2;	// IMP=0x00000000000220cd
- (void)navigationSessionManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;	// IMP=0x0000000000022071
- (void)navigationSessionManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;	// IMP=0x0000000000022015
- (void)navigationSessionManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;	// IMP=0x0000000000021fb9
- (void)navigationSessionManager:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x0000000000021f74
- (void)navigationSessionManager:(id)arg1 didProcessSpeechEvent:(id)arg2;	// IMP=0x0000000000021f18
- (void)navigationSessionManager:(id)arg1 willProcessSpeechEvent:(id)arg2;	// IMP=0x0000000000021ebc
- (void)navigationSessionManager:(id)arg1 didChangeVoiceGuidanceLevel:(unsigned long long)arg2;	// IMP=0x0000000000021e77
- (void)navigationSessionManager:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;	// IMP=0x0000000000021e1b
- (void)navigationSessionManager:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x0000000000021dbf
- (void)navigationSessionManager:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000021d63
- (void)navigationSessionManager:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000021d07
- (void)navigationSessionManager:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000021cab
- (void)navigationSessionManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;	// IMP=0x0000000000021c4f
- (void)navigationSessionManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;	// IMP=0x0000000000021bf3
- (void)navigationSessionManager:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x0000000000021bae
- (void)navigationSessionManager:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x0000000000021b52
- (void)navigationSessionManager:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x0000000000021af6
- (void)navigationSessionManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x0000000000021a9a
- (void)navigationSessionManager:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x0000000000021a3e
- (void)navigationSessionManager:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x00000000000219f9
- (void)navigationSessionManager:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x000000000002199d
- (void)navigationSessionManager:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x0000000000021941
- (void)navigationSessionManagerEndGuidanceUpdate:(id)arg1;	// IMP=0x000000000002190b
- (void)navigationSessionManagerBeginGuidanceUpdate:(id)arg1;	// IMP=0x00000000000218d5
- (void)navigationSessionManagerHideSecondaryStep:(id)arg1;	// IMP=0x000000000002189f
- (void)navigationSessionManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;	// IMP=0x00000000000217ed
- (void)navigationSessionManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x00000000000217a8
- (void)navigationSessionManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;	// IMP=0x00000000000216e2
- (void)navigationSessionManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x0000000000021693
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;	// IMP=0x0000000000021637
- (void)navigationSessionManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;	// IMP=0x00000000000215c4
- (void)navigationSessionManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x0000000000021568
- (void)navigationSessionManager:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x000000000002150c
- (void)navigationSessionManager:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x00000000000214a1
- (void)navigationSessionManager:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;	// IMP=0x0000000000021445
- (void)navigationSessionManagerDidCancelReroute:(id)arg1;	// IMP=0x000000000002140f
- (void)navigationSessionManager:(id)arg1 didRerouteWithRoute:(id)arg2 location:(id)arg3 withAlternateRoutes:(id)arg4;	// IMP=0x0000000000021372
- (void)navigationSessionManagerWillReroute:(id)arg1;	// IMP=0x000000000002133c
- (void)navigationSessionManager:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;	// IMP=0x00000000000212d1
- (void)navigationSessionManager:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;	// IMP=0x0000000000021287
- (void)navigationSessionManager:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;	// IMP=0x0000000000021235
- (void)navigationSessionManager:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x00000000000211d9
- (void)navigationSessionManager:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;	// IMP=0x000000000002113c
- (void)navigationSessionManager:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;	// IMP=0x00000000000210f7
- (void)navigationSessionManagerWillResumeFromPause:(id)arg1;	// IMP=0x00000000000210c1
- (void)navigationSessionManagerWillPause:(id)arg1;	// IMP=0x000000000002108b
- (void)navigationSessionManagerDidArrive:(id)arg1;	// IMP=0x0000000000021055
- (void)navigationSessionManagerDidEnterPreArrivalState:(id)arg1;	// IMP=0x000000000002101f
- (void)navigationSessionManager:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;	// IMP=0x0000000000020faf
- (void)navigationSessionManager:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0000000000020f44
- (void)navigationSessionManager:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0000000000020ed9
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;	// IMP=0x0000000000020e7d
- (void)navigationSessionManager:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x0000000000020e33
- (void)navigationSessionManager:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x0000000000020de9
- (void)navigationSessionManager:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x0000000000020ceb
- (void)navigationSessionManager:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x0000000000020ca6
- (void)navigationSessionManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000020a35
- (void)navigationSessionManager:(id)arg1 shouldEndWithReason:(unsigned long long)arg2;	// IMP=0x0000000000020a20
- (void)navigationSessionManager:(id)arg1 didStopWithReason:(unsigned long long)arg2;	// IMP=0x00000000000209db
- (void)navigationSessionManager:(id)arg1 willStopWithReason:(unsigned long long)arg2;	// IMP=0x0000000000020996
- (void)navigationSessionManager:(id)arg1 willStartNavigationWithRoute:(id)arg2 navigationType:(long long)arg3 request:(id)arg4 response:(id)arg5 simulationType:(long long)arg6;	// IMP=0x00000000000208e3
- (unsigned long long)_serviceStateForStateType:(unsigned long long)arg1;	// IMP=0x00000000000208c2
- (void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0000000000020835
- (void)stateManager:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00000000000207a8
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000206df
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x0000000000020616
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;	// IMP=0x00000000000204da
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020454
- (void)setSimulationPosition:(double)arg1;	// IMP=0x00000000000203b9
- (void)setSimulationSpeedMultiplier:(double)arg1;	// IMP=0x000000000002031e
- (void)setSimulationSpeedOverride:(double)arg1;	// IMP=0x0000000000020283
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x00000000000201ba
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x00000000000200f1
- (void)setTracePosition:(double)arg1;	// IMP=0x0000000000020056
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x000000000001ffbb
- (void)setTraceIsPlaying:(_Bool)arg1;	// IMP=0x000000000001ff23
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;	// IMP=0x000000000001fe4b
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x000000000001fdb3
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x000000000001fd1b
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x000000000001fc77
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x000000000001fbd7
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x000000000001fb3f
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x000000000001faa7
- (void)setGuidancePromptsEnabled:(_Bool)arg1;	// IMP=0x000000000001fa0f
- (void)setHeadingOrientation:(int)arg1;	// IMP=0x000000000001f978
- (void)stopCurrentGuidancePrompt;	// IMP=0x000000000001f923
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f84b
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f782
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f6b9
- (void)changeUserOptions:(id)arg1;	// IMP=0x000000000001f5b8
- (void)setGuidanceType:(unsigned long long)arg1;	// IMP=0x000000000001f520
- (void)switchToRoute:(id)arg1;	// IMP=0x000000000001f457
- (void)forceReroute;	// IMP=0x000000000001f402
- (void)resumeOriginalDestination;	// IMP=0x000000000001f3ad
- (void)updateDestination:(id)arg1;	// IMP=0x000000000001f2e4
- (void)advanceToNextLeg;	// IMP=0x000000000001f28f
- (void)removeWaypointAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001f1f7
- (void)insertWaypoint:(id)arg1;	// IMP=0x000000000001f12e
- (void)rerouteWithWaypoints:(id)arg1;	// IMP=0x000000000001f065
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x000000000001eecc
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ecc5
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x000000000001eb85
- (void)reset;	// IMP=0x000000000001ea54
- (void)start;	// IMP=0x000000000001e94c
- (void)dealloc;	// IMP=0x000000000001e8a2
- (id)init;	// IMP=0x000000000001e84c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

