//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MSPIdentifiableFavorite-Protocol.h"
#import "MSPImmutableObject-Protocol.h"

@protocol MSPFavorite <MSPImmutableObject, MSPIdentifiableFavorite>
- (void)ifPlace:(void (^)(id <MSPFavoritePlace>))arg1 ifRoute:(void (^)(id <MSPFavoriteRoute>))arg2 ifRegion:(void (^)(id <MSPFavoriteRegion>))arg3 ifTransitLine:(void (^)(id <MSPFavoriteTransitLine>))arg4;
@end

