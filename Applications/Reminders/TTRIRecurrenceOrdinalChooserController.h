//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TTRIRecurrenceOrdinalPickerViewController, UITableViewCell;

@interface TTRIRecurrenceOrdinalChooserController
{
    TTRIRecurrenceOrdinalPickerViewController *_pickerViewController;	// 8 = 0x8
    UITableViewCell *_cell;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000008c01
- (void)frequencyPickerUpdated:(id)arg1;	// IMP=0x0010000000008bef
- (void)updateFromRecurrenceRule:(id)arg1;	// IMP=0x0010000000008bd2
- (void)updateRecurrenceRuleBuilder:(id)arg1;	// IMP=0x0010000000008bb5
- (id)cellForRow:(long long)arg1;	// IMP=0x00100000000088ae
- (double)heightForRow:(long long)arg1;	// IMP=0x0010000000008843
- (long long)numberOfRows;	// IMP=0x0010000000008838
- (long long)frequency;	// IMP=0x001000000000882d
- (id)initWithDate:(id)arg1;	// IMP=0x00100000000087b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
