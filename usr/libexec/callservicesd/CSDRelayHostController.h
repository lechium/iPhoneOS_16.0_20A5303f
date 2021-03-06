//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSDRelayHostController
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001897fa
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)pushHostedCallsForRemoteInviteDictionary:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000188fb1
- (void)handlePickRouteMessageFromClient:(id)arg1;	// IMP=0x0010000000188ef9
- (void)handlePushRelayingCallsMessageFromClient:(id)arg1;	// IMP=0x001000000018898c
- (void)handlePullHostedCallsMessageFromClient:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001888de
- (void)handleRequestCallContextMessageFromClient:(id)arg1;	// IMP=0x001000000018881e
- (void)handleSendHardPauseDigitsMessageFromClient:(id)arg1;	// IMP=0x00100000001885be
- (void)handleDisconnectAllCallsMessageFromClient:(id)arg1;	// IMP=0x00100000001884ff
- (void)handleDisconnectCurrentCallAndActivateHeldMessageFromClient:(id)arg1;	// IMP=0x0010000000188440
- (void)handleHoldActiveAndAnswerMessageFromClient:(id)arg1;	// IMP=0x0010000000188231
- (void)handleEndHeldAndAnswerMessageFromClient:(id)arg1;	// IMP=0x0010000000188022
- (void)handleEndActiveAndAnswerMessageFromClient:(id)arg1;	// IMP=0x0010000000187e13
- (void)handleSwapCallsMessageFromClient:(id)arg1;	// IMP=0x0010000000187dcf
- (void)handleUngroupCallMessageFromClient:(id)arg1;	// IMP=0x0000000000187c4f
- (void)handleGroupCallMessageFromClient:(id)arg1;	// IMP=0x001000000018774c
- (void)handleUnholdCallMessageFromClient:(id)arg1;	// IMP=0x00100000001875cc
- (void)handleHoldCallMessageFromClient:(id)arg1;	// IMP=0x001000000018744c
- (void)handleDisconnectCallMessageFromClient:(id)arg1;	// IMP=0x001000000018724e
- (void)handleAnswerCallMessageFromClient:(id)arg1 destination:(id)arg2 device:(id)arg3;	// IMP=0x0010000000186c2e
- (void)handleDialCallMessageFromClient:(id)arg1 destination:(id)arg2 device:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000185b35
- (void)_launchInCallApplicationForOutgoingCallOnHostIfNecessary;	// IMP=0x0010000000185a1b
- (void)_conferenceTransport:(id)arg1 didStopForCall:(id)arg2 cleanly:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000018573a
- (void)_answerHostedCall:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000185222
- (id)callWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x0010000000185171
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000185103

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

