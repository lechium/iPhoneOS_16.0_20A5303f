//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSDRelayIDSDualSession, IDSDestination, IDSDevice, NSMutableArray, NSObject, NSString;
@protocol CSDRelayIDSSessionMessengerDelegate, OS_dispatch_queue;

@interface CSDRelayIDSSessionMessenger
{
    NSMutableArray *_sessions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001c5229
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *sessions; // @synthesize sessions=_sessions;
- (void)session:(id)arg1 receivedData:(id)arg2 fromDestination:(id)arg3 device:(id)arg4;	// IMP=0x00100000001c50b0
- (void)session:(id)arg1 receivedInvitationDeclineWithData:(id)arg2 fromDestination:(id)arg3 device:(id)arg4;	// IMP=0x00100000001c4edd
- (void)session:(id)arg1 receivedInvitationCancelWithData:(id)arg2 fromDestination:(id)arg3 device:(id)arg4;	// IMP=0x00100000001c4d01
- (void)session:(id)arg1 receivedInvitationAcceptWithData:(id)arg2 fromDestination:(id)arg3 device:(id)arg4;	// IMP=0x00100000001c4b8d
- (void)session:(id)arg1 endedWithReason:(int)arg2;	// IMP=0x00100000001c47e4
- (id)deviceForFromID:(id)arg1;	// IMP=0x00100000001c475d
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;	// IMP=0x00100000001c3edb
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 toDestinations:(id)arg3 customizedForRemoteProtocolVersion:(CDUnknownBlockType)arg4 waitUntilConnected:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000001c398b
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 customizedForRemoteProtocolVersion:(CDUnknownBlockType)arg3 waitUntilConnected:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001c3967
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 customizedForRemoteProtocolVersion:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c3942
- (void)sendMessage:(id)arg1 customizedForRemoteProtocolVersion:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c3928
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c3911
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 toDestinations:(id)arg3;	// IMP=0x00100000001c38f3
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000001c38c7
- (void)_sendMessage:(id)arg1 andDeclineInvitationIfNecessaryForSession:(id)arg2;	// IMP=0x00100000001c3731
- (void)_sendMessage:(id)arg1 andCancelInvitationIfNecessaryForSession:(id)arg2;	// IMP=0x00100000001c35ab
- (void)sendMessage:(id)arg1 andCancelOrDeclineInvitationIfNecessaryForIdentifier:(id)arg2;	// IMP=0x00100000001c3302
- (void)sendMessage:(id)arg1 andAcceptInvitationIfNecessaryForIdentifier:(id)arg2;	// IMP=0x00100000001c2d99
- (void)sendMessage:(id)arg1 andStartSessionIfNecessaryForIdentifiers:(id)arg2 toDestination:(id)arg3 timeout:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001c2697
- (void)sendMessage:(id)arg1 andStartSessionIfNecessaryForIdentifier:(id)arg2 toDestination:(id)arg3 timeout:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001c259b
- (void)sendMessage:(id)arg1 andStartSessionIfNecessaryForIdentifier:(id)arg2 toDevicesSupportingProvider:(id)arg3 withTimeout:(long long)arg4;	// IMP=0x00100000001c1dfe
- (void)_startSession:(id)arg1 withMessage:(id)arg2 identifiers:(id)arg3 timeout:(long long)arg4 declineOnError:(_Bool)arg5;	// IMP=0x00100000001c1c2e
- (void)endEndingSessions;	// IMP=0x00100000001c1a78
- (void)cancelOrDeclineInvitationForIdentifier:(id)arg1;	// IMP=0x00100000001c198a
- (void)acceptInvitationForIdentifier:(id)arg1;	// IMP=0x00100000001c189c
- (void)prepareConnectedSessionsToEnd;	// IMP=0x00100000001c16e6
- (void)prepareSessionToEndForIdentifier:(id)arg1;	// IMP=0x00100000001c1601
- (int)sessionProtocolVersionForIdentifier:(id)arg1;	// IMP=0x00100000001c15bd
- (id)sessionForIdentifier:(id)arg1;	// IMP=0x00100000001c1419
- (id)activeSessionForIdentifier:(id)arg1;	// IMP=0x00100000001c125f
@property(readonly, nonatomic) CSDRelayIDSDualSession *currentSession;
@property(readonly, nonatomic) CSDRelayIDSDualSession *waitingSession;
- (void)_destroySession:(id)arg1;	// IMP=0x00100000001c0e5d
- (id)_createSessionToDestinations:(id)arg1;	// IMP=0x00100000001c0ca4
- (id)_createSessionToDevices:(id)arg1;	// IMP=0x00100000001c09de
- (id)_createSessionToAllDevicesSupportingProvider:(id)arg1;	// IMP=0x00100000001c06f7
@property(readonly, nonatomic) IDSDevice *deviceWithActiveSession;
@property(readonly, nonatomic) IDSDestination *destinationWithActiveSession;
- (void)performBlockOnTransportAvailability:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000001c0436
- (void)dealloc;	// IMP=0x00100000001c03c1
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001c02d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CSDRelayIDSSessionMessengerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

