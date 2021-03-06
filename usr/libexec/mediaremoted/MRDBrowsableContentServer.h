//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDBrowsableContentAPICoordinator, NSMutableArray, NSMutableDictionary, NSString;

@interface MRDBrowsableContentServer : NSObject
{
    NSMutableArray *_queuedInitiatePlaybackMessages;	// 8 = 0x8
    NSMutableArray *_queuedRelayableMessages;	// 16 = 0x10
    NSMutableDictionary *_queuedBeginLoadingBlocks;	// 24 = 0x18
    MRDBrowsableContentAPICoordinator *_apiCoordinator;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003426e
@property(readonly, nonatomic) MRDBrowsableContentAPICoordinator *apiCoordinator; // @synthesize apiCoordinator=_apiCoordinator;
- (_Bool)_messageRequiresMediaServerBlessing:(id)arg1;	// IMP=0x001000000003423f
- (_Bool)_messageCanLaunchApp:(id)arg1;	// IMP=0x001000000003421a
- (void)_scheduleEndProcessAssertionForClient:(id)arg1;	// IMP=0x001000000003419e
- (_Bool)_takeProcessAssertionForClient:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000033f8b
- (void)_handleSupportedAPIsDidChangeForClient:(id)arg1;	// IMP=0x0010000000033a5f
- (void)_handleBrowsableContentDidFinishLoadingFromClient:(id)arg1 indexPath:(CDStruct_3716a28a)arg2 withError:(id)arg3;	// IMP=0x00100000000337b6
- (void)_sendInitiatePlaybackMessage:(id)arg1;	// IMP=0x00100000000334cb
- (void)_relayMessage:(id)arg1 toClientWithBundleIDAndReply:(id)arg2;	// IMP=0x0010000000032fbc
- (void)_handleGetAppsSupportingBrowsableContentAPIsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000032f12
- (void)_handleSetSupportedBrowsableContentAPIsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000032e5b
- (void)_handleGetSupportedBrowsableContentAPIsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000032ddc
- (void)_handleRequestPlaybackInitializationMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000032ad5
- (void)_clientDidUnregisterCanBeNowPlaying:(id)arg1;	// IMP=0x0010000000032a0e
- (void)_clientDidRegisterCanBeNowPlaying:(id)arg1;	// IMP=0x0010000000032947
- (void)_clearQueuedBeginLoadingMessagesForApp:(id)arg1;	// IMP=0x0010000000032859
- (void)_sendQueuedBeginLoadingMessagesForAvailableApp:(id)arg1;	// IMP=0x00100000000326a5
- (void)_enqueueCompletion:(CDUnknownBlockType)arg1 forUnavailableDestinationApp:(id)arg2;	// IMP=0x0010000000032596
- (void)_handleBeginLoadingBrowsableContentMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000032058
- (void)collectDiagnostic:(id)arg1;	// IMP=0x001000000003203c
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000031f21
- (id)init;	// IMP=0x0010000000031ddc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Error: Property attributes should begin with the type ('T') attribute, property name: description
// Property attributes: (null)

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

