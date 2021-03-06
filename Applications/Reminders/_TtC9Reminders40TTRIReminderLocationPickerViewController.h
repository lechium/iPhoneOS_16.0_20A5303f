//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, MKMapView, NSLayoutConstraint, UIBarButtonItem, UISegmentedControl, UITableView, UIView;

@interface _TtC9Reminders40TTRIReminderLocationPickerViewController : UIViewController
{
    MISSING_TYPE *contentView;	// 8 = 0x8
    MISSING_TYPE *contentViewMinHeightConstraint;	// 16 = 0x10
    MISSING_TYPE *tableView;	// 24 = 0x18
    MISSING_TYPE *bottomControlsContainerView;	// 32 = 0x20
    MISSING_TYPE *mapAndDragRadiusContainerView;	// 40 = 0x28
    MISSING_TYPE *mapView;	// 48 = 0x30
    MISSING_TYPE *alarmProximitySegmentedControl;	// 56 = 0x38
    MISSING_TYPE *doneButton;	// 64 = 0x40
    MISSING_TYPE *viewModel;	// 72 = 0x48
    MISSING_TYPE *searchBar;	// 80 = 0x50
    MISSING_TYPE *cancelButton;	// 88 = 0x58
    MISSING_TYPE *hasDoneInitialLoad;	// 96 = 0x60
    MISSING_TYPE *mapDragRadiusView;	// 104 = 0x68
    MISSING_TYPE *dragViewCircleColor;	// 112 = 0x70
    MISSING_TYPE *dragViewHandleColor;	// 120 = 0x78
    MISSING_TYPE *previousPopoverIgnoresKeyboardNotifications;	// 128 = 0x80
    MISSING_TYPE *keyboardNotificationObservers;	// 136 = 0x88
    MISSING_TYPE *keyboardHideDeferredHandlingTimer;	// 144 = 0x90
    MISSING_TYPE *presenter;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00400000003d29b0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000003d64e0
- (void)stopHoldingCurrentContentViewHeight;	// IMP=0x00100000003d64b0
- (void)alarmProximitySegmentedControlDidChange:(id)arg1;	// IMP=0x00100000003d5e80
- (void)didTapDone:(id)arg1;	// IMP=0x00100000003d5bd0
- (void)didTapCancel:(id)arg1;	// IMP=0x00100000003d5a20
@property(nonatomic) __weak UIBarButtonItem *doneButton; // @synthesize doneButton;
@property(nonatomic) __weak UISegmentedControl *alarmProximitySegmentedControl; // @synthesize alarmProximitySegmentedControl;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView;
@property(nonatomic) __weak UIView *mapAndDragRadiusContainerView; // @synthesize mapAndDragRadiusContainerView;
@property(nonatomic) __weak UIView *bottomControlsContainerView; // @synthesize bottomControlsContainerView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;
@property(nonatomic, retain) NSLayoutConstraint *contentViewMinHeightConstraint; // @synthesize contentViewMinHeightConstraint;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView;
- (void)mapDragRadiusView:(id)arg1 didUpdateRegion:(id)arg2;	// IMP=0x00100000003d5790
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x00100000003d5740
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;	// IMP=0x00100000003d5720
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x00100000003d56a0
- (void)searchBarTextDidEndEditing:(id)arg1;	// IMP=0x00100000003d5610
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x00100000003d55c0
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00100000003d5520
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000003d5460
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00100000003d5250
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000003d5190
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000003d4e80
- (void)viewDidLayoutSubviews;	// IMP=0x00100000003d4e20
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000003d4ab0
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x00100000003d4a20
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000003d49e0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000003d4500
- (void)viewDidLoad;	// IMP=0x00100000003d3130
- (void)dealloc;	// IMP=0x00100000003d2930
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003d28b0

@end

