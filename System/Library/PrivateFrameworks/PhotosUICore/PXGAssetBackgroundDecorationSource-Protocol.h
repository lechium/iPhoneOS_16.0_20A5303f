//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class PXGLayout;

@protocol PXGAssetBackgroundDecorationSource <PXGLayoutContentSource>
- (_Bool)wantsBackgroundForZeroInset;
- (CDStruct_c2259bfa)assetBackgroundCornerRadiusForSpriteIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (unsigned long long)assetBackgroundStyleForSpriteIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
@end
