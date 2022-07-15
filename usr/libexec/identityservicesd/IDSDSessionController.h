//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, IMMultiQueue, NSMutableDictionary;

@interface IDSDSessionController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_sessions;	// 16 = 0x10
    FTMessageDelivery *_messageDelivery;	// 24 = 0x18
    IMMultiQueue *_sessionIDMultiQueue;	// 32 = 0x20
    _Bool _reportedReceivedMKMFromPush;	// 40 = 0x28
    _Bool _reportedReceivedMKMFromQR;	// 41 = 0x29
}

+ (id)sharedInstance;	// IMP=0x00400000002f3c20
- (void).cxx_destruct;	// IMP=0x00200000003055f0
@property(readonly) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
- (void)updateCriticalReliabilityState;	// IMP=0x00100000003050d0
- (id)sessionIDForAlias:(id)arg1 salt:(id)arg2;	// IMP=0x0010000000304cd0
- (id)groupSessionGroupIDs;	// IMP=0x00100000003049e0
- (id)sessionWithGroupUUID:(id)arg1;	// IMP=0x0010000000304450
- (id)sessionWithGroupID:(id)arg1;	// IMP=0x0010000000303eb0
- (id)sessionWithInstanceID:(id)arg1;	// IMP=0x0010000000303930
- (id)sessionWithUniqueID:(id)arg1;	// IMP=0x00100000003036b0
- (id)_specificOriginatorFromID:(id)arg1 senderToken:(id)arg2 accountUniqueID:(id)arg3;	// IMP=0x00100000003026f0
- (void)_handleClientDeath:(id)arg1;	// IMP=0x0010000000301f50
- (_Bool)endAllSessionsForService:(id)arg1 withReason:(unsigned int)arg2;	// IMP=0x0010000000301580
- (void)cleanupSessionsForClient:(id)arg1;	// IMP=0x0010000000300ca0
- (void)cleanupSessionWithChannelDestination:(id)arg1;	// IMP=0x0010000000300bb0
- (void)cleanupSessionWithInstanceID:(id)arg1;	// IMP=0x0010000000300870
- (void)cleanupSession:(id)arg1 shouldCleanSessionStatus:(_Bool)arg2;	// IMP=0x0010000000300310
- (void)processIncomingGroupSessionMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 toID:(id)arg4 topic:(id)arg5 idsMessageContext:(id)arg6;	// IMP=0x00100000002fc570
- (void)processIncomingSessionReinitiateMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00100000002fbfe0
- (void)processIncomingSessionEndMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00100000002fba50
- (void)processIncomingSessionMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00100000002fb4c0
- (void)processIncomingSessionCancelMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00100000002faf30
- (void)processIncomingSessionDeclineMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00100000002fa9a0
- (void)processIncomingSessionAcceptMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00100000002fa410
- (void)processIncomingInvitationWithPayload:(id)arg1 topic:(id)arg2 fromToken:(id)arg3 fromID:(id)arg4 toID:(id)arg5 idsMessageContext:(id)arg6 messageContext:(id)arg7;	// IMP=0x00100000002f6070
- (id)setupNewIncomingSessionWithOptions:(id)arg1;	// IMP=0x00100000002f51d0
- (id)setupNewOutgoingSessionWithOptions:(id)arg1;	// IMP=0x00100000002f4040
- (void)dealloc;	// IMP=0x00100000002f3fe0
- (id)init;	// IMP=0x00100000002f3ce0

@end
