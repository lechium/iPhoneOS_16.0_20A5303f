//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOPlaceCollection, GEORPCuratedCollectionContext, NSArray;

@protocol RAPCuratedCollectionContext <NSObject>
@property(readonly, nonatomic) NSArray *placeCollectionMapItems;
@property(readonly, nonatomic) GEORPCuratedCollectionContext *geoContext;
@property(readonly, nonatomic) GEOPlaceCollection *curatedCollection;
@end

