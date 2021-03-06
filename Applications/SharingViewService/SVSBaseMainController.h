//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSDictionary, NSString, SFProxCardSessionServer;

@interface SVSBaseMainController : SBUIRemoteAlertServiceViewController
{
    SFProxCardSessionServer *_proxCardSessionServer;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001933a9
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) SFProxCardSessionServer *proxCardSessionServer; // @synthesize proxCardSessionServer=_proxCardSessionServer;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;	// IMP=0x0010000000193364
- (void)dismiss:(int)arg1;	// IMP=0x001000000019330f
- (unsigned long long)desiredHomeButtonEvents;	// IMP=0x00100000001932f5
- (void)xpcStarted:(id)arg1;	// IMP=0x00100000001932ef
- (void)_willAppearInRemoteViewController;	// IMP=0x0010000000193239
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000193163
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000019315b
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000192f3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

