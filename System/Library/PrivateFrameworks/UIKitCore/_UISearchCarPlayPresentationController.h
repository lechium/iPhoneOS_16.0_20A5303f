//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UISearchCarPlayPresentationController
{
    UIVisualEffectView *_blurView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000e733ad
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
- (void)containerViewWillLayoutSubviews;	// IMP=0x0000000000e73382
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000e7325e
- (unsigned long long)edgeForHidingNavigationBar;	// IMP=0x0000000000e73256
- (_Bool)forceObeyNavigationBarInsets;	// IMP=0x0000000000e7324e
- (_Bool)animatorShouldLayoutPresentationViews;	// IMP=0x0000000000e73246
- (void)setContentVisible:(_Bool)arg1;	// IMP=0x0000000000e731f8
- (struct CGRect)finalFrameForContainerView;	// IMP=0x0000000000e731da
- (id)adaptivePresentationController;	// IMP=0x0000000000e731d2
- (double)resultsControllerContentOffset;	// IMP=0x0000000000e731c9
- (_Bool)searchBarToBecomeTopAttached;	// IMP=0x0000000000e731c1
- (double)statusBarAdjustment;	// IMP=0x0000000000e731b8
- (_Bool)searchBarShouldClipToBounds;	// IMP=0x0000000000e731b0
- (_Bool)searchBarCanContainScopeBar;	// IMP=0x0000000000e731a8
- (_Bool)resultsUnderlapsSearchBar;	// IMP=0x0000000000e731a0
- (_Bool)shouldAccountForStatusBar;	// IMP=0x0000000000e73198
- (id)_presentationControllerForTraitCollection:(id)arg1;	// IMP=0x0000000000e7318f
- (id)_presentedViewControllerForSizeClassPair:(CDStruct_912cb5d2)arg1;	// IMP=0x0000000000e7317d
- (long long)adaptivePresentationStyle;	// IMP=0x0000000000e73172
- (void)hideBackgroundObscuringView;	// IMP=0x0000000000e73152
- (void)showBackgroundObscuringView;	// IMP=0x0000000000e7312d
- (id)backgroundObscuringView;	// IMP=0x0000000000e72f85

@end

