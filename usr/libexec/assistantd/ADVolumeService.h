//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFClientConfiguration, AFInstanceContext, CSSpeechController, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADVolumeService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    CSSpeechController *_speechController;	// 24 = 0x18
    AFClientConfiguration *_clientConfiguration;	// 32 = 0x20
    _Bool _isSmartSiriVolumeAvailable;	// 40 = 0x28
    NSMutableDictionary *_volumesByCategory;	// 48 = 0x30
    float _smartSiriVolume;	// 56 = 0x38
    _Bool _needsUpdateSiriVolume;	// 60 = 0x3c
    unsigned long long _lastSiriVolumeUpdateTimestamp;	// 64 = 0x40
    NSMutableSet *_pendingBlocks;	// 72 = 0x48
    float _deviceSetupFlowSiriVolume;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000029efab
- (float)_mediaPlaybackVolume;	// IMP=0x001000000029ef44
- (void)_updateSiriVolume:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029e81d
- (void)_updateSiriVolumeIfNeeded;	// IMP=0x001000000029e766
- (void)_setNeedsUpdateSiriVolume;	// IMP=0x001000000029e65f
- (void)_fetchSmartSiriVolume;	// IMP=0x001000000029e4f1
- (void)_handleSystemVolumeChangeForCategory:(id)arg1 volume:(float)arg2 audioCategory:(id)arg3 reason:(id)arg4;	// IMP=0x001000000029e29b
- (void)systemVolumeChanged:(id)arg1;	// IMP=0x001000000029e1c8
- (void)_fetchSystemVolumes;	// IMP=0x001000000029e143
- (void)_stopObservingSystemVolumes;	// IMP=0x001000000029e13d
- (void)_startObservingSystemVolumes;	// IMP=0x001000000029e12b
- (void)_stopObservingSystemControllerLifecycle;	// IMP=0x001000000029e125
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x001000000029e113
- (void)adAVSystemControllerDidChange:(id)arg1;	// IMP=0x001000000029e06a
- (void)invalidate;	// IMP=0x001000000029dfac
- (void)setSiriOutputVolume:(float)arg1 forAudioRoute:(id)arg2 operationType:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000029dd9f
- (void)getSiriOutputVolumeForAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029dc2a
- (void)setClientConfiguration:(id)arg1;	// IMP=0x001000000029dadd
- (void)waitUntilSiriOutputVolumeUpdatesAfterTimestamp:(unsigned long long)arg1 withTimeout:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x001000000029d801
- (void)updateSiriOutputVolume:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029d70e
- (void)fetchSmartSiriVolume;	// IMP=0x001000000029d67e
- (id)initWithQueue:(id)arg1 instanceContext:(id)arg2 speechController:(id)arg3;	// IMP=0x001000000029d3ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

