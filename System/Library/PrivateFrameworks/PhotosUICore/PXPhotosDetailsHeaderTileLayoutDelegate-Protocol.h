//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString, PXPhotosDetailsHeaderTileLayout;

@protocol PXPhotosDetailsHeaderTileLayoutDelegate <NSObject>

@optional
- (NSString *)photosDetailsHeaderTileLayoutFontName:(PXPhotosDetailsHeaderTileLayout *)arg1;
- (struct CGRect)photosDetailsHeaderTileLayout:(PXPhotosDetailsHeaderTileLayout *)arg1 contentsRectForAspectRatio:(double)arg2;
@end
