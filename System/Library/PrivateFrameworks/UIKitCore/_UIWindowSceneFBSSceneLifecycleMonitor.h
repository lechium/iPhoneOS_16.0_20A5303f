//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UISceneLifecycleMonitor.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneFBSSceneLifecycleMonitor : _UISceneLifecycleMonitor
{
    NSNumber *_transitioningState;	// 16 = 0x10
    _Bool _transitioning;	// 24 = 0x18
    _Bool _connected;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x0000000000262cc1
- (void)willBecomeActive;	// IMP=0x0000000000262b97
- (void)didEnterBackground;	// IMP=0x00000000002629e6
- (id)_windowScene;	// IMP=0x0000000000262972
- (void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(CDUnknownBlockType)arg4;	// IMP=0x00000000002620b1
- (long long)currentActivationState;	// IMP=0x0000000000261ff6
- (id)initWithScene:(id)arg1;	// IMP=0x0000000000261f8b

@end

