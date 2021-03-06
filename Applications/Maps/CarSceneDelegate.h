//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarMapsActionController, CarTestCoordinator, NGChromeViewController, NSString, UIScene, UIWindow;
@protocol CarSceneController, PPTTestCoordinatorProtocol;

@interface CarSceneDelegate : NSObject
{
    CarMapsActionController *_carActionController;	// 8 = 0x8
    CarTestCoordinator *_carTestCoordinator;	// 16 = 0x10
    UIWindow *_window;	// 24 = 0x18
    long long _sceneType;	// 32 = 0x20
    UIScene *_scene;	// 40 = 0x28
    id <CarSceneController> _sceneController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000006aa54c
@property(retain, nonatomic) id <CarSceneController> sceneController; // @synthesize sceneController=_sceneController;
@property(nonatomic) __weak UIScene *scene; // @synthesize scene=_scene;
@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) NGChromeViewController *chromeViewController;
@property(readonly, nonatomic) id <PPTTestCoordinatorProtocol> testCoordinator;
- (Class)_windowClass;	// IMP=0x00100000006aa301
- (id)entryPointsCoordinator;	// IMP=0x00100000006aa1d0
- (id)appSessionController;	// IMP=0x00100000006aa0a6
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x00100000006aa0a0
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;	// IMP=0x00100000006a98d4
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x00100000006a96b8
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;	// IMP=0x00100000006a94fa
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x00100000006a931c
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x00100000006a913e
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x00100000006a8f60
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x00100000006a8d82
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x00100000006a8b30
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000006a83c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

