//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVPlayerController.h"

@class AVObservationController, AVPictureInPictureController, AVPictureInPicturePlaybackState, AVSampleBufferDisplayLayerPlaybackDelegateAdapter;
@protocol AVPictureInPictureSampleBufferPlaybackDelegate;

__attribute__((visibility("hidden")))
@interface AVSampleBufferDisplayLayerPlayerController : AVPlayerController
{
    _Bool _pictureInPictureAvailable;	// 64 = 0x40
    _Bool _paused;	// 65 = 0x41
    long long _status;	// 72 = 0x48
    long long _timeControlStatus;	// 80 = 0x50
    AVPictureInPictureController *_pictureInPictureController;	// 88 = 0x58
    id <AVPictureInPictureSampleBufferPlaybackDelegate> _playbackDelegate;	// 96 = 0x60
    AVPictureInPicturePlaybackState *_playbackState;	// 104 = 0x68
    AVObservationController *_sbdlObservationController;	// 112 = 0x70
    AVSampleBufferDisplayLayerPlaybackDelegateAdapter *_playbackDelegateAdapter;	// 120 = 0x78
    struct CGSize _enqueuedBufferDimensions;	// 128 = 0x80
    CDStruct_e83c9415 _contentTimeRange;	// 144 = 0x90
}

+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;	// IMP=0x006000000011ae72
+ (id)keyPathsForValuesAffectingContentDuration;	// IMP=0x006000000011adcf
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;	// IMP=0x006000000011ad2c
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;	// IMP=0x006000000011ac89
+ (id)keyPathsForValuesAffectingRate;	// IMP=0x006000000011abe6
+ (id)keyPathsForValuesAffectingContentDimensions;	// IMP=0x006000000011abc6
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;	// IMP=0x006000000011ab18
+ (id)keyPathsForValuesAffectingPlaying;	// IMP=0x006000000011aaf8
- (void).cxx_destruct;	// IMP=0x000000000011a03f
@property(retain, nonatomic) AVSampleBufferDisplayLayerPlaybackDelegateAdapter *playbackDelegateAdapter; // @synthesize playbackDelegateAdapter=_playbackDelegateAdapter;
@property(nonatomic) CDStruct_e83c9415 contentTimeRange; // @synthesize contentTimeRange=_contentTimeRange;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) AVObservationController *sbdlObservationController; // @synthesize sbdlObservationController=_sbdlObservationController;
@property(copy, nonatomic) AVPictureInPicturePlaybackState *playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) struct CGSize enqueuedBufferDimensions; // @synthesize enqueuedBufferDimensions=_enqueuedBufferDimensions;
@property(nonatomic) __weak id <AVPictureInPictureSampleBufferPlaybackDelegate> playbackDelegate; // @synthesize playbackDelegate=_playbackDelegate;
@property(nonatomic) __weak AVPictureInPictureController *pictureInPictureController; // @synthesize pictureInPictureController=_pictureInPictureController;
@property(nonatomic) long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
@property(nonatomic, getter=isPictureInPictureAvailable) _Bool pictureInPictureAvailable; // @synthesize pictureInPictureAvailable=_pictureInPictureAvailable;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)_startObservation;	// IMP=0x0000000000119919
- (void)_updateBackgroundAudioPlaybackPolicy;	// IMP=0x0000000000119828
- (void)_updateStatus;	// IMP=0x000000000011970a
- (_Bool)hasSeekableLiveStreamingContent;	// IMP=0x0000000000119698
- (_Bool)hasLiveStreamingContent;	// IMP=0x000000000011963e
- (double)contentDuration;	// IMP=0x000000000011962c
- (double)contentDurationWithinEndTimes;	// IMP=0x00000000001195dc
- (double)currentTimeWithinEndTimes;	// IMP=0x000000000011958c
- (double)rate;	// IMP=0x000000000011953c
- (struct CGSize)contentDimensions;	// IMP=0x000000000011952a
- (_Bool)isPictureInPicturePossible;	// IMP=0x00000000001194ef
- (void)setPictureInPictureInterrupted:(_Bool)arg1;	// IMP=0x00000000001194a2
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;	// IMP=0x000000000011946f
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;	// IMP=0x000000000011926b
- (void)pauseForAllCoordinatedPlaybackParticipants:(_Bool)arg1;	// IMP=0x0000000000119257
- (void)setPlaying:(_Bool)arg1;	// IMP=0x00000000001191a7
- (_Bool)isPlaying;	// IMP=0x0000000000119192
- (void)invalidatePlaybackState;	// IMP=0x0000000000118d04
- (CDStruct_1b6d18a9)_currentSBDLTime;	// IMP=0x0000000000118a54
- (double)_effectiveRate;	// IMP=0x0000000000118996
- (id)init;	// IMP=0x000000000011890f
- (void)dealloc;	// IMP=0x00000000001188a4

@end
