//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface GeoAnalyticsHandlingTableViewController : UITableViewController
{
    NSArray *_infos;	// 8 = 0x8
    NSArray *_rowNames;	// 16 = 0x10
    NSArray *_sectionTitles;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000768d38
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000007689d7
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000007689cc
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00100000007689ac
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000076898f
- (void)viewDidLoad;	// IMP=0x0010000000768960
- (id)initWithAnalyticsHandlingInfos:(id)arg1;	// IMP=0x00100000007681c8

@end

