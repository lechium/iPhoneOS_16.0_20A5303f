//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/TabThumbnailCollectionViewDelegate-Protocol.h>

@class NSArray, TabOverview, TabOverviewItem;

@protocol TabOverviewDelegate <TabThumbnailCollectionViewDelegate>
- (_Bool)tabOverviewShouldReserveSpaceForSidebarButton:(TabOverview *)arg1;
- (void)tabOverview:(TabOverview *)arg1 closeItems:(NSArray *)arg2;
- (void)tabOverview:(TabOverview *)arg1 willInteractivelyCloseItem:(TabOverviewItem *)arg2;
- (void)tabOverviewWillUpdateInteractivePresentation:(TabOverview *)arg1;
- (void)tabOverviewDidChangeAllowsInteractivePresentation:(TabOverview *)arg1;
- (NSArray *)itemsToKeepVisibleForTabOverview:(TabOverview *)arg1;
- (TabOverviewItem *)currentItemForTabOverview:(TabOverview *)arg1;
@end

