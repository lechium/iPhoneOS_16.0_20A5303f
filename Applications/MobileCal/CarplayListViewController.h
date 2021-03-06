//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CalendarModel, CarplayNoEventsView, CarplayTableViewSection, EKCalendarVisibilityManager, NSArray, NSMutableDictionary, NSMutableSet, NSString, UITableView;

@interface CarplayListViewController : UIViewController
{
    CalendarModel *_model;	// 8 = 0x8
    EKCalendarVisibilityManager *_visibilityManager;	// 16 = 0x10
    CarplayNoEventsView *_noEventsView;	// 24 = 0x18
    UITableView *_listView;	// 32 = 0x20
    CarplayTableViewSection *_todaySection;	// 40 = 0x28
    CarplayTableViewSection *_tomorrowSection;	// 48 = 0x30
    NSArray *_sections;	// 56 = 0x38
    NSMutableSet *_changedObjectIDs;	// 64 = 0x40
    _Bool _needsForceRefresh;	// 72 = 0x48
    NSMutableDictionary *_calendarColorMapping;	// 80 = 0x50
    _Bool _showingTomorrowSection;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000027d75
@property(nonatomic) _Bool showingTomorrowSection; // @synthesize showingTomorrowSection=_showingTomorrowSection;
- (void)_forceUpdateCell:(id)arg1;	// IMP=0x0010000000027d0b
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000027cb9
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000027c67
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000027b30
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000027a20
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000000279ce
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x001000000002793b
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00100000000278dd
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000000278c4
- (id)_allDayOccurrences:(long long)arg1;	// IMP=0x0010000000027844
- (id)_timedOccurrences:(long long)arg1;	// IMP=0x00100000000277c4
- (id)_allFetchedOccurrences:(long long)arg1;	// IMP=0x0010000000027744
- (_Bool)_anyOccurrencesAvailable:(long long)arg1;	// IMP=0x00100000000276fc
- (id)_currentDateComponents;	// IMP=0x0010000000027658
- (void)_showListView;	// IMP=0x0010000000027291
- (void)_showNoEventsView;	// IMP=0x0010000000026eaa
- (void)_setShowingNoEventsMode:(_Bool)arg1;	// IMP=0x0010000000026e4a
- (void)_updateContent;	// IMP=0x001000000002617b
- (void)_loadAndShowAppropriateContentView;	// IMP=0x001000000002614a
- (_Bool)_shouldShowNoEventsView;	// IMP=0x0010000000026102
- (_Bool)_shouldShowTomorrowSection;	// IMP=0x0010000000026086
- (void)_setViewStatesForCachedEventCollection;	// IMP=0x0010000000026058
- (void)_eventFetchCompleted;	// IMP=0x0010000000025fe3
- (void)_refreshTodayView;	// IMP=0x0010000000025f73
- (void)_focusModeConfigurationChanged;	// IMP=0x0010000000025f07
- (void)_localeChanged;	// IMP=0x0010000000025e92
- (void)_contentCategorySizeChanged:(id)arg1;	// IMP=0x0010000000025e1d
- (void)_significantTimeChange:(id)arg1;	// IMP=0x0010000000025cd2
- (void)_databaseDidChange:(id)arg1;	// IMP=0x0010000000025b7d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000025a1a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000025864
- (id)_createListView;	// IMP=0x00100000000257c3
- (void)setViewControllerTitleForSelectedEventInSection:(long long)arg1;	// IMP=0x001000000002569a
- (void)scrollToDate:(id)arg1;	// IMP=0x00100000000253a7
- (long long)sectionForEvent:(id)arg1;	// IMP=0x00100000000252a6
- (id)initWithModel:(id)arg1;	// IMP=0x0010000000024eb3
- (id)sharedManager;	// IMP=0x0010000000024dcf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

