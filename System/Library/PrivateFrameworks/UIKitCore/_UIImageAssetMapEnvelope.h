//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImageAsset;

__attribute__((visibility("hidden")))
@interface _UIImageAssetMapEnvelope : NSObject
{
    UIImageAsset *_imageAsset;	// 8 = 0x8
    NSString *_assetName;	// 16 = 0x10
}

+ (id)wrapAsset:(id)arg1;	// IMP=0x00600000008c7bce
- (void).cxx_destruct;	// IMP=0x00000000008c7d7e
@property(copy, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
@property(nonatomic) __weak UIImageAsset *imageAsset; // @synthesize imageAsset=_imageAsset;
- (id)description;	// IMP=0x00000000008c7c62

@end
