//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOLogContextDelegate-Protocol.h"
#import "NSObject-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class GEOComposedRouteStep, UIView;

@protocol RouteStepListDelegate <NSObject, GEOLogContextDelegate, UIScrollViewDelegate>
- (void)directionsStepsList:(id)arg1 didTapRowForRouteStep:(GEOComposedRouteStep *)arg2;

@optional
- (void)directionsStepsListDidTapRAPButton:(id)arg1;
- (void)directionsStepsListDidTapShareButton:(id)arg1;
- (void)directionsStepsList:(id)arg1 didTapElevationInfoButton:(UIView *)arg2;
@end
