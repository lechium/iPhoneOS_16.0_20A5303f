//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAudioSession, CSDPauseDigitsQueue, CSDProviderDisplayMonitor, CXAbstractProviderSource, CXCallFailureContext, CXCallSource, CXCallUpdate, NSString, NSURL, NSUUID, TUCallScreenShareAttributes, TUParticipant;
@protocol CSDProviderCallDelegate, TUFeatureFlags;

@interface CSDProviderCall
{
    _Bool _outgoing;	// 8 = 0x8
    _Bool _wantsStagingArea;	// 9 = 0x9
    _Bool _video;	// 10 = 0xa
    _Bool _sharingScreen;	// 11 = 0xb
    _Bool _expanseProvider;	// 12 = 0xc
    _Bool _mixesVoiceWithMedia;	// 13 = 0xd
    _Bool _mediaPlaybackOnExternalDevice;	// 14 = 0xe
    _Bool _held;	// 15 = 0xf
    _Bool _sendingVideo;	// 16 = 0x10
    _Bool _underlyingUplinkMuted;	// 17 = 0x11
    _Bool _shouldAcceptDateConnectedProviderUpdates;	// 18 = 0x12
    int _ttyType;	// 20 = 0x14
    int _originatingUIType;	// 24 = 0x18
    TUParticipant *_activeRemoteParticipant;	// 32 = 0x20
    id <TUFeatureFlags> _featureFlags;	// 40 = 0x28
    NSURL *_imageURL;	// 48 = 0x30
    long long _bluetoothAudioFormat;	// 56 = 0x38
    TUCallScreenShareAttributes *_screenShareAttributes;	// 64 = 0x40
    id <CSDProviderCallDelegate> _providerCallDelegate;	// 72 = 0x48
    CXCallSource *_backingCallSource;	// 80 = 0x50
    CXAbstractProviderSource *_providerSource;	// 88 = 0x58
    long long _endedReason;	// 96 = 0x60
    CXCallFailureContext *_failureContext;	// 104 = 0x68
    CSDProviderDisplayMonitor *_providerDisplayMonitor;	// 112 = 0x70
    NSString *_backingCallSourceIdentifier;	// 120 = 0x78
    CXCallUpdate *_mergedCallUpdate;	// 128 = 0x80
    CSDPauseDigitsQueue *_pauseDigitsQueue;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0020000000058209
@property(retain, nonatomic) CSDPauseDigitsQueue *pauseDigitsQueue; // @synthesize pauseDigitsQueue=_pauseDigitsQueue;
@property(retain, nonatomic) CXCallUpdate *mergedCallUpdate; // @synthesize mergedCallUpdate=_mergedCallUpdate;
@property(readonly, copy, nonatomic) NSString *backingCallSourceIdentifier; // @synthesize backingCallSourceIdentifier=_backingCallSourceIdentifier;
@property(readonly, nonatomic) CSDProviderDisplayMonitor *providerDisplayMonitor; // @synthesize providerDisplayMonitor=_providerDisplayMonitor;
@property(retain, nonatomic) CXCallFailureContext *failureContext; // @synthesize failureContext=_failureContext;
@property(nonatomic) _Bool shouldAcceptDateConnectedProviderUpdates; // @synthesize shouldAcceptDateConnectedProviderUpdates=_shouldAcceptDateConnectedProviderUpdates;
@property(nonatomic, getter=isUnderlyingUplinkMuted) _Bool underlyingUplinkMuted; // @synthesize underlyingUplinkMuted=_underlyingUplinkMuted;
@property(nonatomic) _Bool sendingVideo; // @synthesize sendingVideo=_sendingVideo;
@property(nonatomic) long long endedReason; // @synthesize endedReason=_endedReason;
@property(nonatomic, getter=isHeld) _Bool held; // @synthesize held=_held;
@property(readonly, nonatomic) CXAbstractProviderSource *providerSource; // @synthesize providerSource=_providerSource;
@property(retain, nonatomic) CXCallSource *backingCallSource; // @synthesize backingCallSource=_backingCallSource;
@property(nonatomic) __weak id <CSDProviderCallDelegate> providerCallDelegate; // @synthesize providerCallDelegate=_providerCallDelegate;
@property(readonly, nonatomic) _Bool mediaPlaybackOnExternalDevice; // @synthesize mediaPlaybackOnExternalDevice=_mediaPlaybackOnExternalDevice;
@property(readonly, nonatomic) int originatingUIType; // @synthesize originatingUIType=_originatingUIType;
@property(readonly, nonatomic, getter=isExpanseProvider) _Bool expanseProvider; // @synthesize expanseProvider=_expanseProvider;
- (id)screenShareAttributes;	// IMP=0x0010000000058076
- (_Bool)isSharingScreen;	// IMP=0x0010000000058066
@property(nonatomic) _Bool wantsStagingArea; // @synthesize wantsStagingArea=_wantsStagingArea;
- (_Bool)isOutgoing;	// IMP=0x0010000000058036
- (id)imageURL;	// IMP=0x0010000000058025
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(copy, nonatomic) TUParticipant *activeRemoteParticipant; // @synthesize activeRemoteParticipant=_activeRemoteParticipant;
- (id)imageURLForCXSandboxExtendedURL:(id)arg1;	// IMP=0x0010000000057b1f
- (id)activeRemoteParticipantForCallUpdate:(id)arg1;	// IMP=0x00100000000579ee
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)arg1;	// IMP=0x001000000005795a
- (void)pauseDigitsQueueChanged:(id)arg1;	// IMP=0x001000000005789e
- (void)_sendSoftPauseDigitsIfNecessary;	// IMP=0x001000000005771d
- (void)_sendDTMFDigits:(id)arg1 type:(long long)arg2;	// IMP=0x00100000000575c5
- (id)tuScreenShareAttributesForScreenAttributes:(id)arg1;	// IMP=0x0010000000057372
- (id)cxScreenShareAttributesForCallAttributes:(id)arg1;	// IMP=0x0010000000057196
- (void)dequeueNextPauseDigits;	// IMP=0x00100000000570dd
- (void)setRemoteVideoPresentationState:(int)arg1;	// IMP=0x0010000000056f94
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;	// IMP=0x0010000000056e36
- (void)playRemoteDTMFToneForKey:(unsigned char)arg1;	// IMP=0x0010000000056d08
- (void)sendHardPauseDigits;	// IMP=0x0010000000056b11
- (void)setDownlinkMuted:(_Bool)arg1;	// IMP=0x0010000000056abe
@property(nonatomic) int ttyType; // @synthesize ttyType=_ttyType;
- (void)setUplinkMuted:(_Bool)arg1;	// IMP=0x0010000000056666
- (void)setSharingScreen:(_Bool)arg1 attributes:(id)arg2;	// IMP=0x0010000000056350
- (void)setSharingScreen:(_Bool)arg1;	// IMP=0x001000000005622e
- (void)setScreenShareAttributes:(id)arg1;	// IMP=0x0010000000056036
- (void)setIsSendingVideo:(_Bool)arg1;	// IMP=0x0010000000055f62
- (void)setProviderFailureReasonIfNecessary:(long long)arg1;	// IMP=0x0010000000055e75
- (void)disconnectWithReason:(int)arg1;	// IMP=0x0010000000055d97
- (void)ungroup;	// IMP=0x0010000000055ccf
- (void)groupWithOtherCall:(id)arg1;	// IMP=0x0010000000055bc1
- (void)_setIsOnHold:(_Bool)arg1;	// IMP=0x0010000000055aa4
- (void)unhold;	// IMP=0x0010000000055a61
- (void)hold;	// IMP=0x0010000000055a1b
- (void)answerWithRequest:(id)arg1;	// IMP=0x0010000000055809
- (void)joinConversationWithRequest:(id)arg1;	// IMP=0x0010000000054e55
- (void)dialWithRequest:(id)arg1 displayContext:(id)arg2;	// IMP=0x0010000000054cfc
- (id)startCallActionWithDialRequest:(id)arg1;	// IMP=0x00100000000549c2
- (void)setMediaPlaybackOnExternalDevice:(_Bool)arg1;	// IMP=0x001000000005491d
- (void)setMixesVoiceWithMedia:(_Bool)arg1;	// IMP=0x0010000000054878
@property(nonatomic) long long bluetoothAudioFormat; // @synthesize bluetoothAudioFormat=_bluetoothAudioFormat;
- (void)setTTYType:(int)arg1;	// IMP=0x00100000000546c7
- (void)setEndpointOnCurrentDevice:(_Bool)arg1;	// IMP=0x00100000000545dc
- (void)setDateConnected:(id)arg1;	// IMP=0x0010000000054584
@property(copy, nonatomic) NSUUID *callGroupUUID;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
- (void);	// IMP=0x0010000000054218
- (void)setOutgoing:(_Bool)arg1;	// IMP=0x0010000000054189
- (_Bool)usesSystemMuting;	// IMP=0x00100000000540b6
- (long long)serviceStatus;	// IMP=0x0010000000054063
- (long long)spatialAudioSourceIdentifier;	// IMP=0x0010000000053f8f
- (long long)outputAudioPowerSpectrumToken;	// IMP=0x0010000000053ebb
- (long long)inputAudioPowerSpectrumToken;	// IMP=0x0010000000053de7
- (unsigned long long)initialLinkType;	// IMP=0x0010000000053d13
- (CDStruct_6ad76789)providerAuditToken;	// IMP=0x0010000000053cb5
- (int)providerProcessIdentifier;	// IMP=0x0010000000053c71
- (_Bool)isDownlinkMuted;	// IMP=0x0010000000053c26
- (_Bool)isUplinkMuted;	// IMP=0x0010000000053b85
- (_Bool)isSendingVideo;	// IMP=0x0010000000053b73
- (int)hardPauseDigitsState;	// IMP=0x0010000000053ab6
- (id)hardPauseDigits;	// IMP=0x00100000000539d4
- (_Bool)hasEnded;	// IMP=0x00100000000539a1
- (_Bool)hasConnected;	// IMP=0x001000000005396e
- (_Bool)hasStartedConnecting;	// IMP=0x001000000005393b
- (int)callStatusFromUnderlyingSource;	// IMP=0x00100000000538a0
- (id)provider;	// IMP=0x0010000000053820
- (_Bool)isConversation;	// IMP=0x00100000000537dc
- (_Bool)isMutuallyExclusiveCall;	// IMP=0x0010000000053798
- (_Bool)shouldSuppressInCallUI;	// IMP=0x0010000000053754
- (_Bool)prefersExclusiveAccessToCellularNetwork;	// IMP=0x0010000000053710
- (_Bool)mayRequireBreakBeforeMake;	// IMP=0x00100000000536cc
- (id)remoteParticipantHandles;	// IMP=0x00100000000535c8
- (id)handoffActivityUserInfo;	// IMP=0x00100000000534b6
- (id)handoffDynamicIdentifier;	// IMP=0x001000000005343c
- (_Bool)supportsEmergencyFallback;	// IMP=0x00100000000533f8
- (_Bool)isFailureExpected;	// IMP=0x00100000000533b4
- (_Bool)isEmergency;	// IMP=0x0010000000053370
- (_Bool)supportsTTYWithVoice;	// IMP=0x00100000000532e0
- (_Bool)isOneToOneModeEnabled;	// IMP=0x0010000000053250
- (id)providerContext;	// IMP=0x0010000000053200
@property(readonly, nonatomic) _Bool ignoresBluetoothDeviceUID;
@property(readonly, nonatomic) _Bool mixesVoiceWithMedia; // @synthesize mixesVoiceWithMedia=_mixesVoiceWithMedia;
- (long long)soundRegion;	// IMP=0x0010000000053129
- (_Bool)needsManualInCallSounds;	// IMP=0x00100000000530e5
- (id)audioMode;	// IMP=0x0010000000053014
- (id)audioCategory;	// IMP=0x0010000000052f43
@property(readonly, nonatomic) AVAudioSession *proxyAVAudioSession;
- (long long)audioInterruptionOperationMode;	// IMP=0x0010000000052e26
- (long long)audioInterruptionProviderType;	// IMP=0x0010000000052dcd
- (id)activeRemoteParticipants;	// IMP=0x0010000000052cd1
- (id)localSenderIdentityAccountUUID;	// IMP=0x0010000000052bd8
- (id)localSenderIdentityUUID;	// IMP=0x0010000000052b88
- (id)isoCountryCode;	// IMP=0x0010000000052b38
- (_Bool)isRemoteUplinkMuted;	// IMP=0x0010000000052af4
- (long long)videoStreamToken;	// IMP=0x0010000000052ab0
- (_Bool)isThirdPartyVideo;	// IMP=0x0010000000052a2d
- (_Bool)isBlocked;	// IMP=0x0010000000052983
- (_Bool)isUsingBaseband;	// IMP=0x00100000000528d1
- (id)handle;	// IMP=0x00100000000526cd
- (id)callHistoryIdentifier;	// IMP=0x0010000000052603
- (id)callerNameFromNetwork;	// IMP=0x0010000000052563
- (long long)providerEndedReason;	// IMP=0x001000000005251f
- (long long)providerErrorCode;	// IMP=0x00100000000524db
- (id)endedReasonUserInfo;	// IMP=0x001000000005247c
- (void)updateForDisconnection;	// IMP=0x001000000005151a
- (void)updateWithCallUpdate:(id)arg1 notifyDelegate:(_Bool)arg2;	// IMP=0x0010000000050c65
- (void)updateWithCallUpdate:(id)arg1;	// IMP=0x0010000000050c4e
- (void)systemMuteStatusChanged:(id)arg1;	// IMP=0x0010000000050af2
- (void)dealloc;	// IMP=0x0010000000050a7d
- (id)initWithHandoffContext:(id)arg1 backingCallSource:(id)arg2;	// IMP=0x0010000000050962
- (id)initOutgoingWithJoinConversationRequest:(id)arg1;	// IMP=0x001000000005064c
- (id)initOutgoingWithRequestedStartCallAction:(id)arg1 backingCallSource:(id)arg2;	// IMP=0x00100000000504ee
- (id)initOutgoingWithDialRequest:(id)arg1;	// IMP=0x00100000000503bd
- (id)initOutgoingWithUpdate:(id)arg1 callUUID:(id)arg2 backingCallSource:(id)arg3 isExpanseProvider:(_Bool)arg4;	// IMP=0x00100000000502ba
- (id)initOutgoingWithUniqueProxyIdentifier:(id)arg1 backingCallSourceIdentifier:(id)arg2 callUpdate:(id)arg3 isVideo:(_Bool)arg4 endpointOnCurrentDevice:(_Bool)arg5 originatingUIType:(int)arg6;	// IMP=0x001000000004ffae
- (id)initIncomingWithBackingCallSource:(id)arg1 UUID:(id)arg2 update:(id)arg3;	// IMP=0x001000000004fb29
- (id)initWithUniqueProxyIdentifier:(id)arg1 configuration:(id)arg2;	// IMP=0x001000000004f8ff
- (id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(_Bool)arg2;	// IMP=0x001000000004f854

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
