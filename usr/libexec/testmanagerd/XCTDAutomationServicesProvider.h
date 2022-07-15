//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol XCAXManager, XCTDAccessibilitySystem, XCTDApplicationLauncher, XCTDOrientationManager, XCTDOrientationManagerDelegate, XCTDSiriInterface, XCTDSystemConfiguration, XCTouchGesturePerforming;

@interface XCTDAutomationServicesProvider : NSObject
{
    _Bool _valid;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    id <XCTDApplicationLauncher> _applicationLauncher;	// 16 = 0x10
    id <XCAXManager> _axManager;	// 24 = 0x18
    id <XCTDSystemConfiguration> _systemConfiguration;	// 32 = 0x20
    id <XCTDAccessibilitySystem> _accessibilitySystem;	// 40 = 0x28
    id <XCTouchGesturePerforming> _touchGesturePerformer;	// 48 = 0x30
    id <XCTDSiriInterface> _siriInterface;	// 56 = 0x38
    id <XCTDOrientationManager> _orientationManager;	// 64 = 0x40
    id <XCTDOrientationManagerDelegate> orientationManagerDelegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000002d7c9
@property struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property _Bool valid; // @synthesize valid=_valid;
@property __weak id <XCTDOrientationManagerDelegate> orientationManagerDelegate; // @synthesize orientationManagerDelegate;
@property(readonly) id <XCTDOrientationManager> orientationManager; // @synthesize orientationManager=_orientationManager;
@property(readonly) id <XCTDSiriInterface> siriInterface; // @synthesize siriInterface=_siriInterface;
@property(readonly) id <XCTouchGesturePerforming> touchGesturePerformer; // @synthesize touchGesturePerformer=_touchGesturePerformer;
@property(readonly) id <XCTDAccessibilitySystem> accessibilitySystem; // @synthesize accessibilitySystem=_accessibilitySystem;
@property(readonly) id <XCTDSystemConfiguration> systemConfiguration; // @synthesize systemConfiguration=_systemConfiguration;
@property(readonly) id <XCAXManager> axManager; // @synthesize axManager=_axManager;
@property(readonly) id <XCTDApplicationLauncher> applicationLauncher; // @synthesize applicationLauncher=_applicationLauncher;
- (void)orientationManagerDidUpdateInterfaceOrientation:(long long)arg1;	// IMP=0x001000000002d6a4
- (void)orientationManagerDidUpdateDeviceOrientation:(long long)arg1;	// IMP=0x001000000002d658
- (id)initWithAccessibilitySystem:(id)arg1 timeout:(double)arg2 error:(id *)arg3;	// IMP=0x001000000002d4ed
- (id)initWithApplicationLauncher:(id)arg1 orientationManager:(id)arg2 siriInterface:(id)arg3 systemConfiguration:(id)arg4 axManager:(id)arg5 touchGesturePerformer:(id)arg6;	// IMP=0x001000000002d372
- (_Bool)loadAccessibilityWithTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x001000000002d148
- (void)unloadAccessibility;	// IMP=0x001000000002cff1
- (void)invalidate;	// IMP=0x001000000002ce31
- (void)dealloc;	// IMP=0x001000000002cd04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
