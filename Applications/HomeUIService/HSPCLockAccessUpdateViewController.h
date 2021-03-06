//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, HULockAccessUpdateViewController, NSString, UIViewController;

@interface HSPCLockAccessUpdateViewController : PRXCardContentViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    HULockAccessUpdateViewController *_lockAccessUpdateViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000041ae
@property(readonly, nonatomic) HULockAccessUpdateViewController *lockAccessUpdateViewController; // @synthesize lockAccessUpdateViewController=_lockAccessUpdateViewController;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (id)hu_preloadContent;	// IMP=0x00100000000040ff
- (id)commitConfiguration;	// IMP=0x00100000000040df
- (void)viewDidLoad;	// IMP=0x0010000000003b3f
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x001000000000391d

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

