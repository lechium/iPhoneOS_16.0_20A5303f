//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXObservable.h>

@class NSString, PUAssetViewModel;

__attribute__((visibility("hidden")))
@interface PUBadgeInfoProvider : PXObservable
{
    struct {
        _Bool output;
    } _needsUpdateFlags;	// 8 = 0x8
    _Bool _outputShouldAnimate;	// 9 = 0x9
    _Bool _playing;	// 10 = 0xa
    PUAssetViewModel *_assetViewModel;	// 16 = 0x10
    double _lastPlayingTime;	// 24 = 0x18
    struct PXAssetBadgeInfo _badgeInfo;	// 32 = 0x20
    struct PXAssetBadgeInfo _outputBadgeInfo;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000003fa37f
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) double lastPlayingTime; // @synthesize lastPlayingTime=_lastPlayingTime;
@property(readonly, nonatomic) _Bool outputShouldAnimate; // @synthesize outputShouldAnimate=_outputShouldAnimate;
@property(readonly, nonatomic) struct PXAssetBadgeInfo outputBadgeInfo; // @synthesize outputBadgeInfo=_outputBadgeInfo;
@property(readonly, nonatomic) struct PXAssetBadgeInfo badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property(readonly, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationStatusForAsset:(id)arg2 context:(void *)arg3;	// IMP=0x00000000003fa22b
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000003fa1c3
- (void)_setOutputBadgeInfo:(struct PXAssetBadgeInfo)arg1 shouldAnimate:(_Bool)arg2;	// IMP=0x00000000003fa132
- (struct PXAssetBadgeInfo)_filteredBadgeInfoForTime:(double)arg1 outShouldAnimate:(_Bool *)arg2;	// IMP=0x00000000003f9e57
- (void)_updateOutputIfNeeded;	// IMP=0x00000000003f9dbf
- (void)_invalidateOutput;	// IMP=0x00000000003f9da2
- (_Bool)_needsUpdate;	// IMP=0x00000000003f9d92
- (void)_updateIfNeeded;	// IMP=0x00000000003f9cdd
- (void)_setNeedsUpdate;	// IMP=0x00000000003f9cc9
- (void)didPerformChanges;	// IMP=0x00000000003f9c88
- (id)mutableChangeObject;	// IMP=0x00000000003f9c7f
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000003f9c50
- (void)invalidateOutput;	// IMP=0x00000000003f9c04
- (void)_updatePlaying;	// IMP=0x00000000003f9a65
- (void)setBadgeInfo:(struct PXAssetBadgeInfo)arg1;	// IMP=0x00000000003f99ed
- (void)setAssetViewModel:(id)arg1;	// IMP=0x00000000003f9912
- (void)prepareForReuse;	// IMP=0x00000000003f98ae
- (id)init;	// IMP=0x00000000003f9812

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
