//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class NSString, NSXPCConnection, UIWindow, WFStatusViewController;

@interface WFViewServiceApplication : UIApplication
{
    NSXPCConnection *_activeConnection;	// 8 = 0x8
    WFStatusViewController *_lastPresentedStatus;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000019b6
@property(retain, nonatomic) WFStatusViewController *lastPresentedStatus; // @synthesize lastPresentedStatus=_lastPresentedStatus;
@property(retain, nonatomic) NSXPCConnection *activeConnection; // @synthesize activeConnection=_activeConnection;
- (void)workflowStatusWorkflowDidFinishWithSuccess:(_Bool)arg1;	// IMP=0x0010000000001966
- (void)workflowStatusWorkflowWillBeginRunningWithAttribution:(id)arg1 context:(id)arg2;	// IMP=0x0010000000001960
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000000018d2
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00100000000018ca
- (void)_handlePlatformSpecificActions:(id)arg1 forScene:(id)arg2 withTransitionContext:(id)arg3;	// IMP=0x001000000000143d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

