//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE, NSArray;

@interface _TtC5Files33DOCSuggestionsTableViewController : UITableViewController
{
    MISSING_TYPE *suggestionsTableViewDelegate;	// 8 = 0x8
    MISSING_TYPE *suggestions;	// 24 = 0x18
    MISSING_TYPE *sortedSuggestions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0040000000352df0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000352d70
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000352d40
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000352c80
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000352650
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000352640
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x0010000000352630
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x0010000000352620
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000352560
- (void)keyCommandCancelSelection;	// IMP=0x0010000000351920
- (void)keyCommandConfirmSelection;	// IMP=0x00100000003518f0
- (void)keyCommandMoveSelectionDown;	// IMP=0x0010000000351730
- (void)keyCommandMoveSelectionUp;	// IMP=0x00100000003516f0
@property(nonatomic, readonly) NSArray *keyCommands;
- (_Bool)resignFirstResponder;	// IMP=0x0010000000351660
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000351400
- (void)viewDidLoad;	// IMP=0x0010000000351170
- (void)loadView;	// IMP=0x0010000000350db0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000350d40
- (id)init;	// IMP=0x0010000000350cd0

@end

