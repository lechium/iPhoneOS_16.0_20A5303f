//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PUDebugImageTableViewController : UITableViewController
{
    NSArray *_tableData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000035a98
@property(copy) NSArray *tableData; // @synthesize tableData=_tableData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000035351
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000034e38
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000034e1b
- (void)viewDidLoad;	// IMP=0x000000000003435b
- (id)pidFromPath:(id)arg1;	// IMP=0x000000000003427a
- (id)jobNumberFromPath:(id)arg1;	// IMP=0x0000000000034129

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

