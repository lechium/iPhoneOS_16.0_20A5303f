//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, PUTilingView;

__attribute__((visibility("hidden")))
@interface PUDefaultFrameChangeTileTransitionCoordinator
{
    _Bool _shouldCrossFadeTiles;	// 16 = 0x10
    PUTilingView *_tilingView;	// 24 = 0x18
    NSSet *__invisibleTileControllers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000013ba56
@property(copy, nonatomic, setter=_setInvisibleTileControllers:) NSSet *_invisibleTileControllers; // @synthesize _invisibleTileControllers=__invisibleTileControllers;
@property(nonatomic) __weak PUTilingView *tilingView; // @synthesize tilingView=_tilingView;
@property(nonatomic) _Bool shouldCrossFadeTiles; // @synthesize shouldCrossFadeTiles=_shouldCrossFadeTiles;
- (_Bool)_isLayoutInfoVisible:(id)arg1;	// IMP=0x000000000013b870
- (void)prepare;	// IMP=0x000000000013b793
- (id)_layoutInfoForDisappearedInvisibleTile:(id)arg1;	// IMP=0x000000000013b407
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;	// IMP=0x000000000013b33c
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;	// IMP=0x000000000013b2a9
- (_Bool)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2;	// IMP=0x000000000013b220

@end
