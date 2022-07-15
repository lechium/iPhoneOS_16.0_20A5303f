//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class CalendarModel, CalendarsViewController, MISSING_TYPE, NSAttributedString, NSDate, NSMutableDictionary, NSObject, NSString, NSUserActivity, PaletteView, UIBarButtonItem, UIButton, UILabel, UISegmentedControl, UITraitCollection, UIWindow, _UINavigationControllerPalette;
@protocol ViewSwitcherLayoutHandler;

@interface RootNavigationController : UINavigationController
{
    UIBarButtonItem *_listToggleBarButtonItem;	// 8 = 0x8
    UIBarButtonItem *_dividedMonthToggleBarButtonItem;	// 16 = 0x10
    UIBarButtonItem *_addEventBarButtonItem;	// 24 = 0x18
    UIBarButtonItem *_searchBarButtonItem;	// 32 = 0x20
    UIButton *_currentVisibleModeToggleButton;	// 40 = 0x28
    UISegmentedControl *_viewSwitcherSegmentedControl;	// 48 = 0x30
    _UINavigationControllerPalette *_palette;	// 56 = 0x38
    NSAttributedString *_currentDateLabelString;	// 64 = 0x40
    UILabel *_currentDateLabel;	// 72 = 0x48
    UIBarButtonItem *_leftFixedSpaceBarItem;	// 80 = 0x50
    UIBarButtonItem *_labelBarItem;	// 88 = 0x58
    NSMutableDictionary *_navBarDateStringCache;	// 96 = 0x60
    NSUserActivity *_userActivityForDateInView;	// 104 = 0x68
    NSUserActivity *_userActivityForEvent;	// 112 = 0x70
    NSUserActivity *_tomorrowUA;	// 120 = 0x78
    UIButton *_calendarsButton;	// 128 = 0x80
    CalendarsViewController *_calendarsViewController;	// 136 = 0x88
    _Bool _showingAccountErrors;	// 144 = 0x90
    _Bool _interactedWithCalendarButtonForCurrentError;	// 145 = 0x91
    _Bool _traitCollectionChangeShouldResultInCompactDayView;	// 146 = 0x92
    _Bool _hideNavBarAfterTraitCollectionTransition;	// 147 = 0x93
    _Bool _shouldSetNavBarVisibilityAfterTraitCollectionTransition;	// 148 = 0x94
    _Bool _viewSwitchKeyCommandsTemporarilyLockedOut;	// 149 = 0x95
    _Bool _userActivityNeedsUpdate;	// 150 = 0x96
    _Bool _extendedLaunchOver;	// 151 = 0x97
    _Bool _hasLoadedInitialNotificationCount;	// 152 = 0x98
    int _regularBackgroundedViewType;	// 156 = 0x9c
    int _compactBackgroundedViewType;	// 160 = 0xa0
    _Bool _isTransitioningTraitCollection;	// 164 = 0xa4
    _Bool _showingOverriddenToolbarItems;	// 165 = 0xa5
    CalendarModel *_model;	// 168 = 0xa8
    NSDate *_lastActiveTime;	// 176 = 0xb0
    UISegmentedControl *_viewSwitcher;	// 184 = 0xb8
    UIWindow *_window;	// 192 = 0xc0
    NSObject<ViewSwitcherLayoutHandler> *_viewSwitcherLayoutHandler;	// 200 = 0xc8
    UIBarButtonItem *_todayBarButtonItem;	// 208 = 0xd0
    PaletteView *_paletteView;	// 216 = 0xd8
    UINavigationController *_reportProblemNavigationController;	// 224 = 0xe0
    unsigned long long _numberOfNotifications;	// 232 = 0xe8
    UIBarButtonItem *_inboxBarButtonItem;	// 240 = 0xf0
    UIBarButtonItem *_calendarsBarButtonItem;	// 248 = 0xf8
}

+ (_Bool)_diagnosticsAvailable;	// IMP=0x00200000000be243
+ (id)_inboxTitleForNotificationCount:(unsigned long long)arg1;	// IMP=0x00100000000bd248
+ (void)recursiveAnimationRemove:(id)arg1;	// IMP=0x00100000000b6fcd
+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x00100000000b641c
- (void).cxx_destruct;	// IMP=0x00100000000bff22
@property(retain, nonatomic) UIBarButtonItem *calendarsBarButtonItem; // @synthesize calendarsBarButtonItem=_calendarsBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *inboxBarButtonItem; // @synthesize inboxBarButtonItem=_inboxBarButtonItem;
@property(nonatomic) unsigned long long numberOfNotifications; // @synthesize numberOfNotifications=_numberOfNotifications;
@property(nonatomic) _Bool showingOverriddenToolbarItems; // @synthesize showingOverriddenToolbarItems=_showingOverriddenToolbarItems;
@property(retain, nonatomic) UINavigationController *reportProblemNavigationController; // @synthesize reportProblemNavigationController=_reportProblemNavigationController;
@property(readonly, nonatomic) _Bool isTransitioningTraitCollection; // @synthesize isTransitioningTraitCollection=_isTransitioningTraitCollection;
@property(retain, nonatomic) PaletteView *paletteView; // @synthesize paletteView=_paletteView;
@property(retain, nonatomic) UIBarButtonItem *todayBarButtonItem; // @synthesize todayBarButtonItem=_todayBarButtonItem;
@property(nonatomic) __weak NSObject<ViewSwitcherLayoutHandler> *viewSwitcherLayoutHandler; // @synthesize viewSwitcherLayoutHandler=_viewSwitcherLayoutHandler;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UISegmentedControl *viewSwitcher; // @synthesize viewSwitcher=_viewSwitcher;
@property(retain, nonatomic) NSDate *lastActiveTime; // @synthesize lastActiveTime=_lastActiveTime;
@property(retain, nonatomic) CalendarModel *model; // @synthesize model=_model;
- (id)undoManager;	// IMP=0x00100000000bfd53
- (id)editorForPasteboardManager:(id)arg1;	// IMP=0x00100000000bfd41
- (id)viewControllerToPresentAlertFromForPasteboardManager:(id)arg1;	// IMP=0x00100000000bfd38
- (void)pasteboardManager:(id)arg1 beginEditingEvent:(id)arg2;	// IMP=0x00100000000bfd15
- (_Bool)canBecomeFirstResponder;	// IMP=0x00100000000bfd0d
- (void)copy:(id)arg1;	// IMP=0x00100000000bfc4e
- (void)cut:(id)arg1;	// IMP=0x00100000000bfb8f
- (void)paste:(id)arg1;	// IMP=0x00100000000bfb36
- (void)handleViewAvailabilityCommand;	// IMP=0x00100000000bf80f
- (void)handleDismissSplashScreenKeyCommand;	// IMP=0x00100000000bf7a0
- (void)handleCloseKeyCommand;	// IMP=0x00100000000bf61f
- (void)handleSearchKeyCommand;	// IMP=0x00100000000bf52c
- (void)handleNewEventKeyCommand;	// IMP=0x00100000000bf40f
- (void)handleSelectPreviousEventCommand;	// IMP=0x00100000000bf3fd
- (void)handleSelectNextEventCommand;	// IMP=0x00100000000bf3eb
- (void)handleGoToPreviousDateComponentUnitCommand;	// IMP=0x00100000000bf3d4
- (void)handleGoToNextDateComponentUnitCommand;	// IMP=0x00100000000bf3bd
- (void)handleRefreshKeyCommand;	// IMP=0x00100000000bf312
- (void)handleYearKeyCommand;	// IMP=0x00100000000bf2fe
- (void)handleMonthKeyCommand;	// IMP=0x00100000000bf2e7
- (void)handleWeekKeyCommand;	// IMP=0x00100000000bf2d0
- (void)handleDayKeyCommand;	// IMP=0x00100000000bf2b9
- (void)_switchToView:(int)arg1;	// IMP=0x00100000000bf11d
- (void)handleTodayKeyCommand;	// IMP=0x00100000000bf104
- (_Bool)_isAddEventPopoverDisplayed;	// IMP=0x00100000000bf0b9
- (_Bool)_isTextEditingInProgress;	// IMP=0x00100000000bf06e
- (_Bool)_canChangeSelectedDate;	// IMP=0x00100000000befe1
- (_Bool)_canChangeSelectedEvent;	// IMP=0x00100000000bef54
- (_Bool)_willKeyCommandChangeSelectedDate:(SEL)arg1;	// IMP=0x00100000000bef38
- (_Bool)_willKeyCommandChangeSelectedEvent:(SEL)arg1;	// IMP=0x00100000000bef1c
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000000bebc3
- (_Bool)shouldHandleCanPerformActionForSelector:(SEL)arg1;	// IMP=0x00100000000beb16
- (id)resetToWeekView;	// IMP=0x00100000000bea3d
- (id)_now;	// IMP=0x00100000000be979
- (id)resetToDayView;	// IMP=0x00100000000be8a0
- (id)resetToMonthView;	// IMP=0x00100000000be7db
- (id)resetToYearView;	// IMP=0x00100000000be57a
- (void)reportProblemViewControllerDidFinish:(id)arg1;	// IMP=0x00100000000be568
- (void)_cancelPressedWhileInReportProblemView;	// IMP=0x00100000000be556
- (void)_dismissReportProblemController;	// IMP=0x00100000000be51f
- (void)_showAddSubscribedCalendarWithURL:(id)arg1;	// IMP=0x00100000000be3e9
- (void)_showDebugReportProblemViewController;	// IMP=0x00100000000be28f
- (void)handleURL:(id)arg1 context:(id)arg2;	// IMP=0x00100000000bd387
- (void)_notificationCountChanged:(id)arg1;	// IMP=0x00100000000bd001
- (void)_updateViewSwitcherFont;	// IMP=0x00100000000bcb22
- (void)_setSegmentWidthsForViewSwitcher:(id)arg1;	// IMP=0x00100000000bca99
- (unsigned long long)_viewSwitcherNumSegments;	// IMP=0x00100000000bca7f
- (double)_viewSwitcherSegmentWidth;	// IMP=0x00100000000bc840
- (id)_switcherFontOfSize:(double)arg1;	// IMP=0x00100000000bc827
- (id)_viewSwitcherSegmentedControl;	// IMP=0x00100000000bc6d0
- (id)_viewSwitcherLabelStrings;	// IMP=0x00100000000bc491
- (_Bool)_shouldShowListViewInModeSwitcher;	// IMP=0x00100000000bc3d8
- (void)_configureViewSwitcherShowingViewController:(id)arg1;	// IMP=0x00100000000bc370
- (void)_viewSwitcherSelectedValueChanged:(id)arg1;	// IMP=0x00100000000bc16c
- (int)_viewTypeRepresentedByViewSwitcherIndex:(unsigned long long)arg1;	// IMP=0x00100000000bc151
- (unsigned long long)_viewSwitcherIndexRepresentingViewType:(int)arg1;	// IMP=0x00100000000bc133
- (id)_navBarStringYearFontForInterfaceOrientation:(long long)arg1 traitCollection:(id)arg2 useSmallerSize:(_Bool)arg3 bold:(_Bool)arg4;	// IMP=0x00100000000bc048
- (double)_dateLabelMaxWidth;	// IMP=0x00100000000bbe2e
- (void)_setCurrentDateLabelString:(id)arg1;	// IMP=0x00100000000bbcac
- (void)_updateLeftFixedSpaceBarButtonItemWidthWithViewController:(id)arg1 targetWindowSize:(struct CGSize)arg2;	// IMP=0x00100000000bbba6
- (void)_updateDateLabelFrame;	// IMP=0x00100000000bbb1a
- (id)_navBarDateStringFromDate:(id)arg1 includingMonth:(_Bool)arg2 format:(long long)arg3;	// IMP=0x00100000000bb529
- (MISSING_TYPE *)setNavBarStringFromDate:includeMonth: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000bb1e8
- (void)_invalidateNavBarDateStringCache;	// IMP=0x00100000000bb1c7
- (void)_timeZoneChanged:(id)arg1;	// IMP=0x00100000000bb1b5
- (void)_localeChanged:(id)arg1;	// IMP=0x00100000000bb1a3
- (id)_higherScopeCompactCalendarViewControllerRelativeTo:(id)arg1;	// IMP=0x00100000000bb003
- (void)_updateBackButtonToDate:(id)arg1 container:(id)arg2;	// IMP=0x00100000000badf0
- (void)updateBackButtonToDate:(id)arg1;	// IMP=0x00100000000bac2a
- (void)weekViewController:(id)arg1 didSelectEvent:(id)arg2;	// IMP=0x00100000000bac07
- (void)weekViewController:(id)arg1 didEditEvent:(id)arg2 creationMethod:(id)arg3;	// IMP=0x00100000000ba9df
- (void)showContactWithIdentifier:(id)arg1;	// IMP=0x00100000000ba61c
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x00100000000ba3de
- (void)currentlyVisibleDateRangeFromStartDate:(id *)arg1 toEndDate:(id *)arg2;	// IMP=0x00100000000ba33a
- (_Bool)isDateVisible:(id)arg1;	// IMP=0x00100000000ba27d
- (void)showDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000ba205
- (id)bestDateForNewEvent;	// IMP=0x00100000000ba165
- (void)willEnterForeground;	// IMP=0x00100000000ba146
- (void)didEnterBackground;	// IMP=0x00100000000ba069
- (_Bool)shouldSaveSelectedEvent;	// IMP=0x00100000000b9fe3
- (void)restoreEventDetailViewControllers:(id)arg1;	// IMP=0x00100000000b9b5a
- (void)_setNavigationStackOfMainViewControllersForTraitsTransitionFromTraitCollection:(id)arg1 toNewTraitCollection:(id)arg2 withPreTransitionViewType:(int)arg3 withPreferredPostTransitionViewType:(int)arg4;	// IMP=0x00100000000b949f
- (Class)classForStackBaseContainerForCurrentTraits;	// IMP=0x00100000000b948e
- (void)_updateNavbarStringForNewStateAfterWindowSizeChange;	// IMP=0x00100000000b9422
- (void)_updateViewSwitcherSegmentWidthsAfterWindowSizeChange;	// IMP=0x00100000000b938a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000b9304
- (void)_adjustNavBarVisibilityAfterTraitCollectionChange;	// IMP=0x00100000000b92c7
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000b889f
- (_Bool)_canSkipViewHierarchyRebuildingWhenTransitioningFromOldCollection:(id)arg1 toNewCollection:(id)arg2;	// IMP=0x00100000000b8802
- (int)_preferredPostTransitionViewFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 currentViewType:(int)arg3;	// IMP=0x00100000000b8635
- (int)_preferredCompactSingleDayView;	// IMP=0x00100000000b8611
- (void)_replayJournal:(id)arg1 withRootVC:(id)arg2 topMainVC:(id)arg3;	// IMP=0x00100000000b7571
- (_Bool)_viewControllerRequiresSystemPresentation:(id)arg1;	// IMP=0x00100000000b7532
- (id)_tornDownJournalOfShownViewControllers;	// IMP=0x00100000000b72e3
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000b728a
- (void)recursiveAnimationRemoveForSmallLayers:(id)arg1;	// IMP=0x00100000000b6fda
- (void)_performCustomRotationAnimationForMainWindowWithTransitionCoordinator:(id)arg1;	// IMP=0x00100000000b68b7
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000b6513
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x00100000000b650d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000b6424
- (_Bool)_containsViewControllerRequiringNavBarVisibilityRestoration;	// IMP=0x00100000000b62e5
- (_Bool)_nodeContainsViewControllersRequiringTeardown:(id)arg1;	// IMP=0x00100000000b6110
- (void)recursiveBuildJournal:(id)arg1 ofViewControllerSubtree:(id)arg2 stopCondition:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b5a1e
- (_Bool)_viewControllerTreeIsEligibleForJournalingConsideration:(id)arg1;	// IMP=0x00100000000b5990
- (_Bool)canManagePresentationStyle;	// IMP=0x00100000000b5988
- (_Bool)wantsManagement;	// IMP=0x00100000000b5980
- (void)viewDidLayoutSubviews;	// IMP=0x00100000000b5923
- (void)viewWillLayoutSubviews;	// IMP=0x00100000000b57d4
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;	// IMP=0x00100000000b5784
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x00100000000b5266
- (void)doCrossfadeAnimationWithCurrentScreenContents;	// IMP=0x00100000000b5037
- (void)doCrossfadeAnimationWithNavigationViewContents;	// IMP=0x00100000000b4fee
- (void)_showNowForMainViewControllerContainer:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000b4f48
- (void)_selectTodayForMainViewControllerContainer:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000b4ed6
- (void)selectTodayWithTrigger:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000b4d35
- (id)_popToViewControllerSatisfying:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b4af9
- (void)_updateInteractivePopAllowed;	// IMP=0x00100000000b4a0d
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000b49df
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000b3f8a
- (void)_selectPreviousEvent;	// IMP=0x00100000000b3f4d
- (void)_selectNextEvent;	// IMP=0x00100000000b3f10
- (void)_showPreviousDateComponentUnitAnimated:(_Bool)arg1;	// IMP=0x00100000000b3ec4
- (void)_showNextDateComponentUnitAnimated:(_Bool)arg1;	// IMP=0x00100000000b3e78
- (id)pushCalendarViewControllerWithViewType:(int)arg1 andDate:(id)arg2;	// IMP=0x00100000000b38d2
- (id)_ensureStackBaseCalendarViewControllerContainerIsPresent;	// IMP=0x00100000000b3549
- (Class)_classRepresentingViewType:(int)arg1;	// IMP=0x00100000000b3512
- (void)_restoreLastUsedCalendarViewType;	// IMP=0x00100000000b3363
- (_Bool)_isThisTheOnlyConnectedScene;	// IMP=0x00100000000b30da
- (int)currentViewType;	// IMP=0x00100000000b2fa6
- (id)topMainViewControllerContainer;	// IMP=0x00100000000b2d9d
- (void)setAvatarViewVisible:(_Bool)arg1;	// IMP=0x00100000000b2d80
- (void)_updatePaletteStateWithViewController:(id)arg1;	// IMP=0x00100000000b2c54
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;	// IMP=0x00100000000b2bb2
- (_Bool)presentationControllerShouldDismiss:(id)arg1;	// IMP=0x00100000000b2b09
- (void)searchResultsViewController:(id)arg1 didSelectEvent:(id)arg2;	// IMP=0x00100000000b2a89
- (id)pasteboardManagerForEventEditViewController:(id)arg1;	// IMP=0x00100000000b2a39
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x00100000000b26f1
- (_Bool)eventViewControllerShouldHideInlineEditButton;	// IMP=0x00100000000b2669
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x00100000000b25c4
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x00100000000b253b
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x00100000000b2530
- (id)showSearchAnimated:(_Bool)arg1 becomeFirstResponder:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b1c9d
- (void)continueSearchWithTerm:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000b1903
- (void)_presentAdaptiveModalViewController:(id)arg1 withPresentationStyleOverride:(long long)arg2 relativeToBarButtonItem:(id)arg3 withSourceView:(id)arg4 sourceRect:(struct CGRect)arg5 permittedArrowDirections:(unsigned long long)arg6 contentSize:(struct CGSize)arg7 passThroughViews:(id)arg8 animated:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x00100000000b1413
- (void)setupPresentationControllerIfStyleIsPopover:(long long)arg1 barButtonItem:(id)arg2 passThroughViews:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 sourceRect:(struct CGRect)arg5 sourceView:(id)arg6 viewController:(id)arg7;	// IMP=0x00100000000b126e
- (void)presentAdaptiveModalPopoverViewController:(id)arg1 relativeToSourceRect:(struct CGRect)arg2 withSourceView:(id)arg3 passThroughViews:(id)arg4 permittedArrowDirections:(unsigned long long)arg5 contentSize:(struct CGSize)arg6 animated:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00100000000b1215
- (void)_presentAdaptiveModalPopoverViewController:(id)arg1 relativeToBarButtonItem:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 contentSize:(struct CGSize)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000b1117
- (void)presentAdaptiveModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b10ad
- (void)presentAdaptiveModalViewController:(id)arg1;	// IMP=0x00100000000b1093
- (void)presentModalViewController:(id)arg1 withTransition:(int)arg2;	// IMP=0x00100000000b1075
- (CDUnknownBlockType)_doneBlock;	// IMP=0x00100000000b0e73
- (void)showNewEvent:(id)arg1;	// IMP=0x00100000000b0df6
- (void)showAddEventAnimated:(_Bool)arg1 fromBarButtonItem:(id)arg2 withTitle:(id)arg3 startDate:(id)arg4 exactStartDate:(id)arg5 endDate:(id)arg6 location:(id)arg7 suggestionKey:(id)arg8 allDay:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x00100000000b088a
- (_Bool)shouldAutorotate;	// IMP=0x00100000000b083d
- (void)showAddEventAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b07a5
- (void)showAddEventAnimated:(_Bool)arg1 fromBarButtonItem:(id)arg2;	// IMP=0x00100000000b0708
- (void)showAddEventAnimated:(_Bool)arg1;	// IMP=0x00100000000b06f4
- (id)delegatesMenu;	// IMP=0x00100000000aff04
- (void)showCalendarsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000afda6
- (void)inboxViewControllerWantsShowEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3;	// IMP=0x00100000000afd26
- (id)showInboxAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000afbdd
- (id)showInboxAnimated:(_Bool)arg1;	// IMP=0x00100000000afac0
- (_Bool)_dismissPresentedViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000af821
- (_Bool)dismissPresentedViewController;	// IMP=0x00100000000af808
- (void)openInboxLinkActionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000af736
- (void)inboxPressed;	// IMP=0x00100000000af5cc
- (void)openCalendarsLinkActionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000af4b0
- (void)calendarsPressed;	// IMP=0x00100000000af319
- (void)todayPressed;	// IMP=0x00100000000af22d
- (void)_dividedListViewTogglePressed;	// IMP=0x00100000000af0fa
- (void)_replaceDayAndListViewContainersAccordingToSavedPreference;	// IMP=0x00100000000aee34
- (void)toggleListView:(_Bool)arg1;	// IMP=0x00100000000aedbf
- (void)listTogglePressed;	// IMP=0x00100000000aecc8
- (void)addEventPressed;	// IMP=0x00100000000aeb94
- (void)openSearchLinkActionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000aeac0
- (void)_searchPressed;	// IMP=0x00100000000ae9f1
- (void)didBecomeActive;	// IMP=0x00100000000ae9df
- (void)_accountsInInitialSyncCountChanged;	// IMP=0x00100000000ae9cd
- (void)_calendarErrorCountChanged:(id)arg1;	// IMP=0x00100000000ae9bb
- (id)calendarsButtonTitle;	// IMP=0x00100000000ae88f
- (_Bool)_updateCalendarButtonError;	// IMP=0x00100000000ae78f
- (_Bool)_updateCalendarButtonSpinner;	// IMP=0x00100000000ae6e4
- (void)_updateCalendarButtonAccessory;	// IMP=0x00100000000ae693
- (_Bool)_isCurrentlyDraggingEvent;	// IMP=0x00100000000ae542
- (id)_compactMonthDividedListSwitchBarButtonItem;	// IMP=0x00100000000ae403
- (id)_listViewSwitchBarButtonItem;	// IMP=0x00100000000ae2f6
- (void)_addButtonsToNavigationBarForViewController:(id)arg1;	// IMP=0x00100000000ae130
- (void)_addButtonsToNavigationBar;	// IMP=0x00100000000ae0e4
@property(readonly, nonatomic) UIBarButtonItem *addEventBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *searchBarButtonItem;
- (void)_updateInboxBarButtonItem;	// IMP=0x00100000000adf15
- (void)_updateFilterLabel;	// IMP=0x00100000000adf03
- (void)_updateFilterLabelAnimate:(_Bool)arg1;	// IMP=0x00100000000ade04
- (void)_updateAddEventButtonEnabledness;	// IMP=0x00100000000adc5c
- (void)addToolbarButtonItemsWithViewController:(id)arg1;	// IMP=0x00100000000ad946
- (void)_initializeCalendarsButton;	// IMP=0x00100000000ad3ef
- (id)_calendarsButtonConfiguration;	// IMP=0x00100000000acf11
- (_Bool)_calendarsButtonHasBackground;	// IMP=0x00100000000aced3
- (void)_forceInboxButtonCreationIfNeeded;	// IMP=0x00100000000acdf7
- (void)_updateCalendarsButtonMenuProvider;	// IMP=0x00100000000accc4
- (void)_updateCalendarsButtonColor;	// IMP=0x00100000000accb2
- (void)_updateCalendarsButtonTitle;	// IMP=0x00100000000acc1c
- (void)_updateCalendarsButtonConfiguration;	// IMP=0x00100000000acb75
- (void)updateCurrentIdentity;	// IMP=0x00100000000acb17
- (id)_contactForCurrentIdentity;	// IMP=0x00100000000ac9e1
- (void)_createLeftFixedSpaceBarItemIfNeeded;	// IMP=0x00100000000ac98c
- (void)updateToolbarItemsWithViewController:(id)arg1;	// IMP=0x00100000000ac7f2
- (void)updateNavigationBarButtonItemsWithViewController:(id)arg1;	// IMP=0x00100000000ac50c
- (_Bool)shouldDonateTomorrowActivity;	// IMP=0x00100000000ac43f
- (void)userActivityWillSave:(id)arg1;	// IMP=0x00100000000ac42d
- (void)_saveUserActivityInfo:(id)arg1;	// IMP=0x00100000000ac427
- (void)_updateUserActivity;	// IMP=0x00100000000ac416
- (void)_updateAfterExtendedLaunch:(id)arg1;	// IMP=0x00100000000ac1b9
- (void)_setUpInitialUserActivityUpdate;	// IMP=0x00100000000ac11a
- (void)_setNeedsUserActivityUpdate;	// IMP=0x00100000000ac094
- (void)_delegatesChanged:(id)arg1;	// IMP=0x00100000000abe17
- (void)_identityChanged:(id)arg1;	// IMP=0x00100000000abdcd
- (void)_filterChanged:(id)arg1;	// IMP=0x00100000000abdbb
- (void)_selectedOccurrencesChanged:(id)arg1;	// IMP=0x00100000000abda9
- (void)_selectedDateChanged:(id)arg1;	// IMP=0x00100000000abd97
- (void)_focusModeConfigurationChanged:(id)arg1;	// IMP=0x00100000000abd80
- (void)_calendarsChanged:(id)arg1;	// IMP=0x00100000000abd6e
- (void)_contentSizeCategoryChanged:(id)arg1;	// IMP=0x00100000000abc58
- (_Bool)extendedLaunchFinished;	// IMP=0x00100000000abc48
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000000abafb
@property(readonly, nonatomic) long long activeWidthSizeClass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000ab771
- (void)viewDidLoad;	// IMP=0x00100000000ab71c
- (void)loadView;	// IMP=0x00100000000ab59d
- (void)dealloc;	// IMP=0x00100000000ab3e0
- (id)initWithModel:(id)arg1 targetWindow:(id)arg2;	// IMP=0x00100000000ab0ba
@property(retain, nonatomic) UITraitCollection *futureTraitCollection; // @dynamic futureTraitCollection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
