//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEKBadgeTextView, CEKSlider, CEKWheelScrubberView, CIContext, CIImage, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface PUFilterToolController
{
    CEKBadgeTextView *_filterBadgeView;	// 16 = 0x10
    CEKWheelScrubberView *_scrubberView;	// 24 = 0x18
    CEKSlider *_slider;	// 32 = 0x20
    _Bool _isSliderTouchDown;	// 40 = 0x28
    _Bool _isScrubbing;	// 41 = 0x29
    CIImage *_inputImage;	// 48 = 0x30
    _Bool _monitorAdjustmentsForCache;	// 56 = 0x38
    NSMutableDictionary *_filterThumbnailCache;	// 64 = 0x40
    NSMutableDictionary *_filterIntensityCache;	// 72 = 0x48
    NSMutableArray *_toolConstraints;	// 80 = 0x50
    NSMutableArray *_scrubberViewConstraints;	// 88 = 0x58
    NSMutableArray *_filterBadgeViewConstraints;	// 96 = 0x60
    NSLayoutConstraint *_filterBadgeWidthConstraint;	// 104 = 0x68
    NSLayoutConstraint *_filterBadgeHeightConstraint;	// 112 = 0x70
    NSNumberFormatter *_formatter;	// 120 = 0x78
    CIContext *_context;	// 128 = 0x80
    CDStruct_1b6d18a9 _thumbnailTime;	// 136 = 0x88
    CDUnknownBlockType _willLoadFilterThumbnails;	// 160 = 0xa0
    CDUnknownBlockType _didFinishLoadingFilterThumbnails;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000041acbe
@property(copy, nonatomic) CDUnknownBlockType didFinishLoadingFilterThumbnails; // @synthesize didFinishLoadingFilterThumbnails=_didFinishLoadingFilterThumbnails;
@property(copy, nonatomic) CDUnknownBlockType willLoadFilterThumbnails; // @synthesize willLoadFilterThumbnails=_willLoadFilterThumbnails;
- (void)sliderDidEndScrolling:(id)arg1;	// IMP=0x000000000041ac22
- (void)sliderWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000041ac02
- (void)sliderDidScroll:(id)arg1;	// IMP=0x000000000041aaee
- (void)sliderWillBeginScrolling:(id)arg1;	// IMP=0x000000000041aab0
- (void)_sliderDidEndScrolling;	// IMP=0x000000000041aa72
- (void)_updateSelectionTextAnimate:(_Bool)arg1;	// IMP=0x000000000041a985
- (void)_updateCompositionControllerWithEffect:(id)arg1;	// IMP=0x000000000041a802
- (void)wheelScrubberViewDidEndScrolling:(id)arg1;	// IMP=0x000000000041a720
- (void)wheelScrubberViewWillBeginScrolling:(id)arg1;	// IMP=0x000000000041a6cf
- (void)wheelScrubberView:(id)arg1 updateCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;	// IMP=0x000000000041a466
- (void)wheelScrubberViewDidChangeSelectedIndex:(id)arg1;	// IMP=0x000000000041a3f7
- (void)_updateFilterIntensityCache;	// IMP=0x000000000041a2f3
- (void)_setShowSlider:(_Bool)arg1 animate:(_Bool)arg2;	// IMP=0x000000000041a181
- (void)_updateBadgeAndSliderWithEffect:(id)arg1;	// IMP=0x0000000000419f0e
- (long long)_indexForFilterId:(id)arg1;	// IMP=0x0000000000419e6d
- (id)_effectForIndex:(long long)arg1;	// IMP=0x0000000000419df3
- (double)_adjustedFilterIntensity;	// IMP=0x0000000000419d9c
- (id)_adjustedFilterName;	// IMP=0x0000000000419d4c
- (id)_effectAdjustment;	// IMP=0x0000000000419c5a
- (long long)_adjustedFilterIndex;	// IMP=0x0000000000419b51
- (long long)toolControllerTag;	// IMP=0x0000000000419b46
- (_Bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;	// IMP=0x0000000000419ad3
- (_Bool)installTogglePreviewGestureRecognizer:(id)arg1;	// IMP=0x0000000000419a60
- (_Bool)wantsZoomAndPanEnabled;	// IMP=0x0000000000419a58
- (id)centerToolbarView;	// IMP=0x0000000000419935
- (id)toolbarIcon;	// IMP=0x0000000000419842
- (id)localizedName;	// IMP=0x0000000000419831
- (void)_updateScrubberLayout;	// IMP=0x0000000000419784
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000419685
- (void)_updateBadgeConstraints;	// IMP=0x000000000041900d
- (void)_updateToolConstraints;	// IMP=0x0000000000417b7a
- (void)updateViewConstraints;	// IMP=0x0000000000417b27
- (void)_setThumbnail:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000417b0a
- (void)_updateCacheWithCIImage:(id)arg1;	// IMP=0x0000000000417816
- (void)_prepareThumbnailImagesIfNeeded;	// IMP=0x00000000004172dd
- (void)_updateWithCompositionController:(id)arg1;	// IMP=0x0000000000417209
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;	// IMP=0x00000000004170a2
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000416ff0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000416f8a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000416ef9
- (void)didResignActiveTool;	// IMP=0x0000000000416ebd
- (void)willBecomeActiveTool;	// IMP=0x0000000000416e41
- (void)decreaseSliderValue:(_Bool)arg1;	// IMP=0x0000000000416def
- (void)increaseSliderValue:(_Bool)arg1;	// IMP=0x0000000000416d9a
- (_Bool)wantsSliderKeyControl;	// IMP=0x0000000000416d92
- (void)decreaseScrubberValue:(_Bool)arg1;	// IMP=0x0000000000416d1d
- (void)increaseScrubberValue:(_Bool)arg1;	// IMP=0x0000000000416c75
- (_Bool)wantsScrubberKeyControl;	// IMP=0x0000000000416c6d
- (void)viewDidLoad;	// IMP=0x0000000000416ba1
- (void)_setupSlider;	// IMP=0x0000000000416a45
- (void)_setupFilters;	// IMP=0x00000000004167a5
- (void)_setupScrubber;	// IMP=0x0000000000416636
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000004165f2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004165ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

