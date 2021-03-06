//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerManagementViewController
{
    NSArray *_allPickers;	// 8 = 0x8
    NSArray *_fileTypes;	// 16 = 0x10
    unsigned long long _mode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000018123
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSArray *fileTypes; // @synthesize fileTypes=_fileTypes;
@property(retain, nonatomic) NSArray *allPickers; // @synthesize allPickers=_allPickers;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000000180af
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000180a7
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x0000000000017f6f
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x0000000000017e51
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x0000000000017c8e
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000017c86
- (void)switchToggled:(id)arg1;	// IMP=0x0000000000017b1d
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000179e1
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000176b5
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000017671
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000017666
- (void)_doneButtonPressed;	// IMP=0x000000000001761c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000175df
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000175b0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000001759a
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000017584
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001753c
- (void)_updateContentSize;	// IMP=0x0000000000017373
- (id)initWithFileTypes:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x00000000000170a4

@end

