//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, UIViewController;

@interface HSPCSiriForEveryoneViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001d5d7
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (id)_enableMultiUser;	// IMP=0x001000000001d23a
- (id)commitConfiguration;	// IMP=0x001000000001d21a
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x001000000001cfe8

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

