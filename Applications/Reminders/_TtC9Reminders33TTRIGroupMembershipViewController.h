//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE, NSUndoManager;

@interface _TtC9Reminders33TTRIGroupMembershipViewController : UITableViewController
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *localUndoManager;	// 24 = 0x18
    MISSING_TYPE *viewModel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0040000000040090
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000040030
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000040000
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x001000000003ff10
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x001000000003fde0
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x001000000003fb30
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x001000000003fa70
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x001000000003f970
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x001000000003f8e0
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x001000000003f7f0
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x001000000003f6e0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000003f620
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000003f320
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000003f2c0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000003ed00
- (void)viewDidLoad;	// IMP=0x001000000003ec60
@property(nonatomic, readonly) NSUndoManager *undoManager;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003e8d0

@end
