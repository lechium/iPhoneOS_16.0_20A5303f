//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, UIView, _UIRefreshControlModernReplicatorView, _UIRefreshControlSeedView;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlModernContentView
{
    _Bool _animationsAreValid;	// 208 = 0xd0
    UIView *_replicatorContainer;	// 216 = 0xd8
    _UIRefreshControlModernReplicatorView *_replicatorView;	// 224 = 0xe0
    _UIRefreshControlSeedView *_seed;	// 232 = 0xe8
    _Bool _hasFinishedRevealing;	// 240 = 0xf0
    UILabel *_textLabel;	// 248 = 0xf8
    _Bool _areAnimationsValid;	// 256 = 0x100
    _Bool _horizontallyCenteredFramesNeedUpdate;	// 257 = 0x101
    double _currentPopStiffness;	// 264 = 0x108
    double _impactIntensity;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00000000005e4491
@property(nonatomic) _Bool horizontallyCenteredFramesNeedUpdate; // @synthesize horizontallyCenteredFramesNeedUpdate=_horizontallyCenteredFramesNeedUpdate;
@property(nonatomic) double impactIntensity; // @synthesize impactIntensity=_impactIntensity;
@property(nonatomic) double currentPopStiffness; // @synthesize currentPopStiffness=_currentPopStiffness;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool areAnimationsValid; // @synthesize areAnimationsValid=_areAnimationsValid;
- (id)attributedTitle;	// IMP=0x00000000005e43db
- (void)setAttributedTitle:(id)arg1;	// IMP=0x00000000005e4381
- (void)setTintColor:(id)arg1;	// IMP=0x00000000005e4340
- (id)_effectiveTintColorWithAlpha:(double)arg1;	// IMP=0x00000000005e42de
- (id)_effectiveTintColor;	// IMP=0x00000000005e429b
- (void)layoutSubviews;	// IMP=0x00000000005e3a4c
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00000000005e398d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000005e38ca
- (double)maximumSnappingHeight;	// IMP=0x00000000005e384b
- (double)_maximumSnappingHeightScalingForScrollViewHeight;	// IMP=0x00000000005e37eb
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;	// IMP=0x00000000005e37dd
- (double)_currentTimeOffset;	// IMP=0x00000000005e3720
- (void)_updateTimeOffsetOfRelevantLayers;	// IMP=0x00000000005e367a
- (double)_percentageShowing;	// IMP=0x00000000005e3609
- (void)_snappingMagic;	// IMP=0x00000000005e35c7
- (void)_goAway;	// IMP=0x00000000005e33ff
- (void)_tick;	// IMP=0x00000000005e324c
- (void)_spin;	// IMP=0x00000000005e30d2
- (void)_bloom;	// IMP=0x00000000005e301b
- (void)_unbloom;	// IMP=0x00000000005e2f9f
- (void)_reveal;	// IMP=0x00000000005e2e6f
- (void)_resetToRevealingState;	// IMP=0x00000000005e29f4
- (struct CGAffineTransform)_unbloomedSeedTransform;	// IMP=0x00000000005e29ce
- (struct CGAffineTransform)_bloomedSeedTransform;	// IMP=0x00000000005e2887
- (void)_setUnbloomedAppearance;	// IMP=0x00000000005e2829
- (void)_setBloomedAppearance;	// IMP=0x00000000005e27cb
- (void)_setSpunAppearance;	// IMP=0x00000000005e2626
- (void)_cleanUpAfterRevealing;	// IMP=0x00000000005e25cb
- (void)_removeAllAnimations;	// IMP=0x00000000005e2583
- (void)_tickDueToProgrammaticRefresh;	// IMP=0x00000000005e2548
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000000005e2350
- (void)willTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000000005e22a2
- (long long)style;	// IMP=0x00000000005e2297
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005e1e57

@end
