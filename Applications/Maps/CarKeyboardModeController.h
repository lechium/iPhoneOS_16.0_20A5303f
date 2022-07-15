//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISearchContainerViewController.h>

@class CarMapTrackingController, NGChromeViewController, NSArray, NSString, UINavigationController, UIViewController;
@protocol CarKeyboardResultsProviding;

@interface CarKeyboardModeController : UISearchContainerViewController
{
    UINavigationController *_wrapperNavigationController;	// 8 = 0x8
    NGChromeViewController *_chromeViewController;	// 16 = 0x10
    UIViewController<CarKeyboardResultsProviding> *_resultsProvider;	// 24 = 0x18
    unsigned long long _requestedInteractionModel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000211178
@property(readonly, nonatomic) unsigned long long requestedInteractionModel; // @synthesize requestedInteractionModel=_requestedInteractionModel;
@property(retain, nonatomic) UIViewController<CarKeyboardResultsProviding> *resultsProvider; // @synthesize resultsProvider=_resultsProvider;
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void)pptInvokeSearch:(id)arg1;	// IMP=0x00100000002110a3
- (void)pptEndEditing;	// IMP=0x0010000000211039
- (void)pptHandleTextChange:(id)arg1;	// IMP=0x0010000000210fa9
- (void)_ppt_selectKeyboardSearchButton;	// IMP=0x0010000000210e63
- (void)_ppt_selectKeyboardMode;	// IMP=0x0010000000210e5d
- (void)_ppt_selectFirstCarplayBrowseCategory;	// IMP=0x0010000000210e57
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)didDismissSearchController:(id)arg1;	// IMP=0x0010000000210dec
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0010000000210d7a
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x0010000000210cfc
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x0010000000210c6c
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0010000000210bfa
- (void)configureFocusContainerGuideController:(id)arg1;	// IMP=0x0010000000210be3
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
- (id)fullscreenViewController;	// IMP=0x0010000000210b64
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) long long autohideBehavior;
- (_Bool)showsNavigationBar;	// IMP=0x0010000000210b49
- (_Bool)showsMapView;	// IMP=0x0010000000210b41
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000210a72
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000021098d
- (void)viewDidLoad;	// IMP=0x001000000021077d
- (id)initWithRequestedInteractionModel:(unsigned long long)arg1 resultsProvider:(id)arg2;	// IMP=0x00100000002105d5

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end
