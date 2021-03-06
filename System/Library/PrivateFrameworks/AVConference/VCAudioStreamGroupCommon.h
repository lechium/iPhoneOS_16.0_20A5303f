//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCAudioIO, VCAudioPowerSpectrumSource;

__attribute__((visibility("hidden")))
@interface VCAudioStreamGroupCommon
{
    struct tagVCAudioStreamGroupStream *_audioStreams;	// 24 = 0x18
    struct opaqueVCAudioBufferList *_sampleBuffer;	// 32 = 0x20
    struct VCAudioStreamGroupSyncDestinationList _syncDestinationList;	// 40 = 0x28
    VCAudioIO *_audioIO;	// 48 = 0x30
    int _processID;	// 56 = 0x38
    _Bool _isGKVoiceChat;	// 60 = 0x3c
    unsigned int _preferredIOSampleRate;	// 64 = 0x40
    unsigned int _preferredIOSamplesPerFrame;	// 68 = 0x44
    unsigned int _audioSessionID;	// 72 = 0x48
    int _deviceRole;	// 76 = 0x4c
    int _operatingMode;	// 80 = 0x50
    unsigned int _audioType;	// 84 = 0x54
    unsigned long long _spatialAudioSourceID;	// 88 = 0x58
    _Bool _isMuted;	// 96 = 0x60
    long long _powerSpectrumStreamToken;	// 104 = 0x68
    unsigned int _streamGroupID;	// 112 = 0x70
    NSString *_participantUUID;	// 120 = 0x78
    unsigned char _direction;	// 128 = 0x80
    unsigned int _audioChannelIndex;	// 132 = 0x84
    unsigned int _maxChannelCount;	// 136 = 0x88
    void *_context;	// 144 = 0x90
    CDUnknownFunctionPointerType _callback;	// 152 = 0x98
    VCAudioPowerSpectrumSource *_audioPowerSpectrumSource;	// 160 = 0xa0
    _Bool _isPowerSpectrumEnabled;	// 168 = 0xa8
    unsigned int _processedFramesCount;	// 172 = 0xac
    struct opaqueCMSimpleQueue *_syncDestinationChangeEventQueue;	// 176 = 0xb0
    struct tagVCMemoryPool *_syncDestinationChangeEventPool;	// 184 = 0xb8
}

+ (_Bool)isSupportedDirection:(unsigned char)arg1;	// IMP=0x0010000000056ddd
@property unsigned int audioChannelIndex; // @synthesize audioChannelIndex=_audioChannelIndex;
@property(readonly) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(readonly, nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(nonatomic, setter=setMuted:) _Bool isMuted; // @synthesize isMuted=_isMuted;
- (void)cleanupSyncDestinations;	// IMP=0x0000000000056deb
- (void)didServerDie;	// IMP=0x0000000000056dd7
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x0000000000056d85
- (void)sendAudioPowerSpectrumSourceRegistration:(_Bool)arg1;	// IMP=0x0000000000056cce
- (void)audioPowerSpectrumSinkDidUnregister;	// IMP=0x0000000000056cba
- (void)audioPowerSpectrumSinkDidRegister;	// IMP=0x0000000000056ca3
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x0000000000056ad4
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x0000000000056905
- (_Bool)enqueueSyncDestinationChangeEvent:(id)arg1 eventType:(int)arg2;	// IMP=0x00000000000566ca
- (void)collectAndLogChannelMetrics:(CDStruct_b671a7c4 *)arg1 averagePower:(float)arg2;	// IMP=0x0000000000056101
- (_Bool)configureStreams:(id)arg1 withRateControlConfig:(id)arg2;	// IMP=0x0000000000055c78
- (void)stopAudioDump;	// IMP=0x0000000000055c31
- (void)startAudioDump;	// IMP=0x0000000000055c2b
- (id)getAudioDumpName;	// IMP=0x0000000000055c23
- (id)stopCapture;	// IMP=0x0000000000055880
- (id)startCapture;	// IMP=0x0000000000055672
- (_Bool)removeSyncDestination:(id)arg1 shouldSchedule:(_Bool)arg2;	// IMP=0x00000000000554ff
- (_Bool)addSyncDestination:(id)arg1 shouldSchedule:(_Bool)arg2;	// IMP=0x000000000005529c
- (_Bool)reconfigureAudioIOIfNeededWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x0000000000054dd8
- (_Bool)configureAudioIOWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x00000000000541c9
- (void)cleanupStreams;	// IMP=0x0000000000054190
- (void)setupStreamsWithStreamInfos:(id)arg1;	// IMP=0x0000000000053b59
- (void)cleanupPowerSpectrumSource;	// IMP=0x0000000000053abb
- (_Bool)configurePowerSpectrumSource;	// IMP=0x00000000000539e9
@property(setter=setPowerSpectrumEnabled:) _Bool isPowerSpectrumEnabled;
@property(readonly) struct tagVCAudioStreamGroupStream *audioStreams;
- (_Bool)setDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x0000000000053952
- (void)dealloc;	// IMP=0x0000000000053854
- (void)flushSyncDestinationUpdatesEventQueue;	// IMP=0x000000000005380e
- (unsigned int)audioTypeForCaptureSource:(int)arg1;	// IMP=0x00000000000537f1
- (id)initWithConfig:(id)arg1 audioCallback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 audioDirection:(unsigned char)arg4;	// IMP=0x000000000005337d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

