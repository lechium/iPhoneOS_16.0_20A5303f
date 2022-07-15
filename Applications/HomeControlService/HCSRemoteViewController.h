//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CAGradientLayer, HUDashboardNavigationController, HUDashboardNavigationView, HUDashboardPageContainerViewController, HUDashboardViewController, HUHomeControlServiceContext, NAFuture, NSString;

@interface HCSRemoteViewController : UIViewController
{
    HUHomeControlServiceContext *_serviceContext;	// 8 = 0x8
    HUDashboardNavigationController *_dashboardNavigationController;	// 16 = 0x10
    HUDashboardPageContainerViewController *_dashboardPageContainerViewController;	// 24 = 0x18
    HUDashboardViewController *_dashboardViewController;	// 32 = 0x20
    HUDashboardNavigationView *_dashboardNavigationView;	// 40 = 0x28
    CAGradientLayer *_gradientLayer;	// 48 = 0x30
    NAFuture *_lockAuthFuture;	// 56 = 0x38
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0020000000001eb5
+ (id)_exportedInterface;	// IMP=0x0010000000001e9c
+ (id)_remoteViewControllerInterface;	// IMP=0x0010000000001e83
- (void).cxx_destruct;	// IMP=0x00200000000037fb
@property(retain, nonatomic) NAFuture *lockAuthFuture; // @synthesize lockAuthFuture=_lockAuthFuture;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) HUDashboardNavigationView *dashboardNavigationView; // @synthesize dashboardNavigationView=_dashboardNavigationView;
@property(retain, nonatomic) HUDashboardViewController *dashboardViewController; // @synthesize dashboardViewController=_dashboardViewController;
@property(retain, nonatomic) HUDashboardPageContainerViewController *dashboardPageContainerViewController; // @synthesize dashboardPageContainerViewController=_dashboardPageContainerViewController;
@property(retain, nonatomic) HUDashboardNavigationController *dashboardNavigationController; // @synthesize dashboardNavigationController=_dashboardNavigationController;
@property(retain, nonatomic) HUHomeControlServiceContext *serviceContext; // @synthesize serviceContext=_serviceContext;
- (void)_updateNavigationView;	// IMP=0x0010000000003642
- (void)_layoutDashboardViewController;	// IMP=0x0010000000002738
- (void)_layoutDashboardNavigationController;	// IMP=0x00100000000024a5
- (void)_setupBackgroundViewWithBlurEffectStyle:(long long)arg1;	// IMP=0x0010000000002387
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000000223f
- (void)dashboardNavigationView:(id)arg1 didTapHomeAppButton:(id)arg2;	// IMP=0x0010000000002136
- (void)getTransitionSubviewFramesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000020c4
- (void)willFinishTransition:(_Bool)arg1 forCompactModule:(_Bool)arg2;	// IMP=0x0010000000002073
- (void)willBeginTransition:(_Bool)arg1 forCompactModule:(_Bool)arg2;	// IMP=0x0010000000002004
- (void)lockAuthenticationCompleted:(_Bool)arg1;	// IMP=0x0010000000001f94
- (void)quickControlsPresentationDidUpdate:(_Bool)arg1;	// IMP=0x0010000000001f48
- (id)authorizeIfLockedForViewController:(id)arg1;	// IMP=0x0010000000001ec5
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000001ebd
- (void)configureHomeControlServiceWithContext:(id)arg1;	// IMP=0x0010000000001dfa
- (void)configureHomeControlServiceWithHomeUUID:(id)arg1;	// IMP=0x0010000000001d7c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000001d71
- (void)_updateRunningState:(_Bool)arg1;	// IMP=0x0010000000001c1f
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001aa6
- (void)viewWillLayoutSubviews;	// IMP=0x00100000000019a3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000018ea
- (void)viewDidLoad;	// IMP=0x0010000000001820

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
