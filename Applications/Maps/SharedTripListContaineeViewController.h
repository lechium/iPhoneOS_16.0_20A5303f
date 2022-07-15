//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, GEOSharedNavState, NSString, SharedTripsTableDataSource, UITableView;
@protocol SharedTripsActionCoordination;

@interface SharedTripListContaineeViewController
{
    SharedTripsTableDataSource *_sharedTripsDataSource;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    ContainerHeaderView *_headerView;	// 24 = 0x18
    id _subscriptionToken;	// 32 = 0x20
    GEOSharedNavState *_selectedTrip;	// 40 = 0x28
    id <SharedTripsActionCoordination> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000025e7c3
@property(nonatomic) __weak id <SharedTripsActionCoordination> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000025e616
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x001000000025e539
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x001000000025e417
- (void)applyAlphaToContent:(double)arg1;	// IMP=0x001000000025e3c4
- (id)contentView;	// IMP=0x001000000025e3af
- (id)headerView;	// IMP=0x001000000025e39a
@property(nonatomic) __weak GEOSharedNavState *selectedTrip; // @synthesize selectedTrip=_selectedTrip;
- (int)currentUITargetForAnalytics;	// IMP=0x001000000025e1c5
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x001000000025e094
- (void)headerViewTapped:(id)arg1;	// IMP=0x001000000025dff0
- (void)viewDidLoad;	// IMP=0x001000000025d459
- (void)dealloc;	// IMP=0x001000000025d3a7
- (id)init;	// IMP=0x001000000025d2ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
