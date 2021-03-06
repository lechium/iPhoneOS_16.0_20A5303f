//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSArray, NSMutableSet, NSString, PRXAction, UITableView, UIViewController;

@interface HSPCUseSiriMultipleAccessoryViewController : PRXCardContentViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    PRXAction *_useSiriAction;	// 32 = 0x20
    NSArray *_siriEndpointAccessories;	// 40 = 0x28
    NSMutableSet *_selectedAccessories;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000014e6a
@property(retain, nonatomic) NSMutableSet *selectedAccessories; // @synthesize selectedAccessories=_selectedAccessories;
@property(retain, nonatomic) NSArray *siriEndpointAccessories; // @synthesize siriEndpointAccessories=_siriEndpointAccessories;
@property(retain, nonatomic) PRXAction *useSiriAction; // @synthesize useSiriAction=_useSiriAction;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (_Bool)_shouldEnableShareSiriAnalytics;	// IMP=0x0010000000014cd3
- (void)_updateUseSiriButtonEnabledState;	// IMP=0x0010000000014c51
- (_Bool)_deviceIsOnAMultiUserLanguage;	// IMP=0x0010000000014bad
- (_Bool)_isVoiceRecognitionEnabled;	// IMP=0x00100000000149da
- (void)_launchSiriPrivacySheet;	// IMP=0x001000000001492e
- (void)_handleFooterLabelTouchForOpenURL:(id)arg1;	// IMP=0x00100000000147c8
- (id)_applyOnboardingSelections:(_Bool)arg1;	// IMP=0x0010000000013e67
- (id)_disableSiri;	// IMP=0x0010000000013e50
- (CDUnknownBlockType)dismissButtonBlock;	// IMP=0x0010000000013de3
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000013cf6
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000013cb2
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000013ca7
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000013b9d
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000013a90
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000013863
- (void)viewDidLoad;	// IMP=0x00100000000130df
- (id)commitConfiguration;	// IMP=0x00100000000130cb
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0010000000012a2e

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

