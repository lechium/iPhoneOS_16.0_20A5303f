//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UILabel, UISearchField, UITableView, _UIBackdropView;
@protocol VOTUIItemChooserDelegate;

@interface VOTUIItemChooserController : UIViewController
{
    UILabel *_headingLabel;	// 8 = 0x8
    UISearchField *_searchField;	// 16 = 0x10
    UITableView *_table;	// 24 = 0x18
    NSMutableArray *_filteredList;	// 32 = 0x20
    NSMutableDictionary *_items;	// 40 = 0x28
    NSArray *_originalList;	// 48 = 0x30
    NSArray *_itemCategoryMappings;	// 56 = 0x38
    NSArray *_regionDescriptions;	// 64 = 0x40
    long long _totalItemCount;	// 72 = 0x48
    NSArray *_sectionHeaders;	// 80 = 0x50
    long long _category;	// 88 = 0x58
    NSArray *_categories;	// 96 = 0x60
    NSString *_filter;	// 104 = 0x68
    long long _selectedRow;	// 112 = 0x70
    _Bool _activateItem;	// 120 = 0x78
    _UIBackdropView *_backdropView;	// 128 = 0x80
    struct CGRect _keyboardFrame;	// 136 = 0x88
    id <VOTUIItemChooserDelegate> _delegate;	// 168 = 0xa8
    NSString *_lastSearchTerm;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0020000000012cca
@property(retain, nonatomic) NSString *lastSearchTerm; // @synthesize lastSearchTerm=_lastSearchTerm;
@property(nonatomic) __weak id <VOTUIItemChooserDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000012847
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000012750
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000001271a
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000012714
- (void)_updateSelectedRow:(id)arg1;	// IMP=0x0010000000012530
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x00100000000124e7
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000012429
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000012420
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000000123d4
- (_Bool)accessibilityPerformEscape;	// IMP=0x001000000001239d
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x001000000001237d
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x00100000000122f3
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x0010000000012167
- (void)_updatePositionForKeyboard:(struct CGRect)arg1;	// IMP=0x0010000000011f92
- (double)_positionAccountingForKeyboard:(struct CGRect)arg1;	// IMP=0x0010000000011eae
- (void)_displayWithList:(id)arg1 fromRotorSwitch:(_Bool)arg2;	// IMP=0x001000000001174d
- (void)_handleSearchFieldTextChange:(id)arg1;	// IMP=0x00100000000114f6
- (_Bool)hostingWindowShouldMoveForReachability;	// IMP=0x00100000000114ee
- (void)hideItemChooser:(_Bool)arg1;	// IMP=0x0010000000011319
- (_Bool)accessibilityScroll:(long long)arg1;	// IMP=0x0010000000010d95
- (long long)modalPresentationStyle;	// IMP=0x0010000000010d8a
- (void)_loadGuidedAccessBundle;	// IMP=0x0010000000010a50
- (void)_updateGuidedAccessWindowId:(unsigned int)arg1;	// IMP=0x001000000001082c
- (void)_guidedAccessItemChooserDidShow;	// IMP=0x00100000000107a5
- (void)showItemChooser:(id)arg1;	// IMP=0x0010000000010551
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000010549
- (id)_constraintsToPositionItem:(id)arg1 identicallyToItem:(id)arg2;	// IMP=0x0010000000010341
- (void)viewDidLoad;	// IMP=0x001000000000f721

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
