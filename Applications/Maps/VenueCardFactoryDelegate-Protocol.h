//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RoutePlanningOverviewViewController;
@protocol ShareDelegate, VenueCardFactory;

@protocol VenueCardFactoryDelegate
- (RoutePlanningOverviewViewController *)routePlanningOverviewViewControllerForCardFactory:(id <VenueCardFactory>)arg1;
- (id <ShareDelegate>)shareDelegateForCardFactory:(id <VenueCardFactory>)arg1;
@end

