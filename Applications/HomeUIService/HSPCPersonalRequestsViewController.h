//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXFeatureListViewController.h>

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, UIViewController;

@interface HSPCPersonalRequestsViewController : PRXFeatureListViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002e6c5
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (id)_enablePersonalRequests;	// IMP=0x001000000002dff3
- (id)_bulletImageWithSystemName:(id)arg1 color:(id)arg2;	// IMP=0x001000000002def7
- (id)commitConfiguration;	// IMP=0x001000000002ded7
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x000000000002d7f5

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

