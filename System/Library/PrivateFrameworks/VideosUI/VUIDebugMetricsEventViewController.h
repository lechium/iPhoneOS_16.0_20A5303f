//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class VUIDebugMetricsEvent;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEventViewController : UITableViewController
{
    VUIDebugMetricsEvent *_event;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001ccf4e
@property(retain, nonatomic) VUIDebugMetricsEvent *event; // @synthesize event=_event;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001cccc1
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000001ccc2f
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001cc74d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001cc6a0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001cc651
- (void)performValidation;	// IMP=0x00000000001cc5a1
- (void)viewDidLoad;	// IMP=0x00000000001cc3ff
- (id)initWithEvent:(id)arg1;	// IMP=0x00000000001cc38c

@end

