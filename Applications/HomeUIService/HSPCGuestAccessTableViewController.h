//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUItemTableViewController.h>

@class HFItemManager, HSProxCardCoordinator, HSSetupStateMachineConfiguration, NAFuture, NSString, UIViewController;

@interface HSPCGuestAccessTableViewController : HUItemTableViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    NAFuture *_commitInProgress;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000344c
@property(retain, nonatomic) NAFuture *commitInProgress; // @synthesize commitInProgress=_commitInProgress;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x00100000000033c7
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000000333a
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x0010000000002fe9
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;	// IMP=0x0010000000002d82
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x0010000000002d71
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;	// IMP=0x0010000000002d69
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;	// IMP=0x0010000000002d61
- (id)commitConfiguration;	// IMP=0x001000000000275a
- (void)_updateCellInTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0010000000002679
- (id)_enableAccessIncludingGuestPinCodeItems:(id)arg1;	// IMP=0x0010000000002557
- (void)viewDidLoad;	// IMP=0x00100000000023b6
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;	// IMP=0x0010000000002301
- (id)init;	// IMP=0x001000000000224c
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x001000000000209e

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HFItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

