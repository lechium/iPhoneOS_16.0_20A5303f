//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHAudioRecordingManager, SHAudioSessionManager;

@interface SHAudioManager : NSObject
{
    SHAudioRecordingManager *_audioRecordingManager;	// 8 = 0x8
    SHAudioSessionManager *_audioSessionManager;	// 16 = 0x10
    long long _activeAssistantServiceTaps;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00200000000074e5
- (void).cxx_destruct;	// IMP=0x0020000000007c8b
@property long long activeAssistantServiceTaps; // @synthesize activeAssistantServiceTaps=_activeAssistantServiceTaps;
@property(readonly, nonatomic) SHAudioSessionManager *audioSessionManager; // @synthesize audioSessionManager=_audioSessionManager;
@property(readonly, nonatomic) SHAudioRecordingManager *audioRecordingManager; // @synthesize audioRecordingManager=_audioRecordingManager;
- (void)audioRecordingManagerDidStopRecording:(id)arg1;	// IMP=0x0010000000007b88
- (void)audioRecordingManagerWillStartRecording:(id)arg1;	// IMP=0x0010000000007a8c
- (void)audioRecordingManager:(id)arg1 didDetachTap:(id)arg2;	// IMP=0x0010000000007947
- (void)audioRecordingManager:(id)arg1 willAttachTap:(id)arg2;	// IMP=0x0010000000007821
- (void)audioRecordingManager:(id)arg1 failedToStartRecorders:(id)arg2;	// IMP=0x00100000000077df
- (_Bool)recorder:(id)arg1 shouldProcessAudioBuffer:(id)arg2 atTime:(id)arg3;	// IMP=0x001000000000779c
- (void)audioSessionManager:(id)arg1 interruptionEndedWithOptions:(unsigned long long)arg2;	// IMP=0x0010000000007612
- (void)audioSessionManager:(id)arg1 interruptionBeganWithOptions:(unsigned long long)arg2;	// IMP=0x00100000000075d0
- (id)initWithAudioSessionManager:(id)arg1 audioRecordingManager:(id)arg2;	// IMP=0x0010000000007423

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

