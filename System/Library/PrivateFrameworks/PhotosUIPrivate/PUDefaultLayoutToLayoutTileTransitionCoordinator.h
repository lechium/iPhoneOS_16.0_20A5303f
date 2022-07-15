//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUAssetReference, PUTilingLayout, PUTilingLayoutTransitionContext;
@protocol PUTilingCoordinateSystem;

__attribute__((visibility("hidden")))
@interface PUDefaultLayoutToLayoutTileTransitionCoordinator
{
    _Bool __isZoomingIn;	// 16 = 0x10
    _Bool __needsUpdateZoomingIn;	// 17 = 0x11
    PUTilingLayout *_fromLayout;	// 24 = 0x18
    PUTilingLayout *_toLayout;	// 32 = 0x20
    PUAssetReference *_anchorAssetReference;	// 40 = 0x28
    PUTilingLayoutTransitionContext *_context;	// 48 = 0x30
    id <PUTilingCoordinateSystem> _fixedCoordinateSystem;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000013aa8a
@property(nonatomic, setter=_setNeedsUpdateZoomingIn:) _Bool _needsUpdateZoomingIn; // @synthesize _needsUpdateZoomingIn=__needsUpdateZoomingIn;
@property(nonatomic, setter=_setZoomingIn:) _Bool _isZoomingIn; // @synthesize _isZoomingIn=__isZoomingIn;
@property(retain, nonatomic) id <PUTilingCoordinateSystem> fixedCoordinateSystem; // @synthesize fixedCoordinateSystem=_fixedCoordinateSystem;
@property(retain, nonatomic) PUTilingLayoutTransitionContext *context; // @synthesize context=_context;
@property(retain, nonatomic) PUAssetReference *anchorAssetReference; // @synthesize anchorAssetReference=_anchorAssetReference;
@property(retain, nonatomic) PUTilingLayout *toLayout; // @synthesize toLayout=_toLayout;
@property(retain, nonatomic) PUTilingLayout *fromLayout; // @synthesize fromLayout=_fromLayout;
- (long long)_zoomLevelForLayout:(id)arg1;	// IMP=0x000000000013a998
- (void)_updateIsZoomingInIfNeeded;	// IMP=0x000000000013a884
- (void)_invalidateIsZoomingIn;	// IMP=0x000000000013a86d
- (id)description;	// IMP=0x000000000013a659
- (id)_centerTileLayoutInfoWithDefaultDisappearance:(id)arg1 layoutWhereCenterTileExists:(id)arg2 layoutWhereCenterTileDisappeared:(id)arg3;	// IMP=0x000000000013a1c9
- (_Bool)_isCenterTileLayoutInfo:(id)arg1;	// IMP=0x000000000013a12f
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;	// IMP=0x0000000000139c7b
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;	// IMP=0x0000000000139746
- (_Bool)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2;	// IMP=0x0000000000139579
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;	// IMP=0x000000000013944f

@end
