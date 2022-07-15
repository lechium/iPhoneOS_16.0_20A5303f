//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, RAPAuxiliaryControlCarPlay, RAPAuxiliaryControlWatch;
@protocol RAPAuxiliaryControl, RAPAuxiliaryControlsRecording;

@interface RAPAuxiliaryControlsRecorder : NSObject
{
    _Bool _started;	// 8 = 0x8
    _Bool _stopped;	// 9 = 0x9
    _Bool _waitingToSetActiveWatchAsOriginating;	// 10 = 0xa
    unsigned long long _countOfNanoRegistryFetchesInFlight;	// 16 = 0x10
    NSMutableArray *_relevantAuxiliaryControls;	// 24 = 0x18
    id <RAPAuxiliaryControl> _originatingAuxiliaryControl;	// 32 = 0x20
    RAPAuxiliaryControlCarPlay *_currentCarPlayAuxiliaryControl;	// 40 = 0x28
    RAPAuxiliaryControlWatch *_currentActiveWatchAuxiliaryControl;	// 48 = 0x30
}

+ (void)fetchCurrentlyConnectedControlsRecordingOrigin:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00400000007da58b
+ (void)fetchCurrentlyConnectedControlsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000007da574
- (void).cxx_destruct;	// IMP=0x00200000007db376
@property(readonly, nonatomic) id <RAPAuxiliaryControlsRecording> copyCurrentPartialRecording;
- (void)_setOriginatingControlToCurrentActiveWatch;	// IMP=0x00100000007dafe0
- (void)_updateWatchControlsWithFetchCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000007dacc4
- (void)_updateWatchControls;	// IMP=0x00100000007dacb0
- (void)_setOriginatingControlToCurrentCarPlayScreen;	// IMP=0x00100000007dac9e
- (void)_updateCurrentCarPlayControl;	// IMP=0x00100000007dab88
- (void)_addControlIfNotDuplicate:(id)arg1;	// IMP=0x00100000007da9e0
- (void)setOriginatingDeviceFromOrigin:(long long)arg1;	// IMP=0x00100000007da9b4
- (void)dealloc;	// IMP=0x00100000007da976
- (void)stop;	// IMP=0x00100000007da88e
- (void)start;	// IMP=0x00100000007da87a
- (void)startWithFetchCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000007da6b5

@end
