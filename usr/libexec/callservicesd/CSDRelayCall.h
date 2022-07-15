//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet, NSString, NSUUID, TUCallDisplayContext, TUCallProvider, TUHandle;
@protocol CSDRelayCallDelegate;

@interface CSDRelayCall
{
    _Bool _outgoing;	// 8 = 0x8
    _Bool _video;	// 9 = 0x9
    _Bool _voicemail;	// 10 = 0xa
    _Bool _emergency;	// 11 = 0xb
    _Bool _failureExpected;	// 12 = 0xc
    _Bool _supportsEmergencyFallback;	// 13 = 0xd
    _Bool _sos;	// 14 = 0xe
    _Bool _needsManualInCallSounds;	// 15 = 0xf
    _Bool _remoteUplinkMuted;	// 16 = 0x10
    _Bool _uplinkMuted;	// 17 = 0x11
    _Bool _supportsTTYWithVoice;	// 18 = 0x12
    _Bool _cannotRelayAudioOrVideo;	// 19 = 0x13
    int _callStatus;	// 20 = 0x14
    int _ttyType;	// 24 = 0x18
    int _originatingUIType;	// 28 = 0x1c
    TUHandle *_handle;	// 32 = 0x20
    NSString *_isoCountryCode;	// 40 = 0x28
    TUCallProvider *_provider;	// 48 = 0x30
    NSUUID *_callGroupUUID;	// 56 = 0x38
    NSString *_callerNameFromNetwork;	// 64 = 0x40
    TUCallDisplayContext *_displayContext;	// 72 = 0x48
    unsigned long long _initialLinkType;	// 80 = 0x50
    NSUUID *_localSenderIdentityUUID;	// 88 = 0x58
    NSUUID *_localSenderIdentityAccountUUID;	// 96 = 0x60
    NSSet *_remoteParticipantHandles;	// 104 = 0x68
    long long _bluetoothAudioFormat;	// 112 = 0x70
    id <CSDRelayCallDelegate> _relayDelegate;	// 120 = 0x78
    NSDictionary *_remoteInviteDictionary;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000000ace45
@property(copy, nonatomic) NSDictionary *remoteInviteDictionary; // @synthesize remoteInviteDictionary=_remoteInviteDictionary;
@property(nonatomic) _Bool cannotRelayAudioOrVideo; // @synthesize cannotRelayAudioOrVideo=_cannotRelayAudioOrVideo;
@property(nonatomic) __weak id <CSDRelayCallDelegate> relayDelegate; // @synthesize relayDelegate=_relayDelegate;
@property(nonatomic) int originatingUIType; // @synthesize originatingUIType=_originatingUIType;
@property(nonatomic) long long bluetoothAudioFormat; // @synthesize bluetoothAudioFormat=_bluetoothAudioFormat;
@property(nonatomic) _Bool supportsTTYWithVoice; // @synthesize supportsTTYWithVoice=_supportsTTYWithVoice;
@property(nonatomic) int ttyType; // @synthesize ttyType=_ttyType;
@property(copy, nonatomic) NSSet *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;
@property(retain, nonatomic) NSUUID *localSenderIdentityAccountUUID; // @synthesize localSenderIdentityAccountUUID=_localSenderIdentityAccountUUID;
@property(retain, nonatomic) NSUUID *localSenderIdentityUUID; // @synthesize localSenderIdentityUUID=_localSenderIdentityUUID;
@property(nonatomic) unsigned long long initialLinkType; // @synthesize initialLinkType=_initialLinkType;
@property(nonatomic, getter=isRemoteUplinkMuted) _Bool remoteUplinkMuted; // @synthesize remoteUplinkMuted=_remoteUplinkMuted;
@property(nonatomic) _Bool needsManualInCallSounds; // @synthesize needsManualInCallSounds=_needsManualInCallSounds;
@property(copy, nonatomic) NSString *callerNameFromNetwork; // @synthesize callerNameFromNetwork=_callerNameFromNetwork;
@property(nonatomic, getter=isSOS, setter=setSOS:) _Bool sos; // @synthesize sos=_sos;
@property(nonatomic) _Bool supportsEmergencyFallback; // @synthesize supportsEmergencyFallback=_supportsEmergencyFallback;
@property(nonatomic, getter=isFailureExpected) _Bool failureExpected; // @synthesize failureExpected=_failureExpected;
@property(nonatomic, getter=isEmergency) _Bool emergency; // @synthesize emergency=_emergency;
@property(nonatomic, getter=isVoicemail) _Bool voicemail; // @synthesize voicemail=_voicemail;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(nonatomic, getter=isOutgoing) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(copy, nonatomic) NSUUID *callGroupUUID; // @synthesize callGroupUUID=_callGroupUUID;
@property(retain, nonatomic) TUCallProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) int callStatus; // @synthesize callStatus=_callStatus;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
- (void)setLocallyDisconnectedWithReasonIfNone:(int)arg1 stopConference:(_Bool)arg2;	// IMP=0x00100000000acabd
- (void)setLocallyDisconnectedWithReasonIfNone:(int)arg1;	// IMP=0x00100000000acaa9
- (void)setLocallyConnected;	// IMP=0x00100000000aca1b
- (void)setLocallyConnecting;	// IMP=0x00100000000ac988
- (void)setLocallyHasSentInvitation;	// IMP=0x00100000000ac904
- (void)setLocallyHasStartedOutgoing;	// IMP=0x00100000000ac86c
- (void)becomeEndpointForPullFromRemoteDevice;	// IMP=0x00100000000ac80e
- (void)sendHardPauseDigits;	// IMP=0x00100000000ac7c2
- (void)playLocalDTMFToneForKey:(unsigned char)arg1;	// IMP=0x00100000000ac771
- (void)unhold;	// IMP=0x00100000000ac665
- (void)hold;	// IMP=0x00100000000ac55d
- (void)stopConference;	// IMP=0x00100000000ac4e7
- (void)startConferenceForPulledCallWithTransport:(id)arg1 remoteInviteDictionary:(id)arg2;	// IMP=0x00100000000ac19a
- (void)startConferenceForDialedCallWithTransport:(id)arg1 remoteInviteDictionary:(id)arg2;	// IMP=0x00000000000abe29
- (void)startConferenceForAnsweredCallWithTransport:(id)arg1 remoteInviteDictionary:(id)arg2;	// IMP=0x00100000000abab8
- (void)disconnectWithReason:(int)arg1;	// IMP=0x00100000000ab9c1
- (void)answerWithRequest:(id)arg1;	// IMP=0x00100000000ab91d
- (void)dialWithRequest:(id)arg1 displayContext:(id)arg2;	// IMP=0x00100000000ab6f0
- (long long)spatialAudioSourceIdentifier;	// IMP=0x00100000000ab675
- (long long)outputAudioPowerSpectrumToken;	// IMP=0x00100000000ab5fa
- (long long)inputAudioPowerSpectrumToken;	// IMP=0x00100000000ab57f
- (void)setIsSendingAudio:(_Bool)arg1;	// IMP=0x00100000000ab4fa
- (_Bool)isSendingAudio;	// IMP=0x00100000000ab47f
- (void)setUplinkMuted:(_Bool)arg1;	// IMP=0x00100000000ab2f1
- (_Bool)isUplinkMuted;	// IMP=0x00100000000ab236
- (void)ungroup;	// IMP=0x00100000000ab119
- (void)groupWithOtherCall:(id)arg1;	// IMP=0x00100000000aaf63
- (void)setHardPauseDigits:(id)arg1;	// IMP=0x00100000000aae5b
- (void)setHardPauseDigitsState:(int)arg1;	// IMP=0x00100000000aada6
@property(copy, nonatomic) TUCallDisplayContext *displayContext; // @synthesize displayContext=_displayContext;
- (_Bool)supportsDisplayingFaceTimeAudioCalls;	// IMP=0x00100000000aa4f5
@property(readonly, nonatomic) TUCallProvider *localProvider;
- (_Bool)canOnlyBeAnsweredWithoutAudioOrVideoRelayWithRequest:(id)arg1;	// IMP=0x00100000000aa3b9
- (_Bool)canBeAnsweredWithAudioOrVideoRelayWithRequest:(id)arg1;	// IMP=0x00100000000aa35e
- (_Bool)canBeAnsweredWithRequest:(id)arg1;	// IMP=0x00100000000aa2bb
- (int)callRelaySupport;	// IMP=0x00100000000aa1ed
- (long long)audioInterruptionProviderType;	// IMP=0x00100000000aa1e2
- (long long)audioInterruptionOperationMode;	// IMP=0x00100000000aa1d7
- (id)audioMode;	// IMP=0x00100000000aa18f
- (id)audioCategory;	// IMP=0x00100000000aa147
- (_Bool)isHostedOnCurrentDevice;	// IMP=0x00100000000aa13f
- (id)callUUID;	// IMP=0x00100000000aa12d
- (void)updateWithRelayMessage:(id)arg1;	// IMP=0x00100000000a9da5
- (id)initWithRelayMessage:(id)arg1 outgoing:(_Bool)arg2;	// IMP=0x00100000000a99f6
- (id)initOutgoingWithDialRequest:(id)arg1;	// IMP=0x00100000000a9903

@end
