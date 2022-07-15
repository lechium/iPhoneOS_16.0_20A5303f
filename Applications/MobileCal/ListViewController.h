//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKCalendarDate, EKEvent, EKUIRecurrenceAlertController, ListTableView, MISSING_TYPE, NSDate, NSIndexPath, NSString, NSUserActivity, UITableView, UITapGestureRecognizer, UITraitCollection;
@protocol ListViewControllerDelegate;

@interface ListViewController
{
    NSDate *_currentYearStart;	// 16 = 0x10
    NSDate *_currentYearEnd;	// 24 = 0x18
    NSIndexPath *_swipedRow;	// 32 = 0x20
    EKUIRecurrenceAlertController *_recurrenceAlertController;	// 40 = 0x28
    NSUserActivity *_userActivity;	// 48 = 0x30
    MISSING_TYPE *_needsRefresh;	// 56 = 0x38
    _Bool _isVisible;	// 57 = 0x39
    EKCalendarDate *_dateToShowWhenVisible;	// 64 = 0x40
    _Bool _editorDismissedFromDelete;	// 72 = 0x48
    _Bool _needsTableReload;	// 73 = 0x49
    NSDate *_firstVisibleDate;	// 80 = 0x50
    UITapGestureRecognizer *_multiSelectGestureRecognizer;	// 88 = 0x58
    _Bool _allowExtendedHeightCells;	// 96 = 0x60
    _Bool _preventScrollingForNextViewAppear;	// 97 = 0x61
    _Bool _overrideExtendedEdges;	// 98 = 0x62
    _Bool _showFilteredData;	// 99 = 0x63
    id <ListViewControllerDelegate> _delegate;	// 104 = 0x68
    unsigned long long _destination;	// 112 = 0x70
    EKEvent *_currentSelectedEvent;	// 120 = 0x78
    ListTableView *_tableView;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0020000000010b71
@property(nonatomic) _Bool showFilteredData; // @synthesize showFilteredData=_showFilteredData;
@property(retain, nonatomic) ListTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) EKEvent *currentSelectedEvent; // @synthesize currentSelectedEvent=_currentSelectedEvent;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(retain, nonatomic) id <ListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool overrideExtendedEdges; // @synthesize overrideExtendedEdges=_overrideExtendedEdges;
@property(nonatomic) _Bool preventScrollingForNextViewAppear; // @synthesize preventScrollingForNextViewAppear=_preventScrollingForNextViewAppear;
@property(nonatomic) _Bool allowExtendedHeightCells; // @synthesize allowExtendedHeightCells=_allowExtendedHeightCells;
- (void)pasteboardManager:(id)arg1 beginEditingEvent:(id)arg2;	// IMP=0x0010000000010a4e
- (id)editorForPasteboardManager:(id)arg1;	// IMP=0x0010000000010a3c
- (id)viewControllerToPresentAlertFromForPasteboardManager:(id)arg1;	// IMP=0x0010000000010a33
- (void)paste:(id)arg1;	// IMP=0x001000000001094c
- (void)copy:(id)arg1;	// IMP=0x001000000001088a
- (void)cut:(id)arg1;	// IMP=0x00100000000107c8
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000010656
- (void)_deselectAllSelectedRowsAnimated:(_Bool)arg1;	// IMP=0x00100000000104f5
- (void)_multiSelect:(id)arg1;	// IMP=0x0010000000010396
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x001000000001033a
- (id)pasteboardManager;	// IMP=0x00100000000102ea
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x001000000001024a
- (void)_deleteEventAtIndexPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ffd4
- (void)_clearSwipedRow;	// IMP=0x001000000000ffb3
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x001000000000fc71
- (id)_eventForRowAtIndexPath:(id)arg1;	// IMP=0x001000000000fbe7
- (void)tableView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x001000000000fb67
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x001000000000f994
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x001000000000f68e
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x001000000000f5d0
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x001000000000f512
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x001000000000f44c
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x001000000000f3ef
- (void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(_Bool)arg3;	// IMP=0x001000000000f3de
- (void)eventViewControllerWillDisappear:(id)arg1;	// IMP=0x001000000000f3bc
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x001000000000f313
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x001000000000f1fb
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000000f0f7
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;	// IMP=0x001000000000f0ef
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x001000000000ef69
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x001000000000e6a5
- (id)_stringForHeaderDate:(id)arg1;	// IMP=0x001000000000e610
- (_Bool)_isDateInCurrentYear:(id)arg1;	// IMP=0x001000000000e430
- (id)_tableView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2;	// IMP=0x001000000000e2a4
- (id)formattedTemplateCellsWithReuseIdentifier:(id)arg1 hasTravelTime:(_Bool)arg2 isInvitation:(_Bool)arg3;	// IMP=0x001000000000dfab
- (_Bool)_rowDrawsBackground:(id)arg1;	// IMP=0x001000000000deb3
- (void)_updateSeparatorVisibilityForOccurrenceCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x001000000000dd3a
- (void)_updateSeparatorVisibilityForRowAtIndexPath:(id)arg1;	// IMP=0x001000000000dcab
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000000d82f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000000d7a2
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000000d6ed
- (void)_contentCategorySizeChangedNotification:(id)arg1;	// IMP=0x001000000000d65a
- (void)_updateEstimatedTableHeightsForContentSizeCategory;	// IMP=0x001000000000d590
- (void)_selectedOccurrencesChanged:(id)arg1;	// IMP=0x001000000000d078
- (void)_receivedSelectedDateChangeNotification:(id)arg1;	// IMP=0x001000000000cf5b
- (void)_localeChanged:(id)arg1;	// IMP=0x001000000000cf1e
- (void)_timeChangedSignificantly:(id)arg1;	// IMP=0x001000000000ce3e
- (void)_eventStoreChanged:(id)arg1;	// IMP=0x001000000000ce2c
- (void)_removeAllObservers;	// IMP=0x001000000000cd4d
- (void)_addAllObservers;	// IMP=0x001000000000cc2d
- (void)updateSeparatorVisibiltyForSelectionChangeForRowAtIndexPath:(id)arg1;	// IMP=0x001000000000cb67
- (void)selectEvent:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000000c97e
- (id)defaultEventForSelectedDate;	// IMP=0x001000000000c865
- (_Bool)_processScrollingMessagesOnEveryFrameFromListViewController;	// IMP=0x001000000000c7d9
- (void)_setTopVisibleDateAsSelectedDateAndUpdateBackButton;	// IMP=0x001000000000c775
- (double)contentInset;	// IMP=0x001000000000c706
- (void)_updateBackButtonOnBackViewControllerToDate:(id)arg1;	// IMP=0x001000000000c68e
- (void)_setTopVisibleDateAsSelectedDate;	// IMP=0x001000000000c44f
- (_Bool)shouldUpdateModelSelectedDate;	// IMP=0x001000000000c447
- (id)_indexPathForDate:(id)arg1;	// IMP=0x001000000000c2cf
- (void)scrollToDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000000bf3e
- (void)scrollToTodayAnimated:(_Bool)arg1;	// IMP=0x001000000000bef5
- (void)scrollToSelectedDateAnimated:(_Bool)arg1;	// IMP=0x001000000000be69
- (id)_dateForFirstTableRow;	// IMP=0x001000000000bd4e
- (id)_dateForFirstVisibleRow;	// IMP=0x001000000000bd3c
- (_Bool)_selectedDateIsVisible;	// IMP=0x001000000000ba43
- (id)contentUnavailableConfigurationForState:(id)arg1;	// IMP=0x001000000000b942
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;	// IMP=0x001000000000b8b4
- (_Bool)hasContent;	// IMP=0x001000000000b86c
- (void)setNeedsRefresh:(_Bool)arg1;	// IMP=0x001000000000b857
- (void)refreshIfNeeded;	// IMP=0x001000000000b49a
- (_Bool)_isVisible;	// IMP=0x001000000000b477
- (void)refresh;	// IMP=0x001000000000b444
@property(readonly, nonatomic) UITableView *tableViewForTesting;
- (_Bool)shouldPreserveDateAcrossRefresh;	// IMP=0x001000000000b412
- (_Bool)shouldAutoScrollToSelectedDateAfterFirstRefresh;	// IMP=0x001000000000b40a
- (_Bool)toolbarVisibleInSplitBehavior:(long long)arg1;	// IMP=0x001000000000b3fd
- (id)sceneTitle;	// IMP=0x001000000000b331
- (_Bool)showEventDetailsWhenNewEventAdded;	// IMP=0x001000000000b329
- (id)bestDateForNewEvent;	// IMP=0x001000000000b2f0
- (void)_selectTodayDate;	// IMP=0x001000000000b20a
- (void)selectDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000000b147
- (_Bool)isTodayVisible;	// IMP=0x001000000000b13f
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;	// IMP=0x001000000000b137
- (id)backButtonTitleForEventDetails;	// IMP=0x001000000000b084
- (void)_showEvent:(id)arg1 viewController:(id)arg2 animated:(_Bool)arg3 showComments:(_Bool)arg4;	// IMP=0x001000000000ae94
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x001000000000acb4
- (void)updatePalette:(id)arg1;	// IMP=0x001000000000ac24
- (_Bool)allowsOverriddenToolbarItems;	// IMP=0x001000000000ac1c
- (_Bool)allowsOverriddenRightNavigationBarItems;	// IMP=0x001000000000ac14
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000000abd1
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000000ab54
- (void)setUpViewConstraints;	// IMP=0x001000000000a992
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000a896
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000a750
- (void)loadView;	// IMP=0x001000000000a267
- (void)dealloc;	// IMP=0x001000000000a1ed
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 window:(id)arg2;	// IMP=0x001000000000a039

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UITraitCollection *futureTraitCollection;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransitioningTraitCollection;
@property(nonatomic) _Bool isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
@property(readonly, nonatomic) _Bool shouldAdaptEventViewControllers;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end
