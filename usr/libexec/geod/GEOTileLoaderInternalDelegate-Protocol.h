//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOTileKeyList, GEOTileLoader, NSString;

@protocol GEOTileLoaderInternalDelegate <NSObject>
- (void)tileLoader:(GEOTileLoader *)arg1 submittedTilesToNetwork:(GEOTileKeyList *)arg2 forClient:(NSString *)arg3;
@end

