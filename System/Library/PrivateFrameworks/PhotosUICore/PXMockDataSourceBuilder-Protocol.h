//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSDictionary;
@protocol PXDisplayAssetCollection;

@protocol PXMockDataSourceBuilder <NSObject>
- (void)appendMockDisplayAssetsWithCount:(long long)arg1 assetProperties:(NSDictionary *)arg2;
- (void)appendMockDisplayAssetSectionWithCount:(long long)arg1 assetProperties:(NSDictionary *)arg2 assetCollection:(id <PXDisplayAssetCollection>)arg3;
@end

