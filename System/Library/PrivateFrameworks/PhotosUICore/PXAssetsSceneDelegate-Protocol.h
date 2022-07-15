//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXAssetsDataSource, PXAssetsScene, PXAssetsTilingLayout, PXTilingChange;
@protocol PXTileIdentifierConverter, PXTileTransitionAnimationCoordinator;

@protocol PXAssetsSceneDelegate <NSObject>
- (PXAssetsTilingLayout *)assetsScene:(PXAssetsScene *)arg1 layoutForDataSource:(PXAssetsDataSource *)arg2;

@optional
- (id <PXTileTransitionAnimationCoordinator>)assetsScene:(PXAssetsScene *)arg1 transitionAnimationCoordinatorForChange:(PXTilingChange *)arg2;
- (id <PXTileIdentifierConverter>)assetsScene:(PXAssetsScene *)arg1 tileIdentifierConverterForChange:(PXTilingChange *)arg2;
- (void)assetsScene:(PXAssetsScene *)arg1 didTransitionToDataSource:(PXAssetsDataSource *)arg2;
- (void)assetsScene:(PXAssetsScene *)arg1 willTransitionToDataSource:(PXAssetsDataSource *)arg2;
@end
