//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface GEOMapAssetMetadata : NSObject
{
    NSArray *_tiles;	// 8 = 0x8
    _Bool _enableASTCTextures;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001314e2f
- (id)keysForMetroAvailability:(_Bool)arg1;	// IMP=0x0000000001314b60
- (id)initWithVectorTiles:(id)arg1 enableASTCTextures:(_Bool)arg2;	// IMP=0x0000000001314ac3

@end

