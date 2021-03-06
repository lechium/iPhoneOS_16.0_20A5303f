//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, PLRoundProgressView, PUAssetSharedViewModel, PUBrowsingVideoPlayer, PUOperationStatus, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenProgressIndicatorTileViewController : PUTileViewController
{
    _Bool __needsUpdateProgressViewStyle;	// 8 = 0x8
    _Bool __needsUpdateStatus;	// 9 = 0x9
    _Bool __needsUpdateStatusViews;	// 10 = 0xa
    _Bool __isProgressViewVisible;	// 11 = 0xb
    PUAssetSharedViewModel *_assetSharedViewModel;	// 16 = 0x10
    PUBrowsingVideoPlayer *_videoPlayer;	// 24 = 0x18
    long long __progressViewStyle;	// 32 = 0x20
    PUOperationStatus *__status;	// 40 = 0x28
    PLRoundProgressView *__progressView;	// 48 = 0x30
    UIButton *__errorButton;	// 56 = 0x38
    UILabel *__debugProgressLabel;	// 64 = 0x40
}

+ (id)_loadErrorIcon;	// IMP=0x00100000000ca8f8
+ (struct CGSize)progressIndicatorTileSize;	// IMP=0x00100000000ca8e7
- (void).cxx_destruct;	// IMP=0x00000000000ca7f7
@property(retain, nonatomic, setter=_setDebugProgressLabel:) UILabel *_debugProgressLabel; // @synthesize _debugProgressLabel=__debugProgressLabel;
@property(retain, nonatomic, setter=_setErrorButton:) UIButton *_errorButton; // @synthesize _errorButton=__errorButton;
@property(nonatomic, setter=_setProgressViewVisible:) _Bool _isProgressViewVisible; // @synthesize _isProgressViewVisible=__isProgressViewVisible;
@property(retain, nonatomic, setter=_setProgressView:) PLRoundProgressView *_progressView; // @synthesize _progressView=__progressView;
@property(copy, nonatomic, setter=_setStatus:) PUOperationStatus *_status; // @synthesize _status=__status;
@property(nonatomic, setter=_setProgressViewStyle:) long long _progressViewStyle; // @synthesize _progressViewStyle=__progressViewStyle;
@property(nonatomic, setter=_setNeedsUpdateStatusViews:) _Bool _needsUpdateStatusViews; // @synthesize _needsUpdateStatusViews=__needsUpdateStatusViews;
@property(nonatomic, setter=_setNeedsUpdateStatus:) _Bool _needsUpdateStatus; // @synthesize _needsUpdateStatus=__needsUpdateStatus;
@property(nonatomic, setter=_setNeedsUpdateProgressViewStyle:) _Bool _needsUpdateProgressViewStyle; // @synthesize _needsUpdateProgressViewStyle=__needsUpdateProgressViewStyle;
@property(retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // @synthesize assetSharedViewModel=_assetSharedViewModel;
- (void)_handleVideoPlayer:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000000ca68a
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000000ca640
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000000ca589
- (void)_updateSubviewOrdering;	// IMP=0x00000000000ca4e3
- (void)_updateStatusViewsIfNeeded;	// IMP=0x00000000000c9e1f
- (void)_invalidateStatusViews;	// IMP=0x00000000000c9dec
- (void)_updateStatusIfNeeded;	// IMP=0x00000000000c9d42
- (void)_invalidateStatus;	// IMP=0x00000000000c9d0f
- (void)_updateProgressViewStyleIfNeeded;	// IMP=0x00000000000c9cc4
- (void)_invalidateProgressViewStyle;	// IMP=0x00000000000c9c91
- (void)_setNeedsUpdate;	// IMP=0x00000000000c9c8b
- (_Bool)_needsUpdate;	// IMP=0x00000000000c9c3e
- (void)_updateIfNeeded;	// IMP=0x00000000000c9b5b
- (void)_handleErrorButtonTap:(id)arg1;	// IMP=0x00000000000c9ac6
- (void)_setProgressViewVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000c98c9
- (void)applyLayoutInfo:(id)arg1;	// IMP=0x00000000000c97df
- (void)becomeReusable;	// IMP=0x00000000000c9652
- (void)viewDidLoad;	// IMP=0x00000000000c95fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

