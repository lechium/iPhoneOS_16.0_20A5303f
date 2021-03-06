//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionManager : NSObject
{
    NSMutableDictionary *_sessions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_sessionQueue;	// 24 = 0x18
    _Bool _sharingEnabled;	// 32 = 0x20
}

+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;	// IMP=0x0010000000118dcd
+ (id)sharedInstance;	// IMP=0x0010000000118d7e
@property(nonatomic) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(readonly, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
- (void)releaseSession:(id)arg1;	// IMP=0x000000000011cf99
- (id)participantConfigFromXPCDictionary:(id)arg1;	// IMP=0x000000000011ccb3
- (void)deregisterBlocksForService;	// IMP=0x000000000011cabc
- (void)registerBlocksForService;	// IMP=0x000000000011ab43
- (void)vcSession:(id)arg1 participantID:(id)arg2 didDetectError:(id)arg3;	// IMP=0x000000000011aab9
- (void)vcSession:(id)arg1 participantID:(id)arg2 didChangeMediaPriority:(unsigned char)arg3 description:(id)arg4;	// IMP=0x000000000011a9cd
- (void)vcSessionShouldReconnect:(id)arg1;	// IMP=0x000000000011a987
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteMediaStateDidChange:(unsigned int)arg3 forMediaType:(unsigned int)arg4;	// IMP=0x000000000011a8ab
- (void)vcSession:(id)arg1 participantID:(id)arg2 mediaStateDidChange:(unsigned int)arg3 forMediaType:(unsigned int)arg4 didSucceed:(_Bool)arg5 error:(id)arg6;	// IMP=0x000000000011a786
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoPausedDidChange:(_Bool)arg3;	// IMP=0x000000000011a6d4
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioPausedDidChange:(_Bool)arg3;	// IMP=0x000000000011a622
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000000011a526
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000000011a42a
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteScreenEnabledDidChange:(_Bool)arg3;	// IMP=0x000000000011a378
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoEnabledDidChange:(_Bool)arg3;	// IMP=0x000000000011a2c6
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioEnabledDidChange:(_Bool)arg3;	// IMP=0x000000000011a214
- (void)vcSession:(id)arg1 participantID:(id)arg2 screenEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000000011a118
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000000011a01c
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000000119f20
- (void)vcSession:(id)arg1 oneToOneModeEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000119e4c
- (void)vcSession:(id)arg1 updateConfiguration:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000119d93
- (void)vcSession:(id)arg1 removeParticipantWithID:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000119cda
- (void)vcSession:(id)arg1 addParticipantWithID:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000119b02
- (void)vcSession:(id)arg1 downlinkRateAdaptationDidChangeWithInfo:(id)arg2;	// IMP=0x0000000000119a91
- (void)vcSession:(id)arg1 uplinkRateAdaptationDidChangeWithInfo:(id)arg2;	// IMP=0x0000000000119a20
- (void)vcSession:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x0000000000119960
- (void)vcSession:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000001198a0
- (id)sessionForStreamToken:(unsigned int)arg1;	// IMP=0x000000000011916a
- (id)sessionForUUID:(id)arg1;	// IMP=0x0000000000119042
- (void)dealloc;	// IMP=0x0000000000118fab
- (id)init;	// IMP=0x0000000000118ef5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

