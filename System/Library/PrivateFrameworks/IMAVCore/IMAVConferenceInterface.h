//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IMAVInterface.h"

@class AVConference, NSLock, NSMutableArray, NSMutableDictionary, NSNumber;

@interface IMAVConferenceInterface : IMAVInterface
{
    NSMutableArray *_avConferencesToCleanup;	// 8 = 0x8
    NSMutableDictionary *_avConferences;	// 16 = 0x10
    NSLock *_avConferencesLock;	// 24 = 0x18
    _Bool _duringInit;	// 32 = 0x20
    _Bool _pendingCleanup;	// 33 = 0x21
    NSNumber *_sendingVideoExpected;	// 40 = 0x28
}

+ (void)_postParticipantScreenAttributesChangeNotification:(id)arg1 cameraChanged:(_Bool)arg2 orientationChanged:(_Bool)arg3 aspectChanged:(_Bool)arg4 cameraWillSwitch:(_Bool)arg5 camera:(unsigned int)arg6 orentation:(unsigned int)arg7 aspect:(struct CGSize)arg8;	// IMP=0x0010000000037ded
+ (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(_Bool)arg2 orientationChanged:(_Bool)arg3 aspectChanged:(_Bool)arg4 contentRectChanged:(_Bool)arg5 cameraWillSwitch:(_Bool)arg6 camera:(unsigned int)arg7 orentation:(unsigned int)arg8 aspect:(struct CGSize)arg9 contentRect:(struct CGRect)arg10;	// IMP=0x0010000000037aba
+ (_Bool)_useMultipleAVConference;	// IMP=0x001000000002f1e2
- (void).cxx_destruct;	// IMP=0x000000000003e236
@property(retain, nonatomic, getter=isSendingVideoExpected) NSNumber *sendingVideoExpected; // @synthesize sendingVideoExpected=_sendingVideoExpected;
- (void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2 isFinalUpdate:(_Bool)arg3;	// IMP=0x000000000003da29
- (_Bool)_submitEndCallMetric:(id)arg1 forCallID:(long long)arg2;	// IMP=0x000000000003d974
- (_Bool)_submitLoggingInformation:(id)arg1 forChat:(id)arg2;	// IMP=0x000000000003d6f0
- (void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(struct CGSize)arg2 localPortraitAspectRatio:(struct CGSize)arg3;	// IMP=0x000000000003d428
- (void)chatRelayedStatusChanged:(id)arg1;	// IMP=0x000000000003d20f
- (void)chatStateUpdated;	// IMP=0x000000000003d157
- (id)_controller;	// IMP=0x000000000003d0f1
@property(readonly, nonatomic) AVConference *controller;
- (void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2;	// IMP=0x000000000003cd05
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;	// IMP=0x000000000003c8ad
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;	// IMP=0x000000000003c455
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;	// IMP=0x000000000003bf06
- (_Bool)supportsRelay;	// IMP=0x000000000003befe
- (void)setLocalVideoBackLayer:(void *)arg1;	// IMP=0x000000000003be87
- (void *)localVideoBackLayer;	// IMP=0x000000000003be18
- (void)setRemoteVideoPresentationState:(unsigned int)arg1 forChat:(id)arg2;	// IMP=0x000000000003be12
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1 forChat:(id)arg2;	// IMP=0x000000000003be0c
- (void)setLocalVideoLayer:(void *)arg1;	// IMP=0x000000000003bd95
- (void *)localVideoLayer;	// IMP=0x000000000003bd26
- (_Bool)supportsLayers;	// IMP=0x000000000003bd1e
- (void)serverDiedForConference:(id)arg1;	// IMP=0x000000000003bb1d
- (void)conference:(id)arg1 didChangeLocalVariablesForCallID:(long long)arg2;	// IMP=0x000000000003b93f
- (void)conference:(id)arg1 localIPChange:(id)arg2 withCallID:(long long)arg3;	// IMP=0x000000000003b684
- (void)conference:(id)arg1 remoteVideoPaused:(_Bool)arg2 callID:(long long)arg3;	// IMP=0x000000000003b344
- (void)conference:(id)arg1 remoteAudioPaused:(_Bool)arg2 callID:(long long)arg3;	// IMP=0x000000000003b027
- (void)conference:(id)arg1 withCallID:(long long)arg2 didPauseAudio:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000003ae2d
- (void)conference:(id)arg1 reinitializeCallForCallID:(unsigned int)arg2;	// IMP=0x000000000003abc8
- (void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(_Bool)arg3;	// IMP=0x000000000003a8e4
- (void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;	// IMP=0x000000000003a5dd
- (void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(_Bool)arg3;	// IMP=0x000000000003a3f8
- (void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3;	// IMP=0x000000000003a03c
- (void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3;	// IMP=0x0000000000039c80
- (void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3;	// IMP=0x0000000000038def
- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3;	// IMP=0x000000000003864f
- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3;	// IMP=0x0000000000037ffe
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;	// IMP=0x00000000000376c4
- (void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;	// IMP=0x0000000000037558
- (void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2;	// IMP=0x00000000000373ec
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3;	// IMP=0x00000000000373d7
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3 callMetadata:(id)arg4;	// IMP=0x0000000000036f75
- (void)conference:(id)arg1 didStartSession:(_Bool)arg2 withUserInfo:(id)arg3;	// IMP=0x00000000000366bc
- (_Bool)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(_Bool)arg4 callInfo:(id)arg5;	// IMP=0x000000000003549c
- (void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2;	// IMP=0x0000000000033b1f
- (id)natTypeForAVChat:(id)arg1;	// IMP=0x0000000000033894
- (id)getNatIPFromICEData:(id)arg1;	// IMP=0x00000000000336c9
- (void)_notifyAboutPotentialCallForChat:(id)arg1;	// IMP=0x00000000000335be
- (void)cancelConferenceForAVChat:(id)arg1;	// IMP=0x0000000000033053
- (int)avChat:(id)arg1 endConferenceForUserID:(id)arg2;	// IMP=0x0000000000032b2e
- (void)_avChatDealloc:(id)arg1;	// IMP=0x00000000000326ef
- (void)endAVConferenceWithChat:(id)arg1 callID:(long long)arg2;	// IMP=0x000000000003266e
- (int)endConferenceForAVChat:(id)arg1;	// IMP=0x000000000003265a
- (_Bool)stopPreview;	// IMP=0x0000000000032613
- (_Bool)startPreviewWithError:(id *)arg1;	// IMP=0x000000000003255a
- (unsigned long long)capabilities;	// IMP=0x000000000003254f
- (unsigned long long)capabilitiesOfCPU;	// IMP=0x000000000003253d
- (unsigned long long)capabilitiesOfNetwork;	// IMP=0x000000000003252b
- (void)conference:(id)arg1 callID:(long long)arg2 setPauseVideo:(_Bool)arg3;	// IMP=0x0000000000032400
- (void)avChat:(id)arg1 setSendingVideo:(_Bool)arg2;	// IMP=0x0000000000032125
- (_Bool)isSendingVideoForAVChat:(id)arg1;	// IMP=0x0000000000031ed2
- (void)avChat:(id)arg1 setSendingAudio:(_Bool)arg2;	// IMP=0x0000000000031c0e
- (_Bool)isSendingAudioForAVChat:(id)arg1;	// IMP=0x00000000000319b6
- (void)avChat:(id)arg1 setPaused:(_Bool)arg2;	// IMP=0x000000000003199e
- (_Bool)isPausedForAVChat:(id)arg1;	// IMP=0x0000000000031989
- (void)avChat:(id)arg1 setMute:(_Bool)arg2;	// IMP=0x00000000000317f4
- (_Bool)isMuteForAVChat:(id)arg1;	// IMP=0x00000000000316f8
- (void)_conferenceEnded:(id)arg1;	// IMP=0x00000000000315dd
- (_Bool)isAVInterfaceReady;	// IMP=0x0000000000031596
- (void)initAVInterface;	// IMP=0x000000000003142c
- (void)_queueAVConferenceForCleanup:(id)arg1;	// IMP=0x00000000000311b7
- (void)_cleanupAVInterface;	// IMP=0x0000000000030ee5
- (int)_deviceRoleForAVChat:(id)arg1;	// IMP=0x0000000000030ec9
- (id)_avChatForConference:(id)arg1 callID:(long long)arg2 errorString:(id)arg3;	// IMP=0x0000000000030a90
- (id)_imAVChatParticipantForConference:(id)arg1 callID:(long long)arg2 errorString:(id)arg3;	// IMP=0x0000000000030a31
- (id)_avChatForConference:(id)arg1;	// IMP=0x0000000000030681
- (id)_conferenceForAVChat:(id)arg1;	// IMP=0x000000000003020a
- (id)_existingConferenceForAVChatGUID:(id)arg1;	// IMP=0x0000000000030143
- (id)_existingConferenceForAVChat:(id)arg1;	// IMP=0x000000000003001a
- (_Bool)_hasAVConferenceObjectsForChatsOtherThan:(id)arg1;	// IMP=0x000000000002ff07
- (void)_configureAVConference:(id)arg1 forChat:(id)arg2;	// IMP=0x000000000002fde4
- (id)_faceTimeUUID;	// IMP=0x000000000002fc99
- (void)dealloc;	// IMP=0x000000000002fbc8
- (id)init;	// IMP=0x000000000002f2aa

@end

