//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVSystemController, CHHapticEngine, NSDictionary, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKBFeedbackGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSUserDefaults *_soundsDefaults;	// 16 = 0x10
    int _ringerStateNotifyToken;	// 24 = 0x18
    _Bool _isActive;	// 28 = 0x1c
    AVSystemController *_avSystemController;	// 32 = 0x20
    float _volume;	// 40 = 0x28
    _Bool _isFeedbackDisabled;	// 44 = 0x2c
    _Bool _isAudioOnly;	// 45 = 0x2d
    _Bool _isEngineRunning;	// 46 = 0x2e
    CHHapticEngine *_engine;	// 48 = 0x30
    NSDictionary *_players;	// 56 = 0x38
    NSDictionary *_systemSounds;	// 64 = 0x40
    double _lastActionTime;	// 72 = 0x48
    long long __mode;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000005a7ba1
- (void)actionOccurred:(long long)arg1 atLocation:(struct CGPoint)arg2;	// IMP=0x00000000005a71e4
- (void)actionOccurred:(long long)arg1;	// IMP=0x00000000005a71c2
- (_Bool)isActive;	// IMP=0x00000000005a71b9
- (void)deactivate;	// IMP=0x00000000005a7197
- (void)activateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000005a6c1a
- (void)_serverConnectionDiedNotification:(id)arg1;	// IMP=0x00000000005a6b5f
- (void)_effectiveVolumeDidChangeNotification:(id)arg1;	// IMP=0x00000000005a6929
- (void)_stopEngineForApplicationNotification:(id)arg1;	// IMP=0x00000000005a67f0
- (void)_keyboardPreferencesDidUpdateNotification:(id)arg1;	// IMP=0x00000000005a67df
- (void)_dictationDidEndNotification:(id)arg1;	// IMP=0x00000000005a6634
- (void)_dictationDidBeginNotification:(id)arg1;	// IMP=0x00000000005a648c
- (void)_stopEngineDueToIdle;	// IMP=0x00000000005a63b8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000005a3833
- (void)dealloc;	// IMP=0x00000000005a36da
- (id)init;	// IMP=0x00000000005a2ee4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

