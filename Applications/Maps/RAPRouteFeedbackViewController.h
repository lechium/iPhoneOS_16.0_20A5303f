//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSNumber, NSString, RAPDirectionsRecording, RAPDirectionsStepsTableViewController, RAPReport, RAPRouteFeedbackDataSource, RAPRouteStepDetailViewController, Route, UICollectionView, UILabel, UILayoutGuide, UIScrollView, UITableView, UIView;
@protocol RAPRouteFeedbackViewControllerDelegate;

@interface RAPRouteFeedbackViewController : UIViewController
{
    id <RAPRouteFeedbackViewControllerDelegate> _delegate;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    UILayoutGuide *_containerLayoutGuide;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UIView *_tableViewContainer;	// 48 = 0x30
    RAPDirectionsStepsTableViewController *_directionsListViewController;	// 56 = 0x38
    NSLayoutConstraint *_tableHeightConstraint;	// 64 = 0x40
    RAPReport *_report;	// 72 = 0x48
    RAPDirectionsRecording *_recording;	// 80 = 0x50
    RAPRouteFeedbackDataSource *_dataSource;	// 88 = 0x58
    RAPRouteStepDetailViewController *_stepDetailViewController;	// 96 = 0x60
    NSNumber *_computedWidth;	// 104 = 0x68
    _Bool _showsHeaderView;	// 112 = 0x70
    _Bool _allowsScrolling;	// 113 = 0x71
    UICollectionView *_collectionView;	// 120 = 0x78
    Route *_route;	// 128 = 0x80
    UITableView *_tableView;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00200000000e3d3a
@property(nonatomic) _Bool allowsScrolling; // @synthesize allowsScrolling=_allowsScrolling;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) _Bool showsHeaderView; // @synthesize showsHeaderView=_showsHeaderView;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x00100000000e3bda
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x00100000000e3b5e
- (void)routeStepDetailViewControllerDidSubmitReport:(id)arg1;	// IMP=0x00100000000e3ac2
- (_Bool)_canTableViewSelectIndexPath:(id)arg1;	// IMP=0x00100000000e3a2c
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000000e39d6
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000000e35c8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000000e33f2
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000000e32ee
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00100000000e3185
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000000e3064
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000000e3059
- (void)_dismiss;	// IMP=0x00100000000e2f76
- (void)_cancelPressed:(id)arg1;	// IMP=0x00100000000e2f64
- (void)dataSourceDidUpdate:(id)arg1;	// IMP=0x00100000000e2e8d
- (void)_updateTableHeightConstraint;	// IMP=0x00100000000e2d8d
- (double)_cellContentWidth;	// IMP=0x00100000000e2c38
@property(readonly, nonatomic) double desiredHeight;
- (void)_setupConstraints;	// IMP=0x00100000000e1c24
- (void)_setupViews;	// IMP=0x00100000000e163a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000e1526
- (void)_reloadTableViewIfNeeded;	// IMP=0x00100000000e1382
- (void)viewDidLayoutSubviews;	// IMP=0x00100000000e132c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000e1218
- (void)viewDidLoad;	// IMP=0x00100000000e1130
- (id);	// IMP=0x00100000000e0eb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

