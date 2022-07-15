//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, SBDeviceApplicationSceneEntity, SBWindowScene, UIViewController;

@protocol SBPIPControllerAdapterContextProviding <NSObject>
- (double)windowLevelForWindowScene:(SBWindowScene *)arg1;
- (void)invalidateIdleTimerBehaviors;
- (void)restoreContentViewController:(UIViewController *)arg1 appSceneEntity:(SBDeviceApplicationSceneEntity *)arg2 morphAnimatorConfigurationBlock:(void (^)(SBPIPMorphAnimatorController *))arg3 completion:(void (^)(_Bool))arg4;
- (void)prepareContainerViewControllerForHidingContentViewController:(UIViewController *)arg1;
- (NSArray *)containerViewControllersOnWindowScene:(SBWindowScene *)arg1;
@end
