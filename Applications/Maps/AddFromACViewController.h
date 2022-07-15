//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DataSource, HairlineView, MacFooterView, ModalCardHeaderView, NSString, PassthruSearchBar, RecentlyViewedDataSource, SearchDataSource, ShortcutSuggestionsDataSource, UITableView, UITextField;

@interface AddFromACViewController
{
    NSString *_inputText;	// 8 = 0x8
    ModalCardHeaderView *_modalHeaderView;	// 16 = 0x10
    PassthruSearchBar *_searchBar;	// 24 = 0x18
    UITextField *_searchField;	// 32 = 0x20
    DataSource *_currentDataSource;	// 40 = 0x28
    SearchDataSource *_searchDataSource;	// 48 = 0x30
    RecentlyViewedDataSource *_recentlyViewedDataSource;	// 56 = 0x38
    ShortcutSuggestionsDataSource *_suggestionsDataSource;	// 64 = 0x40
    HairlineView *_headerHairline;	// 72 = 0x48
    MacFooterView *_footerView;	// 80 = 0x50
    UITableView *_tableView;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000025134a
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x001000000025131f
- (void)macFooterViewBackButtonTapped:(id)arg1;	// IMP=0x0010000000251319
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x0010000000251305
- (void)_textFieldDidChange:(id)arg1;	// IMP=0x001000000025129f
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x001000000025128a
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x0010000000251282
- (_Bool)searchBarShouldEndEditing:(id)arg1;	// IMP=0x001000000025127a
- (_Bool)searchBarShouldBeginEditing:(id)arg1;	// IMP=0x0010000000251272
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0010000000251252
- (void)setInputText:(id)arg1;	// IMP=0x0010000000251150
- (_Bool)searchDataSource:(id)arg1 shouldFilterItem:(id)arg2;	// IMP=0x00100000002510c2
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x0010000000251077
- (void)searchDataSource:(id)arg1 addItem:(id)arg2;	// IMP=0x0010000000251062
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x001000000025104d
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x0010000000251047
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x0010000000251035
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000250ff4
- (void)_handleItem:(id)arg1;	// IMP=0x0010000000250d1d
- (void)_updateHeaderHairline;	// IMP=0x0010000000250cae
- (void)_enableTextFieldNotification:(_Bool)arg1;	// IMP=0x0010000000250c10
- (void)updateDataSource;	// IMP=0x0010000000250adf
@property(readonly, nonatomic) _Bool showsRecents;
- (id)emptyStateDataSource;	// IMP=0x0010000000250a8e
- (id)searchDataSource;	// IMP=0x001000000025099d
- (id)recentlyViewedDataSource;	// IMP=0x00100000002508dd
- (id)suggestionsDataSource;	// IMP=0x0010000000250837
- (void)updateTheme;	// IMP=0x00100000002506ee
- (void)_setPlaceHolder;	// IMP=0x00100000002504e7
- (void)didResignCurrent;	// IMP=0x00100000002504a7
- (void)didBecomeCurrent;	// IMP=0x0010000000250444
- (void)viewDidLoad;	// IMP=0x001000000024f495
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000024f3a9
- (void)saveShortcut:(id)arg1;	// IMP=0x001000000024f3a3
- (void)saveMapItem:(id)arg1;	// IMP=0x001000000024f39d
@property(readonly, nonatomic) int requestSource;
@property(readonly, nonatomic) NSString *headerTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
