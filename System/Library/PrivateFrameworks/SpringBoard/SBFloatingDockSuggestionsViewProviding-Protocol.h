//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBIconLocationPresenting-Protocol.h>
#import <SpringBoard/SBIconViewQuerying-Protocol.h>

@class SBDockIconListView, SBFloatingDockViewController;

@protocol SBFloatingDockSuggestionsViewProviding <SBIconViewQuerying, SBIconLocationPresenting>
@property(readonly, nonatomic) SBDockIconListView *listView;
@property(nonatomic) __weak SBFloatingDockViewController *floatingDockViewController;
- (void)dockFolderDidEndTransitioning;
- (void)dockFolderWillBeginTransitioning;
- (void)dockViewDidResignVisible;
- (void)dockViewWillResignVisible;
- (void)dockViewDidBecomeVisible;
- (void)dockViewWillBecomeVisible;
@end

