//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVPlayerController.h"

@protocol AVHomeIPCameraActionButtonHandling;

__attribute__((visibility("hidden")))
@interface AVHomeIPCameraPlayerController : AVPlayerController
{
    double _volume;	// 8 = 0x8
    _Bool _muted;	// 16 = 0x10
    id <AVHomeIPCameraActionButtonHandling> _delegate;	// 24 = 0x18
    struct CGSize _presentationSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e4ae2
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(nonatomic) __weak id <AVHomeIPCameraActionButtonHandling> delegate; // @synthesize delegate=_delegate;
- (void)endReducingResourcesForPictureInPicturePlayerLayer:(id)arg1;	// IMP=0x00000000000e4a6f
- (void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)arg1;	// IMP=0x00000000000e4a69
- (_Bool)isPlaying;	// IMP=0x00000000000e4a61
- (void)setVolume:(double)arg1;	// IMP=0x00000000000e496c
- (double)volume;	// IMP=0x00000000000e495a
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;	// IMP=0x00000000000e491d
- (long long)timeControlStatus;	// IMP=0x00000000000e4912
- (long long)status;	// IMP=0x00000000000e4907
- (_Bool)hasSeekableLiveStreamingContent;	// IMP=0x00000000000e48ff
- (_Bool)hasLiveStreamingContent;	// IMP=0x00000000000e48f7
- (_Bool)hasEnabledVideo;	// IMP=0x00000000000e48ef
- (_Bool)isPictureInPicturePossible;	// IMP=0x00000000000e48e7
- (_Bool)hasContent;	// IMP=0x00000000000e48df

@end

