//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15HealthRecordsUI29YearRangePickerViewController : HKTableViewController
{
    MISSING_TYPE *defaultCellIdentifier;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 24 = 0x18
    MISSING_TYPE *dataSource;	// 40 = 0x28
    MISSING_TYPE *selectedRow;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001e4420
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001e43c0
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000001e4390
- (id)initWithUsingInsetStyling:(_Bool)arg1;	// IMP=0x00000000001e4360
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001e41e0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001e4120
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001e3f40
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001e3a30
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001e3a20
- (void)viewDidLoad;	// IMP=0x00000000001e39f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e3750

@end
