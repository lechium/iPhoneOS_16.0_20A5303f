//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol ISLivePhotoVitalityBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoVitalityBehavior
{
    id _easeOutObserver;	// 8 = 0x8
    id _transitionToPhotoObserver;	// 16 = 0x10
    _Bool _pauseDuringTransition;	// 24 = 0x18
    _Bool _prepared;	// 25 = 0x19
    _Bool _playing;	// 26 = 0x1a
    _Bool _playingBeyondPhoto;	// 27 = 0x1b
    _Bool _preparing;	// 28 = 0x1c
    _Bool __shouldPlayAfterPreparation;	// 29 = 0x1d
    float _playRate;	// 32 = 0x20
    double _photoTransitionDuration;	// 40 = 0x28
    unsigned long long _assetOptions;	// 48 = 0x30
    CDStruct_1b6d18a9 _playbackEndTime;	// 56 = 0x38
    CDStruct_1b6d18a9 _playDuration;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000013866
@property(nonatomic, setter=_setShouldPlayAfterPreparation:) _Bool _shouldPlayAfterPreparation; // @synthesize _shouldPlayAfterPreparation=__shouldPlayAfterPreparation;
@property(nonatomic, getter=_isPreparing, setter=_setPreparing:) _Bool preparing; // @synthesize preparing=_preparing;
@property(nonatomic, getter=isPlayingBeyondPhoto, setter=_setPlayingBeyondPhoto:) _Bool playingBeyondPhoto; // @synthesize playingBeyondPhoto=_playingBeyondPhoto;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic, getter=isPrepared, setter=_setPrepared:) _Bool prepared; // @synthesize prepared=_prepared;
@property(readonly, nonatomic) float playRate; // @synthesize playRate=_playRate;
@property(readonly, nonatomic) unsigned long long assetOptions; // @synthesize assetOptions=_assetOptions;
@property(readonly, nonatomic) _Bool pauseDuringTransition; // @synthesize pauseDuringTransition=_pauseDuringTransition;
@property(readonly, nonatomic) double photoTransitionDuration; // @synthesize photoTransitionDuration=_photoTransitionDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 playDuration; // @synthesize playDuration=_playDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 playbackEndTime; // @synthesize playbackEndTime=_playbackEndTime;
- (void)cancelSettleToPhoto;	// IMP=0x00000000000136bd
- (void)_didReachTransitionToPhotoTime;	// IMP=0x0000000000013483
- (void)_didReachTransitionTime;	// IMP=0x000000000001336b
- (void)_startVideoPlayback;	// IMP=0x000000000001323c
- (void)videoReadyForDisplayDidChange;	// IMP=0x00000000000131d3
- (void)playVitality;	// IMP=0x0000000000013142
- (long long)behaviorType;	// IMP=0x0000000000013137
- (void)_handleDidFinishPreroll;	// IMP=0x00000000000130de
- (void)_handleDidSeekToStartTime;	// IMP=0x0000000000012fb3
- (void)_stopObservingVideo;	// IMP=0x0000000000012f16
- (void)_startObservingVideo;	// IMP=0x0000000000012ab4
- (void)prepareForVitality;	// IMP=0x00000000000127aa
- (void)activeDidChange;	// IMP=0x0000000000012710
- (id)initWithInitialLayoutInfo:(id)arg1 playbackEndTime:(CDStruct_1b6d18a9)arg2 playDuration:(CDStruct_1b6d18a9)arg3 playRate:(float)arg4 photoTransitionDuration:(double)arg5 pauseDuringTransition:(_Bool)arg6 assetOptions:(unsigned long long)arg7;	// IMP=0x000000000001265a
- (void)dealloc;	// IMP=0x000000000001259d

// Remaining properties
@property(nonatomic) __weak id <ISLivePhotoVitalityBehaviorDelegate> delegate; // @dynamic delegate;

@end
