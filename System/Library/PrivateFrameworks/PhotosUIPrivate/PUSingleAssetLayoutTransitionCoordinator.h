//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileTransitionCoordinator.h"

@protocol PUTilingCoordinateSystem;

__attribute__((visibility("hidden")))
@interface PUSingleAssetLayoutTransitionCoordinator : PUTileTransitionCoordinator
{
    id <PUTilingCoordinateSystem> _fixedCoordinateSystem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000458893
@property(retain, nonatomic) id <PUTilingCoordinateSystem> fixedCoordinateSystem; // @synthesize fixedCoordinateSystem=_fixedCoordinateSystem;
- (id)_layoutInfoWithDefaultDisappearance:(id)arg1;	// IMP=0x00000000004587c1
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;	// IMP=0x00000000004587ac
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;	// IMP=0x0000000000458797

@end

