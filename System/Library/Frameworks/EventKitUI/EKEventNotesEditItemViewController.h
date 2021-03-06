//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CalendarNotesCell, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface EKEventNotesEditItemViewController
{
    UITableView *_table;	// 72 = 0x48
    CalendarNotesCell *_cell;	// 80 = 0x50
    NSString *_text;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000107fed
- (struct CGSize)preferredContentSize;	// IMP=0x0000000000107fd8
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000107e4d
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000107e38
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000107e2d
- (_Bool)validateAllowingAlert:(_Bool)arg1;	// IMP=0x0000000000107d6b
- (_Bool)resignFirstResponder;	// IMP=0x0000000000107d1c
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000107ccd
@property(copy, nonatomic) NSString *noteText;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000107bb5
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000107b6d
- (void)viewDidLoad;	// IMP=0x0000000000107b24
- (void)loadView;	// IMP=0x0000000000107997
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001078db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

