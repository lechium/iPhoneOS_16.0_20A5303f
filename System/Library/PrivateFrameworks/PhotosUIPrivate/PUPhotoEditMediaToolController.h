//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEKApertureButton, CEKEdgeGradientView, NSLayoutConstraint, NSMutableArray, NSString, PLRoundProgressView, PTCinematographyScript, PUPhotoEditApertureToolbar, PUTrimToolController, PUVideoEditOverlayViewController, PXCinematicEditController, PXUIButton, UIButton, UILabel, UILayoutGuide, UIView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditMediaToolController
{
    _UIBackdropView *_backdropBackgroundView;	// 16 = 0x10
    UIView *_solidBackgroundView;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
    NSLayoutConstraint *_viewHeightConstraint;	// 40 = 0x28
    NSLayoutConstraint *_leadingWidthConstraint;	// 48 = 0x30
    NSLayoutConstraint *_trailingWidthConstraint;	// 56 = 0x38
    NSMutableArray *_constraints;	// 64 = 0x40
    PUTrimToolController *_trimController;	// 72 = 0x48
    PXUIButton *_muteButton;	// 80 = 0x50
    PXUIButton *_livePhotoButton;	// 88 = 0x58
    UILabel *_videoLabelView;	// 96 = 0x60
    UIButton *_stabilizeButton;	// 104 = 0x68
    PLRoundProgressView *_stabilizeProgressView;	// 112 = 0x70
    PXUIButton *_portraitVideoButton;	// 120 = 0x78
    CEKApertureButton *_apertureButton;	// 128 = 0x80
    UIView *_apertureButtonContainer;	// 136 = 0x88
    PXUIButton *_autoFocusButton;	// 144 = 0x90
    PUVideoEditOverlayViewController *_overlayController;	// 152 = 0x98
    UIView *_apertureContainer;	// 160 = 0xa0
    PUPhotoEditApertureToolbar *_apertureToolbar;	// 168 = 0xa8
    UILayoutGuide *_apertureContainerLayoutGuide;	// 176 = 0xb0
    long long _toolMode;	// 184 = 0xb8
    PXCinematicEditController *_cinematographyController;	// 192 = 0xc0
    CEKEdgeGradientView *_apertureGradientView;	// 200 = 0xc8
    _Bool _trimControllerVisible;	// 208 = 0xd0
    _Bool _viewHasAppeared;	// 209 = 0xd1
    _Bool _trimControllerScrubberNeedsVisualUpdate;	// 210 = 0xd2
    _Bool _stabilizationInProgress;	// 211 = 0xd3
    CDStruct_1b6d18a9 _originalStillImageTime;	// 212 = 0xd4
    _Bool _isActiveTool;	// 236 = 0xec
    _Bool _useTranslucentBackground;	// 237 = 0xed
    long long _layoutType;	// 240 = 0xf0
    UIView *_primaryView;	// 248 = 0xf8
    double _horizontalControlPadding;	// 256 = 0x100
    double _horizontalPrimaryViewPaddingOffset;	// 264 = 0x108
    double _verticalButtonOffset;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x000000000030a92f
@property(nonatomic) _Bool useTranslucentBackground; // @synthesize useTranslucentBackground=_useTranslucentBackground;
@property(nonatomic) double verticalButtonOffset; // @synthesize verticalButtonOffset=_verticalButtonOffset;
@property(readonly, nonatomic) double horizontalPrimaryViewPaddingOffset; // @synthesize horizontalPrimaryViewPaddingOffset=_horizontalPrimaryViewPaddingOffset;
@property(nonatomic) double horizontalControlPadding; // @synthesize horizontalControlPadding=_horizontalControlPadding;
@property(retain, nonatomic) UIView *primaryView; // @synthesize primaryView=_primaryView;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
- (void)apertureToolbarDidStopSliding:(id)arg1;	// IMP=0x000000000030a875
- (void)apertureToolbarDidStartSliding:(id)arg1;	// IMP=0x000000000030a863
- (_Bool)apertureToolbarShouldRotateLabelsWithOrientation:(id)arg1;	// IMP=0x000000000030a81a
- (void)apertureToolbar:(id)arg1 didChangeValue:(double)arg2;	// IMP=0x000000000030a7e1
- (void)trimToolController:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2;	// IMP=0x000000000030a769
- (void)trimToolController:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;	// IMP=0x000000000030a711
- (id)axDescriptionForFocusDecisionAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000030a6f4
- (void)removeFocusDecisionAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000030a62f
- (void)trimToolControllerDidChange:(id)arg1 state:(unsigned long long)arg2;	// IMP=0x000000000030a4ea
- (void)didRemoveUserDecision;	// IMP=0x000000000030a4d8
- (_Bool)hasTrimmedVideo;	// IMP=0x000000000030a42e
- (void)interactionBegan;	// IMP=0x000000000030a3e6
- (void)objectTrackingFinishedWithSuccess:(_Bool)arg1;	// IMP=0x000000000030a38f
- (void)trackedObjectWasUpdatedAtTime:(CDStruct_1b6d18a9)arg1 shouldStop:(_Bool *)arg2;	// IMP=0x000000000030a324
- (void)objectTrackingStartedAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000030a2c3
- (void)updateCinematicVideoControlsEnableState;	// IMP=0x000000000030a1e7
- (void)cinematographyWasEditedAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000030a0de
- (void)cinematographyWasEdited;	// IMP=0x000000000030a01b
- (void)cineScriptCouldNotInitializeWithError:(id)arg1;	// IMP=0x0000000000309f50
- (void)cineScriptBecameAvailable:(id)arg1;	// IMP=0x0000000000309e4f
- (void)_initializeCinematographyScript;	// IMP=0x0000000000309bae
- (void)_handleAutoFocusButton:(id)arg1;	// IMP=0x0000000000309a59
- (void)_updateApertureSliderLength;	// IMP=0x000000000030995f
- (void)_dismissPortraitVideoDebugControls:(id)arg1;	// IMP=0x0000000000309946
- (void)_presentPortraitVideoDebugControls;	// IMP=0x00000000003095e8
- (void)_handlePortraitVideoButtonLongPress:(id)arg1;	// IMP=0x00000000003095ac
- (void)_handlePortraitVideoButton:(id)arg1;	// IMP=0x00000000003093b6
- (void)_setToolMode:(long long)arg1;	// IMP=0x000000000030931f
- (void)_resetDefaultToolMode;	// IMP=0x000000000030930b
- (void)_handleApertureButton:(id)arg1;	// IMP=0x00000000003092e8
- (void)_updateApertureControlsAnimated:(_Bool)arg1;	// IMP=0x000000000030902b
- (void)_updateTrackerDisplay:(_Bool)arg1;	// IMP=0x0000000000308f21
- (void)_updatePortraitVideoButtonAnimated:(_Bool)arg1;	// IMP=0x0000000000308dc1
- (_Bool)_wantsPortraitVideoControls;	// IMP=0x0000000000308d7d
@property(readonly, nonatomic) PTCinematographyScript *cinematographyScript;
- (void)_updateStabilizationInProgress:(_Bool)arg1;	// IMP=0x0000000000308d1e
- (void)_reportStabilizeProgress:(double)arg1;	// IMP=0x0000000000308cb0
- (void)_updateStabilizeProgressViewAnimated:(_Bool)arg1;	// IMP=0x0000000000308aae
- (void)_handleStabilizeButton:(id)arg1;	// IMP=0x00000000003087ab
- (void)_updateStabilizeButtonAnimated:(_Bool)arg1;	// IMP=0x00000000003085dd
- (void)_handleMuteButton:(id)arg1;	// IMP=0x00000000003084ff
- (void)_updateMuteButtonAnimated:(_Bool)arg1;	// IMP=0x000000000030813e
- (id)_localizedTitleForCurrentPlaybackVariation;	// IMP=0x000000000030808a
- (void)_handleLivePhotoButton:(id)arg1;	// IMP=0x000000000030804d
- (void)_updateLivePhotoButton:(id)arg1;	// IMP=0x0000000000308036
- (void)_updateLivePhotoButtonAnimated:(_Bool)arg1;	// IMP=0x0000000000307ee9
- (void)togglePlayback:(id)arg1;	// IMP=0x0000000000307e84
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000307e01
- (void)updateToolbarButtonsAnimated:(_Bool)arg1;	// IMP=0x0000000000307d6e
- (void)reloadToolbarButtons:(_Bool)arg1;	// IMP=0x0000000000307c33
- (void)videoRenderingChanged;	// IMP=0x0000000000307bd6
- (void)_invalidateTrimControlScrubberThumbnails;	// IMP=0x0000000000307bc5
@property(readonly, nonatomic) PUTrimToolController *trimController;
- (id)makeTrimToolController;	// IMP=0x000000000030781d
- (_Bool)_updateAutoFocusToolbarButton;	// IMP=0x000000000030757e
- (void)_updateTrimControlAndToolbarButtons;	// IMP=0x0000000000305742
- (_Bool)_wantsTrimControl;	// IMP=0x00000000003055e6
- (_Bool)_isTrimAllowed;	// IMP=0x00000000003054da
- (void)_updateBackgroundAnimated:(_Bool)arg1;	// IMP=0x00000000003052cc
- (long long)toolControllerTag;	// IMP=0x00000000003052c1
- (id)trailingToolbarViews;	// IMP=0x00000000003051a2
- (id)centerToolbarView;	// IMP=0x000000000030516a
- (id)leadingToolbarViews;	// IMP=0x000000000030504b
- (_Bool)wantsSecondaryToolbarVisible;	// IMP=0x0000000000305043
- (void)setUseGradientBackground:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000304ecb
- (void)setBackdropViewGroupName:(id)arg1;	// IMP=0x0000000000304de5
- (id)accessibilityHUDItemForButton:(id)arg1;	// IMP=0x0000000000304c11
- (void)mediaViewDidScroll:(id)arg1;	// IMP=0x0000000000304bef
- (void)mediaView:(id)arg1 didZoom:(double)arg2;	// IMP=0x0000000000304bcd
- (void)decreaseScrubberValue:(_Bool)arg1;	// IMP=0x0000000000304ba2
- (void)increaseScrubberValue:(_Bool)arg1;	// IMP=0x0000000000304b7c
- (long long)scrubberOrientation;	// IMP=0x0000000000304b71
- (_Bool)wantsScrubberKeyControl;	// IMP=0x0000000000304b69
- (_Bool)wantsZoomAndPanEnabled;	// IMP=0x0000000000304b61
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;	// IMP=0x000000000030490e
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5;	// IMP=0x00000000003048b1
- (void)willResignActiveTool;	// IMP=0x000000000030484f
- (void)reactivate;	// IMP=0x000000000030483d
- (void)willBecomeActiveTool;	// IMP=0x00000000003047b9
- (void)setPlaceholderImage:(id)arg1;	// IMP=0x0000000000304719
- (void)photoEditLivePhotoModelUpdated;	// IMP=0x0000000000304707
- (void)baseMediaInvalidated;	// IMP=0x00000000003046c6
- (void)updateForIncomingAnimation;	// IMP=0x0000000000304685
- (void)setOriginalStillImageTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000030461b
- (_Bool)canResetToDefaultValue;	// IMP=0x0000000000304613
- (id)toolbarIconAccessibilityLabel;	// IMP=0x000000000030457a
- (id)toolbarIcon;	// IMP=0x0000000000304444
- (id)localizedName;	// IMP=0x00000000003043ab
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000304138
- (void)_updateToolVisibilityAnimated:(_Bool)arg1;	// IMP=0x000000000030400c
- (void)_invalidateConstraints;	// IMP=0x0000000000303f79
- (void)updateViewConstraints;	// IMP=0x0000000000302678
@property(readonly, nonatomic) UIButton *livePhotoButton;
- (void)_layoutToolGradient;	// IMP=0x00000000003024c3
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000302482
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000302414
- (void)loadView;	// IMP=0x000000000030227d
- (id)init;	// IMP=0x0000000000302086
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000302074

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

