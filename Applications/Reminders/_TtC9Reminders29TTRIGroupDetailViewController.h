//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE, NSUndoManager, UIBarButtonItem, UITableViewCell, UITextField;

@interface _TtC9Reminders29TTRIGroupDetailViewController : UITableViewController
{
    MISSING_TYPE *nameTextField;	// 8 = 0x8
    MISSING_TYPE *doneBarButtonItem;	// 16 = 0x10
    MISSING_TYPE *includeCell;	// 24 = 0x18
    MISSING_TYPE *presenter;	// 32 = 0x20
    MISSING_TYPE *style;	// 48 = 0x30
    MISSING_TYPE *localUndoManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x004000000045b550
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000045b4f0
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000045b4c0
- (void)nameTextFieldDidChange:(id)arg1;	// IMP=0x001000000045b430
- (void)didTapCreate:(id)arg1;	// IMP=0x001000000045b320
- (void)didTapCancel:(id)arg1;	// IMP=0x001000000045b1e0
@property(nonatomic) __weak UITableViewCell *includeCell; // @synthesize includeCell;
@property(nonatomic) __weak UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem;
@property(nonatomic) __weak UITextField *nameTextField; // @synthesize nameTextField;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000045b000
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x001000000045afb0
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x001000000045af90
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000045af20
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000045aee0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000045ad60
- (void)viewDidLoad;	// IMP=0x001000000045ab50
@property(nonatomic, readonly) NSUndoManager *undoManager;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000045a6f0

@end
