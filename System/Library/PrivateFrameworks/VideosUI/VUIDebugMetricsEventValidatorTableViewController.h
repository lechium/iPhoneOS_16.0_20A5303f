//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEventValidatorTableViewController : UITableViewController
{
    NSDictionary *_event;	// 8 = 0x8
    NSArray *_results;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001498dd
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSDictionary *event; // @synthesize event=_event;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000001497db
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000148d94
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000148cf1
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000148cad
- (void)_reloadResults:(id)arg1;	// IMP=0x000000000014844c
- (id)initWithEvent:(id)arg1;	// IMP=0x00000000001481f4

@end

