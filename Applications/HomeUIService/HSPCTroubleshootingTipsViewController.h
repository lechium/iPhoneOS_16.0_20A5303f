//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, UITableView, UIViewController;

@interface HSPCTroubleshootingTipsViewController : PRXCardContentViewController
{
    HSProxCardCoordinator *_coordinator;	// 8 = 0x8
    HSSetupStateMachineConfiguration *_config;	// 16 = 0x10
    unsigned long long _page;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002d7b5
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (unsigned long long)_tipCount;	// IMP=0x001000000002d6a8
- (unsigned long long)_tipForIndexPath:(id)arg1;	// IMP=0x001000000002d5d0
- (id)_tips;	// IMP=0x001000000002d4f0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000002d430
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000002d41e
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000002d413
- (void)actionInvokedForTip:(unsigned long long)arg1;	// IMP=0x001000000002d2e6
- (void)viewDidLoad;	// IMP=0x001000000002d27c
- (id)commitConfiguration;	// IMP=0x001000000002d25c
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x001000000002cff8

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
