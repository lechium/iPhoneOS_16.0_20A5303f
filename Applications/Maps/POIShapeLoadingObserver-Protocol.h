//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol POIShape, POIShapeLoading;

@protocol POIShapeLoadingObserver <NSObject>
- (void)poiShapeLoader:(id <POIShapeLoading>)arg1 didLoadStartPOIShape:(id <POIShape>)arg2 endPOIShapes:(NSArray *)arg3;
@end
