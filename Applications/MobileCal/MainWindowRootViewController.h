//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CalendarsViewControllerPreservedState, InboxViewController, MISSING_TYPE, MainWindowContentContainerViewController, MainWindowControlHeaderView, MasterNavigationPaletteView, NSObject, NSString, RootNavigationController, UIButton, UINavigationController, UISearchBar, UISplitViewController, UITraitCollection, _UINavigationControllerPalette;
@protocol OS_dispatch_queue;

@interface MainWindowRootViewController : UIViewController
{
    RootNavigationController *_rootNavigationController;	// 8 = 0x8
    UISplitViewController *_splitViewController;	// 16 = 0x10
    UINavigationController *_primaryVC;	// 24 = 0x18
    MainWindowContentContainerViewController *_secondaryContainerVC;	// 32 = 0x20
    MainWindowControlHeaderView *_headerView;	// 40 = 0x28
    MasterNavigationPaletteView *_paletteView;	// 48 = 0x30
    _UINavigationControllerPalette *_palette;	// 56 = 0x38
    UISearchBar *_searchBar;	// 64 = 0x40
    UIButton *_searchButton;	// 72 = 0x48
    _Bool _isSearching;	// 80 = 0x50
    _Bool _isEndingSearch;	// 81 = 0x51
    _Bool _didAppear;	// 82 = 0x52
    _Bool _needsSidebarSetup;	// 83 = 0x53
    unsigned long long _pendingState;	// 88 = 0x58
    _Bool _isRotating;	// 96 = 0x60
    _Bool _animatingSidebar;	// 97 = 0x61
    InboxViewController *_presentedInboxVC;	// 104 = 0x68
    CalendarsViewControllerPreservedState *_calendarsPreservedState;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_buttonQ;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_notificationQ;	// 128 = 0x80
    unsigned long long _currentSidebarState;	// 136 = 0x88
}

+ (_Bool)shouldHideInlineFocusBannerForSidebarState:(unsigned long long)arg1;	// IMP=0x0020000000103892
+ (double)minimumStandardWindowWidth;	// IMP=0x00100000000fdccd
+ (double)sidebarWidth;	// IMP=0x00100000000fdc41
- (void).cxx_destruct;	// IMP=0x002000000010443c
@property(nonatomic) unsigned long long currentSidebarState; // @synthesize currentSidebarState=_currentSidebarState;
- (id)undoManager;	// IMP=0x001000000010440e
- (void)cut:(id)arg1;	// IMP=0x00100000001043f1
- (void)copy:(id)arg1;	// IMP=0x00100000001043d4
- (void)paste:(id)arg1;	// IMP=0x00100000001043b7
- (void)handleViewAvailabilityCommand;	// IMP=0x001000000010439a
- (void)handleDismissSplashScreenKeyCommand;	// IMP=0x001000000010437d
- (void)handleCloseKeyCommand;	// IMP=0x0010000000104360
- (void)handleYearKeyCommand;	// IMP=0x0010000000104343
- (void)handleMonthKeyCommand;	// IMP=0x0010000000104326
- (void)handleWeekKeyCommand;	// IMP=0x0010000000104309
- (void)handleDayKeyCommand;	// IMP=0x00100000001042ec
- (void)handleSelectPreviousEventCommand;	// IMP=0x00100000001042cf
- (void)handleSelectNextEventCommand;	// IMP=0x00100000001042b2
- (void)handleGoToPreviousDateComponentUnitCommand;	// IMP=0x0010000000104295
- (void)handleGoToNextDateComponentUnitCommand;	// IMP=0x0010000000104278
- (void)handleRefreshKeyCommand;	// IMP=0x001000000010425b
- (void)handleTodayKeyCommand;	// IMP=0x001000000010423e
- (void)routeSearchKeyCommand;	// IMP=0x001000000010413d
- (void)routeNewEventKeyCommand;	// IMP=0x001000000010406b
- (_Bool)canBecomeFirstResponder;	// IMP=0x0010000000104063
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000103fbb
- (void)_updateAfterExtendedLaunch:(id)arg1;	// IMP=0x0010000000103e5b
- (void)_calendarErrorCountChanged:(id)arg1;	// IMP=0x0010000000103e49
- (void)_calendarsChanged:(id)arg1;	// IMP=0x0010000000103e37
- (void)_delegatesChanged:(id)arg1;	// IMP=0x0010000000103d6e
- (void)_identityChanged:(id)arg1;	// IMP=0x0010000000103cb9
- (void)_notificationCountChanged:(id)arg1;	// IMP=0x0010000000103ca7
- (MISSING_TYPE *)updateErrorState;	// IMP=0x0010000000103bd0
- (void)updateInboxCount;	// IMP=0x0010000000103a7f
- (void)updateNewEventButtonEnabledness;	// IMP=0x00100000001038a2
@property(nonatomic) unsigned long long focusFilterMode;
- (void)palette:(id)arg1 identitySwitcherTapped:(id)arg2;	// IMP=0x00100000001037d7
- (_Bool)paletteShouldShowAvatarView;	// IMP=0x0010000000103766
- (void)paletteAvatarViewTapped:(id)arg1;	// IMP=0x0010000000103717
- (void)paletteTodayButtonTapped:(id)arg1;	// IMP=0x0010000000103680
- (void)showIdentitySwitcherFromSourceView:(id)arg1;	// IMP=0x0010000000103528
- (id)inboxSwitcherViewControllerRightBarButtonItem:(id)arg1;	// IMP=0x0010000000103520
- (void)inboxSwitcherViewController:(id)arg1 viewProposedTimeForAttendee:(id)arg2 onEvent:(id)arg3;	// IMP=0x0010000000103500
- (void)inboxSwitcherViewController:(id)arg1 viewCommentsForEvent:(id)arg2;	// IMP=0x00100000001034e0
- (void)inboxSwitcherViewController:(id)arg1 inspectEvent:(id)arg2;	// IMP=0x00100000001034c0
- (void)inboxSwitcherViewController:(id)arg1 shouldCloseAnimated:(_Bool)arg2;	// IMP=0x00100000001034ba
- (void)inboxWillDismiss;	// IMP=0x0010000000103434
- (_Bool)listViewControllerShouldShowEvent:(id)arg1 showMode:(unsigned long long)arg2;	// IMP=0x0010000000103417
- (_Bool)listViewControllerContainerHandlesShowEvent;	// IMP=0x001000000010340f
- (_Bool)wantsScrollingMessagesOnEveryFrameFromListViewController:(id)arg1;	// IMP=0x0010000000103407
- (void)listViewController:(id)arg1 didScrollToDate:(id)arg2;	// IMP=0x0010000000103401
- (void)showEventAndCloseSidebarIfNeeded:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3;	// IMP=0x001000000010328f
- (void)searchEnded;	// IMP=0x00100000001031e9
- (void)searchEnding;	// IMP=0x0010000000102ee7
- (void)searchBegan;	// IMP=0x0010000000102eae
- (void)searchTapped;	// IMP=0x0010000000102e4a
- (void)showSearchSideBar;	// IMP=0x0010000000102e38
- (void)todayToolbarItemPressed;	// IMP=0x0010000000102dc3
- (void)newEventButtonTapped:(id)arg1;	// IMP=0x0010000000102d5b
- (void)listButtonTapped;	// IMP=0x0010000000102d44
- (void)showListSideBarWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000102bf1
- (void)inboxButtonTapped;	// IMP=0x0010000000102bda
- (void)showInboxSideBarWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000102a87
- (void)calendarButtonTapped;	// IMP=0x0010000000102a70
- (void)showCalendarsSideBarWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000010291d
- (void)setCurrentSidebarState:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000102018
- (void)hideSearchSideBar;	// IMP=0x0010000000101fe7
- (void)hideMainSideBar;	// IMP=0x0010000000101fd1
- (id)viewControllerForSidebarState:(unsigned long long)arg1;	// IMP=0x0010000000101a7c
- (_Bool)canShowAvatarViewWithTraitCollection:(id)arg1;	// IMP=0x00100000001019ee
- (void)updatePrimaryViewControllerToolbar;	// IMP=0x0010000000101912
- (void)searchButtonTapped:(id)arg1;	// IMP=0x001000000010169b
- (void)layoutSearchControl;	// IMP=0x00100000001010e7
- (double)searchFieldWidth;	// IMP=0x001000000010106a
- (void)setupSearchControlForTraitCollection:(id)arg1;	// IMP=0x0010000000100dcf
- (void)createSearchBarIfNeeded;	// IMP=0x0010000000100c74
- (_Bool)showsSearchBarForTraitCollection:(id)arg1;	// IMP=0x0010000000100be0
- (void)handleURL:(id)arg1 context:(id)arg2;	// IMP=0x00100000001008e7
- (void)showAddEventWithTitle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 location:(id)arg4 suggestionsKey:(id)arg5 allDay:(_Bool)arg6;	// IMP=0x001000000010079f
- (void)showAddEvent;	// IMP=0x0010000000100746
- (void)continueSearchWithTerm:(id)arg1;	// IMP=0x0010000000100694
- (struct CGSize)mainContentSize;	// IMP=0x00100000001005fc
@property(retain, nonatomic) UITraitCollection *futureTraitCollection;
- (void)splitViewController:(id)arg1 willHideColumn:(long long)arg2;	// IMP=0x00100000001002fa
- (void)splitViewController:(id)arg1 willExpandToProposedDisplayMode:(long long *)arg2;	// IMP=0x001000000010028c
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000ffcd7
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000feff9
- (void)viewWillLayoutSubviews;	// IMP=0x00100000000fec4b
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000000feaf8
- (_Bool)_viewControllerExistsInPresentationChainThatShouldNotRotate;	// IMP=0x00100000000fea07
- (_Bool)shouldAutorotate;	// IMP=0x00100000000fe95e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000fe821
- (void)willEnterForeground;	// IMP=0x00100000000fe7be
- (void)viewDidLoad;	// IMP=0x00100000000fe00c
- (void)dealloc;	// IMP=0x00100000000fdf97
- (id)initWithRootNavigationController:(id)arg1;	// IMP=0x00100000000fdcdb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransitioningTraitCollection;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end
