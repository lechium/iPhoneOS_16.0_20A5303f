//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXPickerContentViewController.h>

@class HSPCDataProvider, HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, UIViewController;

@interface HSPCSelectHomeViewController : PRXPickerContentViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    HSPCDataProvider *_homeProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000007b9d
@property(retain) HSPCDataProvider *homeProvider; // @synthesize homeProvider=_homeProvider;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (id)hu_preloadContent;	// IMP=0x00100000000079fd
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x00100000000078bb
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x001000000000784d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000007762
- (id)commitConfiguration;	// IMP=0x001000000000754a
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0010000000007447

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
