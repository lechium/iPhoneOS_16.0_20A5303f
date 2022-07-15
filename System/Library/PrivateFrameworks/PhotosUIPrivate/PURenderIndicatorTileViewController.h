//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, NSUndoManager, PLRoundProgressView, PUAssetSharedViewModel, PUBrowsingVideoPlayer, PUOperationStatus, PXOperationStatus, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PURenderIndicatorTileViewController : PUTileViewController
{
    _Bool _needsUpdateStatus;	// 8 = 0x8
    _Bool _needsUpdateSizeClass;	// 9 = 0x9
    _Bool _needsUpdateStatusViews;	// 10 = 0xa
    _Bool _isProgressViewVisible;	// 11 = 0xb
    _Bool _willShowProgressAfterDelay;	// 12 = 0xc
    PUAssetSharedViewModel *_assetSharedViewModel;	// 16 = 0x10
    PUBrowsingVideoPlayer *_videoPlayer;	// 24 = 0x18
    NSUndoManager *_undoManager;	// 32 = 0x20
    PUOperationStatus *_status;	// 40 = 0x28
    PXOperationStatus *_editActionStatus;	// 48 = 0x30
    long long _sizeClass;	// 56 = 0x38
    UIView *_roundedBackgroundView;	// 64 = 0x40
    UILabel *_renderingLabel;	// 72 = 0x48
    PLRoundProgressView *_progressView;	// 80 = 0x50
    UIButton *_errorButton;	// 88 = 0x58
    double _renderLabelTextWidth;	// 96 = 0x60
    struct CGSize _progressIndicatorSize;	// 104 = 0x68
}

+ (_Bool)wantsRenderViewForTypeOfProcessingNeeded:(unsigned short)arg1;	// IMP=0x00100000001b70f2
+ (id)_loadErrorIconForSizeClass:(long long)arg1;	// IMP=0x00100000001b7001
+ (struct CGSize)renderIndicatorTileSizeForSizeClass:(long long)arg1;	// IMP=0x00100000001b6fde
+ (struct CGSize)progressIndicatorTileSizeForSizeClass:(long long)arg1;	// IMP=0x00100000001b6fcd
- (void).cxx_destruct;	// IMP=0x00000000001b6c2a
@property(nonatomic) _Bool willShowProgressAfterDelay; // @synthesize willShowProgressAfterDelay=_willShowProgressAfterDelay;
@property(nonatomic) double renderLabelTextWidth; // @synthesize renderLabelTextWidth=_renderLabelTextWidth;
@property(retain, nonatomic) UIButton *errorButton; // @synthesize errorButton=_errorButton;
@property(nonatomic) _Bool isProgressViewVisible; // @synthesize isProgressViewVisible=_isProgressViewVisible;
@property(retain, nonatomic) PLRoundProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *renderingLabel; // @synthesize renderingLabel=_renderingLabel;
@property(retain, nonatomic) UIView *roundedBackgroundView; // @synthesize roundedBackgroundView=_roundedBackgroundView;
@property(nonatomic) struct CGSize progressIndicatorSize; // @synthesize progressIndicatorSize=_progressIndicatorSize;
@property(nonatomic) long long sizeClass; // @synthesize sizeClass=_sizeClass;
@property(retain, nonatomic) PXOperationStatus *editActionStatus; // @synthesize editActionStatus=_editActionStatus;
@property(copy, nonatomic) PUOperationStatus *status; // @synthesize status=_status;
@property(nonatomic) _Bool needsUpdateStatusViews; // @synthesize needsUpdateStatusViews=_needsUpdateStatusViews;
@property(nonatomic) _Bool needsUpdateSizeClass; // @synthesize needsUpdateSizeClass=_needsUpdateSizeClass;
@property(nonatomic) _Bool needsUpdateStatus; // @synthesize needsUpdateStatus=_needsUpdateStatus;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // @synthesize assetSharedViewModel=_assetSharedViewModel;
- (void)loadingStatusManager:(id)arg1 didUpdateLoadingStatus:(id)arg2 forItem:(id)arg3;	// IMP=0x00000000001b68ad
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000001b6804
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000001b677f
- (void)_updateSubviewOrdering;	// IMP=0x00000000001b66d9
- (void)_updateStatusViewsIfNeeded;	// IMP=0x00000000001b5ce8
- (void)_invalidateStatusViews;	// IMP=0x00000000001b5cb5
- (void)_updateSizeClassIfNeeded;	// IMP=0x00000000001b5bae
- (void)_invalidateSizeClass;	// IMP=0x00000000001b5b7b
- (void)_updateStatusIfNeeded;	// IMP=0x00000000001b5ad1
- (void)_invalidateStatus;	// IMP=0x00000000001b5a4a
- (void)_setNeedsUpdate;	// IMP=0x00000000001b5a44
- (_Bool)_needsUpdate;	// IMP=0x00000000001b59f7
- (void)_updateIfNeeded;	// IMP=0x00000000001b5914
- (void)setProgressViewVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b5568
- (void)setProgressViewVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001b5553
- (void)setProgressViewVisible:(_Bool)arg1;	// IMP=0x00000000001b553f
- (void)_updateViewFramesForCollapseState:(_Bool)arg1;	// IMP=0x00000000001b514a
- (struct CGRect)_expandedBackgroundViewFrame;	// IMP=0x00000000001b50c1
- (void)applyLayoutInfo:(id)arg1;	// IMP=0x00000000001b4f89
- (void)becomeReusable;	// IMP=0x00000000001b4dd6
- (void)viewDidLoad;	// IMP=0x00000000001b4d73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
