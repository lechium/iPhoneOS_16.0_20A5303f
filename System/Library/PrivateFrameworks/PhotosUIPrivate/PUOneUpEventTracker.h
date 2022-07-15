//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMediaViewControllerEventTracker.h>

@class NSMutableDictionary, NSString, PUBrowsingVideoPlayer, PUBrowsingViewModel, PXAssetAnalyzer, PXAssetMetadataDonator;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUOneUpEventTracker : PXMediaViewControllerEventTracker
{
    _Bool _isSessionActive;	// 8 = 0x8
    _Bool _currentlyStreamingVideoIsActuallyPlaying;	// 9 = 0x9
    _Bool _currentlyStreamingVideoIsStalled;	// 10 = 0xa
    _Bool _currentlyStreamingVideoDidStartActualPlayback;	// 11 = 0xb
    PUBrowsingViewModel *_viewModel;	// 16 = 0x10
    long long _presentationOrigin;	// 24 = 0x18
    long long _sessionSignpost;	// 32 = 0x20
    double _currentlyViewedAssetTimestamp;	// 40 = 0x28
    long long _currentlyViewedAssetGeneration;	// 48 = 0x30
    long long _currentAssetSignpost;	// 56 = 0x38
    long long _currentAssetDisplayIntervalSignpost;	// 64 = 0x40
    PXAssetAnalyzer *_assetAnalyzer;	// 72 = 0x48
    PXAssetMetadataDonator *_assetMetadataDonator;	// 80 = 0x50
    PUBrowsingVideoPlayer *_currentVideoPlayer;	// 88 = 0x58
    id <PUDisplayAsset> _currentVideoAsset;	// 96 = 0x60
    id <PUDisplayAsset> _currentlyPlayingVideoAsset;	// 104 = 0x68
    double _currentlyPlayingVideoAssetTimestamp;	// 112 = 0x70
    id <PUDisplayAsset> _currentlyStreamingVideoAsset;	// 120 = 0x78
    long long _currentlyStreamingVideoStallsCount;	// 128 = 0x80
    long long _currentlyPlayingLivePhotoSignpost;	// 136 = 0x88
    long long _currentlyPlayingVideoSignpost;	// 144 = 0x90
    long long _currentlyPlayingStreamedVideoSignpost;	// 152 = 0x98
    long long _currentlyPlayingStreamedVideoStartSignpost;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000003e6a2e
@property(nonatomic) long long currentlyPlayingStreamedVideoStartSignpost; // @synthesize currentlyPlayingStreamedVideoStartSignpost=_currentlyPlayingStreamedVideoStartSignpost;
@property(nonatomic) long long currentlyPlayingStreamedVideoSignpost; // @synthesize currentlyPlayingStreamedVideoSignpost=_currentlyPlayingStreamedVideoSignpost;
@property(nonatomic) long long currentlyPlayingVideoSignpost; // @synthesize currentlyPlayingVideoSignpost=_currentlyPlayingVideoSignpost;
@property(nonatomic) long long currentlyPlayingLivePhotoSignpost; // @synthesize currentlyPlayingLivePhotoSignpost=_currentlyPlayingLivePhotoSignpost;
@property(nonatomic) _Bool currentlyStreamingVideoDidStartActualPlayback; // @synthesize currentlyStreamingVideoDidStartActualPlayback=_currentlyStreamingVideoDidStartActualPlayback;
@property(nonatomic) long long currentlyStreamingVideoStallsCount; // @synthesize currentlyStreamingVideoStallsCount=_currentlyStreamingVideoStallsCount;
@property(nonatomic) _Bool currentlyStreamingVideoIsStalled; // @synthesize currentlyStreamingVideoIsStalled=_currentlyStreamingVideoIsStalled;
@property(nonatomic) _Bool currentlyStreamingVideoIsActuallyPlaying; // @synthesize currentlyStreamingVideoIsActuallyPlaying=_currentlyStreamingVideoIsActuallyPlaying;
@property(retain, nonatomic) id <PUDisplayAsset> currentlyStreamingVideoAsset; // @synthesize currentlyStreamingVideoAsset=_currentlyStreamingVideoAsset;
@property(readonly, nonatomic) double currentlyPlayingVideoAssetTimestamp; // @synthesize currentlyPlayingVideoAssetTimestamp=_currentlyPlayingVideoAssetTimestamp;
@property(retain, nonatomic) id <PUDisplayAsset> currentlyPlayingVideoAsset; // @synthesize currentlyPlayingVideoAsset=_currentlyPlayingVideoAsset;
@property(readonly, nonatomic) id <PUDisplayAsset> currentVideoAsset; // @synthesize currentVideoAsset=_currentVideoAsset;
@property(retain, nonatomic) PUBrowsingVideoPlayer *currentVideoPlayer; // @synthesize currentVideoPlayer=_currentVideoPlayer;
@property(readonly, nonatomic) PXAssetMetadataDonator *assetMetadataDonator; // @synthesize assetMetadataDonator=_assetMetadataDonator;
@property(readonly, nonatomic) PXAssetAnalyzer *assetAnalyzer; // @synthesize assetAnalyzer=_assetAnalyzer;
@property(nonatomic) long long currentAssetDisplayIntervalSignpost; // @synthesize currentAssetDisplayIntervalSignpost=_currentAssetDisplayIntervalSignpost;
@property(nonatomic) long long currentAssetSignpost; // @synthesize currentAssetSignpost=_currentAssetSignpost;
@property(readonly, nonatomic) long long currentlyViewedAssetGeneration; // @synthesize currentlyViewedAssetGeneration=_currentlyViewedAssetGeneration;
@property(readonly, nonatomic) double currentlyViewedAssetTimestamp; // @synthesize currentlyViewedAssetTimestamp=_currentlyViewedAssetTimestamp;
@property(nonatomic) long long sessionSignpost; // @synthesize sessionSignpost=_sessionSignpost;
@property(nonatomic) _Bool isSessionActive; // @synthesize isSessionActive=_isSessionActive;
@property(readonly, nonatomic) long long presentationOrigin; // @synthesize presentationOrigin=_presentationOrigin;
@property(readonly, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000003e65c0
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000003e64fd
- (void)_logWillEndPlaybackOfStreamedVideoAsset:(id)arg1;	// IMP=0x00000000003e61eb
- (void)_logDidStartActualPlaybackOfStreamedVideoAsset:(id)arg1;	// IMP=0x00000000003e606b
- (void)_logDidStartPlaybackOfStreamedVideoAsset:(id)arg1;	// IMP=0x00000000003e5ee8
- (void)_logDidEndPlayingVideoAsset:(id)arg1 duration:(double)arg2;	// IMP=0x00000000003e5bff
- (void)_logDidStartPlayingVideoAsset:(id)arg1;	// IMP=0x00000000003e5a9a
- (void)logVitalityDidEndForLivePhoto:(id)arg1;	// IMP=0x00000000003e5963
- (void)logUserDidPlayLivePhoto:(id)arg1;	// IMP=0x00000000003e5787
- (void)logUserWillPlayLivePhoto:(id)arg1;	// IMP=0x00000000003e5622
- (void)_handleLongEnoughViewDurationWithGeneration:(long long)arg1;	// IMP=0x00000000003e5507
- (void)_logDidEndSession;	// IMP=0x00000000003e5401
- (void)_logDidStartSession;	// IMP=0x00000000003e533b
- (void)logDidEndViewingMedia:(id)arg1 mediaKind:(long long)arg2 duration:(double)arg3;	// IMP=0x00000000003e4de6
- (void)logDidStartViewingMedia:(id)arg1 mediaKind:(long long)arg2;	// IMP=0x00000000003e4a84
- (void)setDisplayedAsset:(id)arg1;	// IMP=0x00000000003e4914
- (void)_updateCurrentVideoProperties;	// IMP=0x00000000003e43ae
- (void)_invalidateCurrentVideoProperties;	// IMP=0x00000000003e436a
- (void)_updateCurrentVideoPlayer;	// IMP=0x00000000003e42bb
- (void)_invalidateCurrentVideoPlayer;	// IMP=0x00000000003e4277
- (void)_updateCurrentlyViewedAsset;	// IMP=0x00000000003e41b2
- (void)_invalidateCurrentlyViewedAsset;	// IMP=0x00000000003e416e
- (void)_updateIsSessionActive;	// IMP=0x00000000003e413d
- (void)_invalidateIsSessionActive;	// IMP=0x00000000003e40f9
- (id)initWithViewModel:(id)arg1 presentationOrigin:(long long)arg2;	// IMP=0x00000000003e3ef9
- (id)initWithViewName:(id)arg1;	// IMP=0x00000000003e3e76

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSMutableDictionary *payload;
@property(readonly) Class superclass;

@end
