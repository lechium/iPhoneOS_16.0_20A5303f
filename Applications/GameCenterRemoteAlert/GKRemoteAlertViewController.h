//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class GKGameCenterViewController, NSString;

@interface GKRemoteAlertViewController : SBUIRemoteAlertServiceViewController
{
    GKGameCenterViewController *_gameCenterViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000002e9e
@property(retain, nonatomic) GKGameCenterViewController *gameCenterViewController; // @synthesize gameCenterViewController=_gameCenterViewController;
- (void)dismiss;	// IMP=0x0010000000002c09
- (void)invokeDashboardWithHostPID:(int)arg1 game:(id)arg2 byPassPreAuthentication:(_Bool)arg3 deepLink:(id)arg4;	// IMP=0x00100000000027c7
- (id)deserializeGameFromData:(id)arg1;	// IMP=0x00100000000025eb
- (_Bool)contextCanBypassAuthentication:(id)arg1;	// IMP=0x001000000000259a
- (void)gameCenterViewControllerDidFinish:(id)arg1;	// IMP=0x0010000000002588
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0010000000002580
- (_Bool)prefersStatusBarHidden;	// IMP=0x0010000000002578
- (void)handleButtonActions:(id)arg1;	// IMP=0x0010000000002566
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001e04
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000173b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

