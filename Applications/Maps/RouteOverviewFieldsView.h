//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MUPassthroughView.h>

@class GCDTimer, NSArray, RoutePlanningRefinementBarView, RoutePlanningWaypointListView;
@protocol RouteOverviewFieldsViewDelegate;

@interface RouteOverviewFieldsView : MUPassthroughView
{
    RoutePlanningRefinementBarView *_refinementBarView;	// 8 = 0x8
    GCDTimer *_refinementsUpdateTimer;	// 16 = 0x10
    GCDTimer *_waypointsListUpdateTimer;	// 24 = 0x18
    RoutePlanningWaypointListView *_waypointListView;	// 32 = 0x20
    id <RouteOverviewFieldsViewDelegate> _delegate;	// 40 = 0x28
    NSArray *_overrideWaypoints;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000008aff75
@property(copy, nonatomic) NSArray *overrideWaypoints; // @synthesize overrideWaypoints=_overrideWaypoints;
@property(readonly, nonatomic) __weak id <RouteOverviewFieldsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) RoutePlanningWaypointListView *waypointListView; // @synthesize waypointListView=_waypointListView;
- (void)_pressedTiming;	// IMP=0x00100000008afedd
- (void)reset;	// IMP=0x00100000008afe79
- (void)collapseWaypointsIfNeeded;	// IMP=0x00100000008afe5c
- (void)expandWaypointsIfNeeded;	// IMP=0x00100000008afe3f
@property(readonly, nonatomic) _Bool hasExpandedWaypoints;
- (void)setNeedsUpdateRefinements;	// IMP=0x00100000008afce9
- (void)updateRefinements;	// IMP=0x00100000008afc3e
- (void)setNeedsUpdateWaypointsList;	// IMP=0x00100000008afb05
- (void)updateWaypointsList;	// IMP=0x00100000008af98f
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000008af2f4

@end

