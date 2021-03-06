//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ATSpatialStreamDescriptions, AVAudioDevice, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, VCAudioRelay, VCAudioRelayIO, VCAudioSessionMediaProperties, VCAudioUnitProperties, VCAudioUnitSpatialContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioManager
{
    struct tagHANDLE *_hAUIO;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    unsigned int _state;	// 40 = 0x28
    VCAudioSessionMediaProperties *_currentAudioSessionMediaProperties;	// 48 = 0x30
    VCAudioUnitProperties *_currentAudioUnitProperties;	// 56 = 0x38
    NSDictionary *_vpOperatingModeToAudioSessionMediaFormatMapping;	// 64 = 0x40
    NSMutableArray *_allClients;	// 72 = 0x48
    NSMutableArray *_startingIOClients;	// 80 = 0x50
    AVAudioDevice *_inputDevice;	// 88 = 0x58
    AVAudioDevice *_outputDevice;	// 96 = 0x60
    _Bool _isGKVoiceChat;	// 104 = 0x68
    _Bool _isMicrophoneMuted;	// 105 = 0x69
    _Bool _isMixingVoiceWithMediaEnabled;	// 106 = 0x6a
    _Bool _isInDaemon;	// 107 = 0x6b
    _Bool _isInputMeteringEnabled;	// 108 = 0x6c
    _Bool _isOutputMeteringEnabled;	// 109 = 0x6d
    _Bool _isSpeakerPhoneEnabled;	// 110 = 0x6e
    _Bool _isSuspended;	// 111 = 0x6f
    _Bool _followSystemInput;	// 112 = 0x70
    _Bool _followSystemOutput;	// 113 = 0x71
    struct _VCAudioIOControllerIOState _sinkData;	// 120 = 0x78
    struct _VCAudioIOControllerIOState _sourceData;	// 272 = 0x110
    int _interruptThreadState;	// 424 = 0x1a8
    VCAudioRelay *_interruptThread;	// 432 = 0x1b0
    VCAudioRelayIO *_interruptThreadClient;	// 440 = 0x1b8
    _Bool _isInterrupting;	// 448 = 0x1c0
    struct _opaque_pthread_mutex_t _interruptingMutex;	// 456 = 0x1c8
    struct _opaque_pthread_mutex_t _inputDeviceMutex;	// 520 = 0x208
    struct _opaque_pthread_mutex_t _outputDeviceMutex;	// 584 = 0x248
    _Bool _spatialAudioDisabled;	// 648 = 0x288
    void **_audioSession;	// 656 = 0x290
    int _playbackMode;	// 664 = 0x298
    NSMutableDictionary *_spatialContexts;	// 672 = 0x2a0
    NSMutableDictionary *_audioSessionSinkMuted;	// 680 = 0x2a8
    VCAudioUnitSpatialContext *_currentSpatialContext;	// 688 = 0x2b0
    CDUnknownBlockType _mutedTalkerNotificationHandler;	// 696 = 0x2b8
    NSArray *_stateStrings;	// 704 = 0x2c0
    ATSpatialStreamDescriptions *_spatialStreamDescriptions;	// 712 = 0x2c8
    _Bool _isMediaPlaybackOnExternalDevice;	// 720 = 0x2d0
}

+ (id)sharedSystemAudioInstance;	// IMP=0x00100000000098b4
+ (id)sharedVoiceChatInstance;	// IMP=0x001000000000985d
@property(retain, nonatomic) NSDictionary *vpOperatingModeToAudioSessionMediaFormatMapping; // @synthesize vpOperatingModeToAudioSessionMediaFormatMapping=_vpOperatingModeToAudioSessionMediaFormatMapping;
@property(nonatomic) _Bool isInDaemon; // @synthesize isInDaemon=_isInDaemon;
@property(retain, nonatomic) VCAudioUnitProperties *currentAudioUnitProperties; // @synthesize currentAudioUnitProperties=_currentAudioUnitProperties;
@property(retain, nonatomic) VCAudioSessionMediaProperties *currentAudioSessionMediaProperties; // @synthesize currentAudioSessionMediaProperties=_currentAudioSessionMediaProperties;
@property(nonatomic, getter=isSpeakerPhoneEnabled) _Bool speakerPhoneEnabled; // @synthesize speakerPhoneEnabled=_isSpeakerPhoneEnabled;
@property(nonatomic, getter=isMixingVoiceWithMediaEnabled) _Bool mixingVoiceWithMediaEnabled; // @synthesize mixingVoiceWithMediaEnabled=_isMixingVoiceWithMediaEnabled;
@property(nonatomic, getter=isMicrophoneMuted) _Bool microphoneMuted; // @synthesize microphoneMuted=_isMicrophoneMuted;
@property(nonatomic) _Bool isGKVoiceChat; // @synthesize isGKVoiceChat=_isGKVoiceChat;
- (int)setVolume:(float)arg1 withRampTime:(float)arg2;	// IMP=0x000000000001c919
- (void)setupDynamicDuckingVolumeHandlerForAUIO:(struct tagHANDLE *)arg1;	// IMP=0x000000000001c913
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x000000000001c7a7
- (void)didServerDie;	// IMP=0x000000000001c608
- (void)didSessionResume;	// IMP=0x000000000001c5f6
- (void)didSessionPause;	// IMP=0x000000000001c5e4
- (void)didSessionEnd;	// IMP=0x000000000001c1ec
- (void)didSessionStop;	// IMP=0x000000000001bdd6
- (void)stopInterruptThread;	// IMP=0x000000000001bbee
- (void)startInterruptThread;	// IMP=0x000000000001b697
- (void)cleanupInterruptThread;	// IMP=0x000000000001b652
- (_Bool)setupInterruptThread;	// IMP=0x000000000001b2b6
- (void)stopAudioSession;	// IMP=0x000000000001b2a2
- (void)resetAudioSessionWithProperties:(id)arg1 interruptSuccessful:(_Bool *)arg2;	// IMP=0x000000000001b02e
- (_Bool)startAudioSessionWithProperties:(id)arg1;	// IMP=0x000000000001b019
- (void)refreshRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;	// IMP=0x000000000001aee9
- (void)refreshOutputMetering;	// IMP=0x000000000001ae5e
- (void)refreshInputMetering;	// IMP=0x000000000001add3
- (void)updateClient:(id)arg1 direction:(unsigned char)arg2;	// IMP=0x000000000001a51e
- (void)stopClient:(id)arg1;	// IMP=0x0000000000019c66
- (void)startClient:(id)arg1;	// IMP=0x0000000000019280
- (_Bool)updateStateWithAudioIOClient:(id)arg1;	// IMP=0x000000000001843b
- (id)preferredClientWithNewClient:(id)arg1;	// IMP=0x00000000000182af
- (_Bool)stateInterruptedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;	// IMP=0x0000000000017cab
- (void)stateTransitionInterruptedToStarted;	// IMP=0x0000000000017c7d
- (void)stateTransitionInterruptedToRunning;	// IMP=0x0000000000017c44
- (_Bool)stateInterruptedShouldGoToRunning:(id)arg1;	// IMP=0x0000000000017c11
- (_Bool)stateInterruptedShouldGoToStarted:(id)arg1;	// IMP=0x0000000000017ba7
- (_Bool)stateRunningWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;	// IMP=0x00000000000174b1
- (void)stateTransitionRunningToInterrupted;	// IMP=0x0000000000017483
- (void)stateRunningToSessionStarted;	// IMP=0x0000000000017455
- (_Bool)stateRunningShouldTransitionToInterrupted:(id)arg1;	// IMP=0x0000000000017422
- (_Bool)stateRunningShouldTransitionToStarted:(id)arg1;	// IMP=0x00000000000173b8
- (_Bool)stateSessionStartedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;	// IMP=0x0000000000016dc4
- (void)enterStateStarted;	// IMP=0x0000000000016930
- (_Bool)stateIdleWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;	// IMP=0x0000000000016894
- (void)activateSpatialContext:(id)arg1;	// IMP=0x0000000000016827
- (void)applySpatialMetadata:(struct OpaqueCMBlockBuffer *)arg1;	// IMP=0x0000000000016421
- (void)applySessionContextToAudioUnitProperties:(id)arg1 preferredClient:(id)arg2;	// IMP=0x0000000000016157
- (void)setSpatialMetadata:(struct OpaqueCMBlockBuffer *)arg1 audioSessionId:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015e0b
- (void)unregisterAudioSessionId:(unsigned int)arg1;	// IMP=0x00000000000159c6
- (int)registerAudioSessionId:(unsigned int)arg1 maxChannelCountMic:(unsigned int)arg2 maxChannelCountSpeaker:(unsigned int)arg3 spatialMetadata:(struct OpaqueCMBlockBuffer *)arg4;	// IMP=0x0000000000015380
- (int)unregisterFromMutedTalkerNotification;	// IMP=0x00000000000150e7
- (int)registerForMutedTalkerNotification:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014c51
- (int)unregisterForMutedTalkerNotificationWithAUIO:(struct tagHANDLE *)arg1;	// IMP=0x0000000000014a2a
- (int)registerForMutedTalkerNotificationWithAUIO:(struct tagHANDLE *)arg1;	// IMP=0x00000000000145d4
- (void)applyControllerFormatToClients:(id)arg1;	// IMP=0x0000000000014336
- (void)activateStartingClient:(id)arg1 applyControllerFormat:(_Bool)arg2;	// IMP=0x00000000000141ec
- (void)completeStartForAllStartingClients;	// IMP=0x0000000000013e90
- (void)unregisterClientIO:(struct _VCAudioIOControllerClientIO *)arg1 controllerIO:(struct _VCAudioIOControllerIOState *)arg2;	// IMP=0x000000000001395f
- (void)registerClientIO:(struct _VCAudioIOControllerClientIO *)arg1 controllerIO:(struct _VCAudioIOControllerIOState *)arg2;	// IMP=0x000000000001328f
- (void)stopAUIO;	// IMP=0x00000000000130b2
- (void)resetAudioLimiterWithProperties:(id)arg1;	// IMP=0x0000000000012e17
- (void)resetAUIOWithProperties:(id)arg1;	// IMP=0x0000000000012c4d
- (_Bool)shouldResetAudioSessionWithProperties:(id)arg1;	// IMP=0x0000000000012699
- (_Bool)shouldResetAudioUnitWithProperties:(id)arg1;	// IMP=0x000000000001126c
- (_Bool)startAUIOWithProperties:(id)arg1;	// IMP=0x000000000000ff73
- (void)setMediaPlaybackOnExternalDevice:(_Bool)arg1;	// IMP=0x000000000000fecd
- (void)updateCurrentOutputDevice:(id)arg1;	// IMP=0x000000000000fa7d
@property(retain) AVAudioDevice *currentOutputDevice; // @synthesize currentOutputDevice=_outputDevice;
- (void)setCurrentOutputDeviceInternal:(id)arg1;	// IMP=0x000000000000f0e5
@property(retain) AVAudioDevice *currentInputDevice; // @synthesize currentInputDevice=_inputDevice;
- (void)updateCurrentInputDevice:(id)arg1;	// IMP=0x000000000000e33a
- (void)setCurrentInputDeviceInternal:(id)arg1;	// IMP=0x000000000000e2e9
- (void)setupIODevicesForAUIO:(struct tagHANDLE *)arg1;	// IMP=0x000000000000e29b
- (id)newAudioSessionMediaPropertiesWithPreferredClient:(id)arg1 audioUnitProperties:(id)arg2;	// IMP=0x000000000000e28a
- (id)newAudioSessionMediaPropertiesForSystemAudioWithPreferredClient:(id)arg1 audioUnitProperties:(id)arg2;	// IMP=0x000000000000e271
- (id)newAudioUnitPropertiesForSystemAudioWithPreferredClient:(id)arg1;	// IMP=0x000000000000de7a
- (id)newAudioUnitPropertiesWithPreferredClient:(id)arg1;	// IMP=0x000000000000d5ee
- (_Bool)computeAllowAudioRecordingWithPreferredClient:(id)arg1;	// IMP=0x000000000000d43f
- (unsigned int)computeSamplePerFrameWithPreferredClient:(id)arg1 sampleRate:(unsigned int)arg2;	// IMP=0x000000000000d26c
- (void)computeFormatDescription:(struct AudioStreamBasicDescription *)arg1 withPreferredClient:(id)arg2;	// IMP=0x000000000000d0a0
- (unsigned int)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2;	// IMP=0x000000000000d018
- (void)_cleanupDeadClients;	// IMP=0x000000000000cc52
- (_Bool)removeClient:(id)arg1;	// IMP=0x000000000000cb40
- (void)waitIdleForClient:(id)arg1;	// IMP=0x000000000000c4a9
- (_Bool)addClient:(id)arg1;	// IMP=0x000000000000c143
- (void)removeAllClientsForIO:(struct _VCAudioIOControllerIOState *)arg1;	// IMP=0x000000000000c0d2
- (void)flushEventQueue:(struct opaqueCMSimpleQueue *)arg1;	// IMP=0x000000000000bd16
- (int)prewarmingClientOperatingMode;	// IMP=0x000000000000bbf8
- (void)resetAudioTimestamps;	// IMP=0x000000000000bbcb
- (void)computeHardwarePreferences;	// IMP=0x000000000000bbc5
- (void)setOutputMetering;	// IMP=0x000000000000ba6a
- (void)setInputMetering;	// IMP=0x000000000000b90f
- (void)applyAudioSessionMute;	// IMP=0x000000000000b86f
- (void)setMute:(_Bool)arg1 forClient:(id)arg2;	// IMP=0x000000000000b4de
- (void)dealloc;	// IMP=0x000000000000acb7
- (id)initWithAudioSessionMode:(int)arg1;	// IMP=0x0000000000009c18
- (void)getPreferredFormat:(struct AudioStreamBasicDescription *)arg1 blockSize:(double *)arg2 vpOperatingMode:(unsigned int *)arg3 forOperatingMode:(int)arg4 deviceRole:(int)arg5 suggestedFormat:(struct AudioStreamBasicDescription *)arg6;	// IMP=0x000000000000995c
@property(readonly, nonatomic) struct _VCAudioIOControllerIOState *sourceIO;
@property(readonly, nonatomic) struct _VCAudioIOControllerIOState *sinkIO;
- (id)autorelease;	// IMP=0x0000000000009933
- (oneway void)release;	// IMP=0x000000000000992d
- (unsigned long long)retainCount;	// IMP=0x0000000000009920
- (id)retain;	// IMP=0x0000000000009917
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000990e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *reportingStats;
@property(readonly) Class superclass;

@end

