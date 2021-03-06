//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface EKEventAvailabilityEditViewController
{
    long long _availability;	// 72 = 0x48
    unsigned long long _supportedAvailabilities;	// 80 = 0x50
    NSMutableArray *_choices;	// 88 = 0x58
    UITableView *_table;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000017f120
@property(nonatomic) long long availability; // @synthesize availability=_availability;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000017f08b
- (void)_selectRow:(unsigned long long)arg1;	// IMP=0x000000000017eeb4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000017ed85
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000017ed68
@property(nonatomic) unsigned long long supportedAvailabilities;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000017eb79
- (void)resetBackgroundColor;	// IMP=0x000000000017eac6
- (void)loadView;	// IMP=0x000000000017e995
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000017e8d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

