//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDClientManager, MISSING_TYPE, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CSDReportingController : NSObject
{
    NSMutableArray *_reporters;	// 8 = 0x8
    NSMutableDictionary *_reportingSessionByStreamToken;	// 16 = 0x10
    NSMutableSet *_conversationUUIDs;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CSDClientManager *_clientManager;	// 40 = 0x28
}

+ (id)sharedInstanceWithQueue:(id)arg1;	// IMP=0x00200000001b2927
+ (id)sharedInstance;	// IMP=0x00100000001b28f3
- (void).cxx_destruct;	// IMP=0x00200000001b8090
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableSet *conversationUUIDs; // @synthesize conversationUUIDs=_conversationUUIDs;
@property(readonly, nonatomic) NSMutableDictionary *reportingSessionByStreamToken; // @synthesize reportingSessionByStreamToken=_reportingSessionByStreamToken;
@property(retain, nonatomic) NSMutableArray *reporters; // @synthesize reporters=_reporters;
- (void)conversationManager:(id)arg1 addedActivatedLink:(id)arg2;	// IMP=0x00100000001b7ec9
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;	// IMP=0x00100000001b7c54
- (void)reportingController:(id)arg1 letMeInRequestStateChangedForConversation:(id)arg2;	// IMP=0x00100000001b7ad0
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;	// IMP=0x00100000001b794c
- (void)conversationManager:(id)arg1 remoteMembersChangedForConversation:(id)arg2;	// IMP=0x00100000001b77c8
- (void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;	// IMP=0x00100000001b7644
- (void)conversationsChangedForConversationManager:(id)arg1;	// IMP=0x00100000001b7276
@property(readonly, copy, nonatomic) NSArray *calls;
- (void)momentsReportingSession:(id)arg1 didGenerateUsageReport:(id)arg2;	// IMP=0x00100000001b6fae
- (void)didReceiveResultsForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b6f9c
- (void)didStartRequestForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b6f8a
- (void)didCleanUpForStream:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b6f78
- (void)registeredStream:(long long)arg1 withAvailability:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b6f66
- (void)momentsController:(id)arg1 didReceiveResultsForStream:(long long)arg2 withTransactionID:(id)arg3;	// IMP=0x00100000001b6f4e
- (void)momentsController:(id)arg1 didStartRequestForStream:(long long)arg2 withTransactionID:(id)arg3;	// IMP=0x00100000001b6f36
- (MISSING_TYPE *)momentsController:didCleanUpForStream: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001b6f21
- (void)momentsController:(id)arg1 registeredStream:(long long)arg2 withAvailability:(int)arg3;	// IMP=0x00100000001b6f09
- (void)didReceiveResultsForStream:(long long)arg1 withTransactionID:(id)arg2;	// IMP=0x00100000001b6e4b
- (void)didStartRequestForStream:(long long)arg1 withTransactionID:(id)arg2;	// IMP=0x00100000001b6d8d
- (void)didCleanUpForStream:(long long)arg1;	// IMP=0x00100000001b6cf0
- (void)registeredStream:(long long)arg1 withAvailability:(int)arg2;	// IMP=0x00100000001b6c20
- (void)didEndSession:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x00100000001b69da
- (void)sendUserScoreToRTCReporting:(id)arg1 withScore:(int)arg2;	// IMP=0x00100000001b67de
- (void)sentLetMeInRequestForConversation:(id)arg1 isApproved:(_Bool)arg2;	// IMP=0x00100000001b65db
- (void)receivedLetMeInRequestForConversation:(id)arg1;	// IMP=0x00100000001b63fd
- (void)voipPushDroppedOnTheFloor:(id)arg1;	// IMP=0x00100000001b621f
- (void)voipAppBecameDisabledFromLaunching:(id)arg1;	// IMP=0x00100000001b6041
- (void)voipAppFailedToPostIncomingCall:(id)arg1;	// IMP=0x00100000001b5e63
- (void)avcBlobRequestMessageRetrySucceededForConversation:(id)arg1;	// IMP=0x00100000001b5c85
- (void)avcBlobRequestMessageRetryFailedForConversation:(id)arg1;	// IMP=0x00100000001b5aa7
- (void)avcBlobRequestMessageRetryStartedForConversation:(id)arg1;	// IMP=0x00100000001b58c9
- (void)messageRetrySucceededForConversation:(id)arg1;	// IMP=0x00100000001b56eb
- (void)messageRetryFailedForConversation:(id)arg1;	// IMP=0x00100000001b550d
- (void)messageRetryStartedForConversation:(id)arg1;	// IMP=0x00100000001b532f
- (void)avcBlobRecoveryTimedOutForConversation:(id)arg1;	// IMP=0x00100000001b5151
- (void)avcBlobRecoveryStartedForConversation:(id)arg1;	// IMP=0x00100000001b4f73
- (void)groupActivitiesReportsReceived:(id)arg1 forConversation:(id)arg2;	// IMP=0x00100000001b4d71
- (void)chatReceived:(id)arg1;	// IMP=0x00100000001b4b93
- (void)idsReportsReceived:(id)arg1 forSessionWithUUID:(id)arg2;	// IMP=0x00100000001b49eb
- (void)idsReportsReceived:(id)arg1 forConversation:(id)arg2;	// IMP=0x00100000001b4843
- (void)createConversationReportingSession:(id)arg1;	// IMP=0x00100000001b456d
- (void)createOneToOneFTReportingSessionForCallWithUUID:(id)arg1 withReportingHierarchyToken:(id)arg2 withVideo:(_Bool)arg3;	// IMP=0x00100000001b4257
- (void)reportTimedOutPickingRoute:(id)arg1;	// IMP=0x00100000001b3f53
- (void)reportRouteWasPicked:(id)arg1;	// IMP=0x00100000001b3c4f
- (void)reportProviderFailedWithAction:(id)arg1 forCall:(id)arg2;	// IMP=0x00100000001b3a3b
- (void)reportTransactionGroupCompleted:(id)arg1;	// IMP=0x00100000001b385d
- (void)reportRelayMessageReceived:(id)arg1 fromPairedDevice:(_Bool)arg2;	// IMP=0x00100000001b366a
- (void)reportAllCallsBackgrounded;	// IMP=0x00100000001b34b9
- (void)reportCallEnteredForeground:(id)arg1;	// IMP=0x00100000001b32db
- (void)handleCallStatusChanged:(id)arg1;	// IMP=0x00100000001b2fae
- (void)addReporter:(id)arg1;	// IMP=0x00100000001b2f23
- (void)dealloc;	// IMP=0x00100000001b2eae
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001b2a1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
