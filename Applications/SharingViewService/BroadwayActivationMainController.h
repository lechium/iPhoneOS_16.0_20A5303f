//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BroadwayActivationDoneViewController, BroadwayActivationFailedNoConnectivityViewController, BroadwayActivationFailedViewController, BroadwayActivationStartViewController, PKPhysicalCard, SVSCommonNavController, UIStoryboard;

@interface BroadwayActivationMainController
{
    _Bool _appeared;	// 24 = 0x18
    _Bool _dismissed;	// 25 = 0x19
    UIStoryboard *_storyboard;	// 32 = 0x20
    SVSCommonNavController *_vcNav;	// 40 = 0x28
    BroadwayActivationDoneViewController *_vcDone;	// 48 = 0x30
    BroadwayActivationFailedViewController *_vcFailed;	// 56 = 0x38
    BroadwayActivationFailedNoConnectivityViewController *_vcFailedNoConnectivity;	// 64 = 0x40
    BroadwayActivationStartViewController *_vcStart;	// 72 = 0x48
    _Bool _test;	// 80 = 0x50
    _Bool _noCardTest;	// 81 = 0x51
    PKPhysicalCard *_physicalCard;	// 88 = 0x58
    long long _forcedActivationResult;	// 96 = 0x60
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x004000000018e9fc
- (void).cxx_destruct;	// IMP=0x002000000018e730
@property(nonatomic) _Bool noCardTest; // @synthesize noCardTest=_noCardTest;
@property(nonatomic) long long forcedActivationResult; // @synthesize forcedActivationResult=_forcedActivationResult;
@property(nonatomic) _Bool test; // @synthesize test=_test;
@property(copy, nonatomic) PKPhysicalCard *physicalCard; // @synthesize physicalCard=_physicalCard;
- (void)retryActivation;	// IMP=0x001000000018e5e0
- (void)showCompletedUI:(long long)arg1;	// IMP=0x001000000018e3b9
- (void)handleButtonActions:(id)arg1;	// IMP=0x001000000018e215
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018e0f1
- (void)dismiss:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018e0d5
- (void)dismiss:(int)arg1;	// IMP=0x001000000018e0c1
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000018defe
- (void)presentAppropriateViewControllerIfReady;	// IMP=0x001000000018dafb
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000018da5c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x001000000018d9db
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018d77b
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000018d773

@end
