//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class CalendarModel, NSString, SearchResultsViewController, UISearchBar;

@interface SearchResultsNavigationController : UINavigationController
{
    _Bool _initialPresentationHasCompleted;	// 8 = 0x8
    SearchResultsViewController *_searchResultsViewController;	// 16 = 0x10
    UISearchBar *_searchBar;	// 24 = 0x18
    CalendarModel *_model;	// 32 = 0x20
}

+ (id)_todayLocalizedString;	// IMP=0x002000000013e80a
+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x001000000013cdd1
- (void).cxx_destruct;	// IMP=0x002000000013e900
@property(nonatomic) _Bool initialPresentationHasCompleted; // @synthesize initialPresentationHasCompleted=_initialPresentationHasCompleted;
@property(retain, nonatomic) CalendarModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) SearchResultsViewController *searchResultsViewController; // @synthesize searchResultsViewController=_searchResultsViewController;
- (void)todayPressed;	// IMP=0x001000000013e6f5
- (void)_setSearchBarEnabledState:(_Bool)arg1;	// IMP=0x001000000013e2ff
- (void)_updateTodayButtonPosition;	// IMP=0x001000000013e0a8
- (void)_showSearchBar;	// IMP=0x001000000013de04
- (void)_hideSearchBar;	// IMP=0x001000000013dced
- (void)animateShowingSearchBarAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000013db6b
- (void)hideSearchBarForNavigationTransitionAnimated:(_Bool)arg1;	// IMP=0x001000000013d9a3
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000013d775
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x001000000013d6a9
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000013cdd9
- (id)noContentString;	// IMP=0x001000000013cce5
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000013cb55
- (void)viewDidLoad;	// IMP=0x001000000013cabd
- (void)dealloc;	// IMP=0x001000000013ca48
- (id)initWithModel:(id)arg1 window:(id)arg2;	// IMP=0x001000000013c93c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

