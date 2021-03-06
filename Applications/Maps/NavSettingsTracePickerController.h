//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIBarButtonItem, UIToolbar;

@interface NavSettingsTracePickerController
{
    _Bool _showingPlayButton;	// 52 = 0x34
    UIToolbar *_toolbar;	// 56 = 0x38
    UIBarButtonItem *_deleteButtonItem;	// 64 = 0x40
    UIBarButtonItem *_deleteAllButtonItem;	// 72 = 0x48
}

+ (Class)_mfMailComposeViewController;	// IMP=0x00200000005239a9
+ (id)navigationDestinationTitle;	// IMP=0x001000000052399c
- (void).cxx_destruct;	// IMP=0x0020000000525702
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000525640
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0010000000525638
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;	// IMP=0x0010000000525556
- (void)_showDeleteFileSheetForTraceNames:(id)arg1;	// IMP=0x0010000000524f84
- (void)_showDeleteFileSheetForDeleteAll;	// IMP=0x0010000000524e63
- (void)_showDeleteFileSheet;	// IMP=0x0010000000524e17
- (id)tracePickerOptionsForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x00100000005241f0
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000524143
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000005240e4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000523c9e
- (void)updateTracePickerOptions;	// IMP=0x0010000000523b24
- (id)init;	// IMP=0x0010000000523a4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

