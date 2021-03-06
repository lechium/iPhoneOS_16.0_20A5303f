//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXFeatureListViewController.h>

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, PRXFeature, UIViewController;

@interface HSPCChimeViewController : PRXFeatureListViewController
{
    _Bool _initialHomePodChimeState;	// 8 = 0x8
    HSSetupStateMachineConfiguration *_config;	// 16 = 0x10
    HSProxCardCoordinator *_coordinator;	// 24 = 0x18
    PRXFeature *_homePodChimeFeature;	// 32 = 0x20
    PRXFeature *_traditionalChimeFeature;	// 40 = 0x28
}

+ (_Bool)shouldSkipForAccessory:(id)arg1 inHome:(id)arg2;	// IMP=0x002000000002aac9
+ (_Bool)_shouldShowTraditionalChimeFeatureForAccessory:(id)arg1;	// IMP=0x001000000002aa7e
+ (id)_muteCharacteristicForAccessory:(id)arg1;	// IMP=0x001000000002aa01
+ (_Bool)_shouldShowHomePodChimeFeatureForHome:(id)arg1;	// IMP=0x001000000002a915
- (void).cxx_destruct;	// IMP=0x002000000002abe2
@property(retain, nonatomic) PRXFeature *traditionalChimeFeature; // @synthesize traditionalChimeFeature=_traditionalChimeFeature;
@property(retain, nonatomic) PRXFeature *homePodChimeFeature; // @synthesize homePodChimeFeature=_homePodChimeFeature;
@property(nonatomic) _Bool initialHomePodChimeState; // @synthesize initialHomePodChimeState=_initialHomePodChimeState;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (_Bool)isHomePodChimeEnabled;	// IMP=0x001000000002a87c
- (_Bool)isTraditionalChimeEnabled;	// IMP=0x001000000002a77c
- (id)setHomePodChime:(_Bool)arg1;	// IMP=0x001000000002a57c
- (void)setTraditionalDoorbellChime:(_Bool)arg1;	// IMP=0x001000000002a504
- (void)viewDidLoad;	// IMP=0x001000000002a3dc
- (id)commitConfiguration;	// IMP=0x001000000002a234
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0010000000029e24

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

