//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, NSString, UIColor;
@protocol RAPCategoryChooserDelegate;

@interface ReportAProblemCategoryChooserViewController : UITableViewController
{
    id <RAPCategoryChooserDelegate> _chooserDelegate;	// 8 = 0x8
    NSArray *_originalCategoryList;	// 16 = 0x10
    NSArray *_fullCategoryList;	// 24 = 0x18
    NSArray *_partialCategoryList;	// 32 = 0x20
    long long _presentationStyle;	// 40 = 0x28
    UIColor *_selectedTextColor;	// 48 = 0x30
    NSMutableArray *_selectedCategoryNames;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000093afff
@property(retain, nonatomic) NSMutableArray *selectedCategoryNames; // @synthesize selectedCategoryNames=_selectedCategoryNames;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) NSArray *partialCategoryList; // @synthesize partialCategoryList=_partialCategoryList;
@property(retain, nonatomic) NSArray *fullCategoryList; // @synthesize fullCategoryList=_fullCategoryList;
@property(retain, nonatomic) NSArray *originalCategoryList; // @synthesize originalCategoryList=_originalCategoryList;
@property(nonatomic) __weak id <RAPCategoryChooserDelegate> chooserDelegate; // @synthesize chooserDelegate=_chooserDelegate;
- (void)checkmarkTableViewCell:(id)arg1 isSelected:(_Bool)arg2;	// IMP=0x001000000093ae48
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x001000000093ae33
- (void)macFooterViewBackButtonTapped:(id)arg1;	// IMP=0x001000000093ade9
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x001000000093add7
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x001000000093adc5
- (void)_captureUserAction:(int)arg1;	// IMP=0x001000000093ad78
- (void)_updateSearchResultsWithString:(id)arg1;	// IMP=0x001000000093ac54
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x001000000093abe2
- (void)_categoryNameSelected:(id)arg1;	// IMP=0x001000000093aaa1
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000093a959
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x001000000093a8fa
- (id)categoryNameAtIndexPath:(id)arg1;	// IMP=0x001000000093a854
- (_Bool)showingPartialSearchResults;	// IMP=0x001000000093a784
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000093a5a5
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000093a541
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000093a536
- (void)updateSelectedCategoryNames:(id)arg1;	// IMP=0x001000000093a469
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x001000000093a3dd
- (void)updateBarButtonItems;	// IMP=0x001000000093a0f3
- (id)searchBarDefaultPlaceholder;	// IMP=0x001000000093a08b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000939f12
- (void)viewDidLoad;	// IMP=0x0010000000939bea
- (void)_cancel;	// IMP=0x0010000000939ad0
- (void)saveCategoryAndDismissIfNecessary;	// IMP=0x0010000000939953
- (void)_didTapOnRightBarButtonItem;	// IMP=0x0010000000939920
- (void)_updateDoneBarButtonItem;	// IMP=0x0010000000939835
- (void)fetchLocalizedCategories;	// IMP=0x00100000009395c2
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithPresentationStyle:(long long)arg1 selectedCategoryNames:(id)arg2;	// IMP=0x001000000093933b

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
