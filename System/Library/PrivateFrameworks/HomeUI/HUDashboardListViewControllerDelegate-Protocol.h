//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUDashboardContext_legacy, HUDashboardListViewController;

@protocol HUDashboardListViewControllerDelegate <NSObject>
- (void)dashboardListViewControllerDidFinish:(HUDashboardListViewController *)arg1;
- (void)dashboardListViewController:(HUDashboardListViewController *)arg1 wantsToShowDashboardContext:(HUDashboardContext_legacy *)arg2;
@end

