//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class NSArray, NSIndexPath, NSString, UILocalizedIndexedCollation, UITableViewController;
@protocol CNCountryPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNCountryPickerController : UINavigationController
{
    NSString *_selectedCountryCode;	// 8 = 0x8
    UITableViewController *_tableViewController;	// 16 = 0x10
    UILocalizedIndexedCollation *_collation;	// 24 = 0x18
    NSArray *_countries;	// 32 = 0x20
    NSArray *_sections;	// 40 = 0x28
    NSIndexPath *_selectedIndexPath;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000a3e2a
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) NSArray *countries; // @synthesize countries=_countries;
@property(retain, nonatomic) UILocalizedIndexedCollation *collation; // @synthesize collation=_collation;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(copy, nonatomic) NSString *selectedCountryCode; // @synthesize selectedCountryCode=_selectedCountryCode;
- (void)_configureSections;	// IMP=0x00000000000a372b
- (void)_loadCountryCodes;	// IMP=0x00000000000a32e4
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000000000a32cf
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000a3232
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000000000a31df
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x00000000000a318f
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000a301c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000a2d5e
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000000a2cc1
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000a2c4d
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000a2bdf
- (void)dealloc;	// IMP=0x00000000000a2b6a
- (void)windowDidRotate:(id)arg1;	// IMP=0x00000000000a2a91
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000a2755
- (void)viewDidLoad;	// IMP=0x00000000000a26b8
- (void)cancelPicker:(id)arg1;	// IMP=0x00000000000a266c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000a2346

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CNCountryPickerControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
