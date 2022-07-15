//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "QLScrollableContentItemViewController.h"

@class NSDate, NSDictionary, NSLayoutConstraint, NSNumber, NSString, PHLivePhotoView, QLImageAnalysisManager, UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface QLLivePhotoItemViewController : QLScrollableContentItemViewController
{
    struct CGSize _imageSize;	// 8 = 0x8
    PHLivePhotoView *_livePhotoView;	// 24 = 0x18
    UIImageView *_livePhotoBadge;	// 32 = 0x20
    NSLayoutConstraint *_livePhotoBadgeLeftConstraint;	// 40 = 0x28
    NSLayoutConstraint *_livePhotoBadgeTopConstraint;	// 48 = 0x30
    NSDate *_didEndPlayingTimestamp;	// 56 = 0x38
    _Bool _isPlaying;	// 64 = 0x40
    _Bool _livePhotoBadgeVisible;	// 65 = 0x41
    _Bool _isFullScreen;	// 66 = 0x42
    _Bool _fullyZoomedOut;	// 67 = 0x43
    _Bool _transitionInProgress;	// 68 = 0x44
    NSNumber *_savedFullScreenState;	// 72 = 0x48
    _Bool _shouldPlayHint;	// 80 = 0x50
    QLImageAnalysisManager *_imageAnalysisManager;	// 88 = 0x58
    UIView *_analysisButtonContainer;	// 96 = 0x60
    NSLayoutConstraint *_analysisButtonContainerRightConstraint;	// 104 = 0x68
    NSLayoutConstraint *_analysisButtonContainerBottomConstraint;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000005327a
- (_Bool)_isPointInNonImageSubjectItems:(struct CGPoint)arg1;	// IMP=0x00000000000531f9
- (_Bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;	// IMP=0x0000000000053066
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000052f9c
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000052eff
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000052ea2
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;	// IMP=0x0000000000052e5a
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;	// IMP=0x0000000000052e0e
- (void)_updateImageAnalysisInteractionAnimated:(_Bool)arg1;	// IMP=0x0000000000052d7b
- (void)didScroll:(id)arg1;	// IMP=0x0000000000052d69
- (void)didZoom:(id)arg1;	// IMP=0x0000000000052d57
- (void)adjustImageInteractionForScrollEvent:(id)arg1;	// IMP=0x0000000000052d1e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000052c13
- (void)_updateAnalysisButtonsContainerConstraints;	// IMP=0x0000000000052b77
- (void)_setupAndStartImageAnalysisIfNeeded;	// IMP=0x0000000000052a67
- (void)imageAnalysisInteractionDidDismissVisualSearchController;	// IMP=0x00000000000529b3
- (void)imageAnalysisInteractionWillPresentVisualSearchController;	// IMP=0x0000000000052924
- (void)imageAnalyzerWantsUpdateInfoButtonWithAnimation:(_Bool)arg1;	// IMP=0x00000000000528d3
- (void)imageAnalyzerWantsUpdateOverlayViews;	// IMP=0x00000000000528c1
@property(readonly, nonatomic) NSDictionary *clientPreviewOptions;
@property(readonly, nonatomic) UIView *imageAnalysisView;
@property(readonly, nonatomic) UIImage *imageForAnalysis;
- (double)livePhotoView:(id)arg1 extraMinimumTouchDurationForTouch:(id)arg2 withStyle:(long long)arg3;	// IMP=0x0000000000052735
- (_Bool)livePhotoView:(id)arg1 canBeginPlaybackWithStyle:(long long)arg2;	// IMP=0x0000000000052695
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;	// IMP=0x0000000000052621
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;	// IMP=0x00000000000525de
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000052511
- (id)toolbarButtonsForTraitCollection:(id)arg1;	// IMP=0x0000000000052405
- (long long)preferredWhitePointAdaptivityStyle;	// IMP=0x00000000000523fa
- (_Bool)canToggleFullScreen;	// IMP=0x00000000000523b4
- (_Bool)canEnterFullScreen;	// IMP=0x0000000000052305
- (struct CGSize)imageSize;	// IMP=0x00000000000522ed
- (void)willBeginZooming;	// IMP=0x00000000000522cb
- (void)didEndZoomingAtScale:(double)arg1;	// IMP=0x0000000000052217
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;	// IMP=0x00000000000521ac
- (void)transitionDidStart:(_Bool)arg1;	// IMP=0x0000000000052141
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000520b2
- (void)previewDidDisappear:(_Bool)arg1;	// IMP=0x000000000005202c
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000051de5
- (void)previewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000051d95
- (void)previewDidAppear:(_Bool)arg1;	// IMP=0x0000000000051be1
- (void)previewWillFinishAppearing;	// IMP=0x0000000000051bb2
- (void)previewWillAppear:(_Bool)arg1;	// IMP=0x0000000000051b43
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000051a76
- (_Bool)_wasJustPlaying;	// IMP=0x00000000000519f3
- (void)_updateLivePhotoBadgeAnimated:(_Bool)arg1;	// IMP=0x0000000000051752
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000050f3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
