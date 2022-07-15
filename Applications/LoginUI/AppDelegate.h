//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class LUILogViewerController, LUIUserSwitchTestOngoingIndicatorController, NSString, NSXPCConnection, UINavigationController, UIWindow;

@interface AppDelegate : UIResponder
{
    int mConfigurationDidChangeNotificationToken;	// 8 = 0x8
    id mLegibilityObserver;	// 16 = 0x10
    _Bool _logindAcceptedOurConnection;	// 24 = 0x18
    UIWindow *_window;	// 32 = 0x20
    UINavigationController *_navigationController;	// 40 = 0x28
    LUILogViewerController *_logViewerVC;	// 48 = 0x30
    NSXPCConnection *_connectionToLoginD;	// 56 = 0x38
    LUIUserSwitchTestOngoingIndicatorController *_testOngoingIndicatorController;	// 64 = 0x40
}

+ (_Bool)_underTestingEnvironment;	// IMP=0x001000000000571a
+ (void)_exchangeMethod:(struct objc_method *)arg1 originalSelector:(SEL)arg2 originalClass:(Class)arg3 forNewMethod:(struct objc_method *)arg4 newSelector:(SEL)arg5 newClass:(Class)arg6;	// IMP=0x00100000000055e4
+ (void)_swapInstanceMethod:(SEL)arg1 originalClass:(Class)arg2 forNewInstanceMethod:(SEL)arg3 newClass:(Class)arg4;	// IMP=0x001000000000557e
+ (void)_swapClassMethod:(SEL)arg1 originalClass:(Class)arg2 forNewClassMethod:(SEL)arg3 newClass:(Class)arg4;	// IMP=0x00100000000054f9
+ (void)_setupEnvironmentForAssignStudentScreenTest;	// IMP=0x0010000000005455
+ (void)_setupEnvironmentForAppleIDScreenTest;	// IMP=0x001000000000536e
+ (void)_setupEnvironmentForClassScreenTest;	// IMP=0x00100000000052ca
+ (void)_setupEnvironmentForRecentUserScreenTest;	// IMP=0x00100000000051df
+ (void)_setupWIFIPicker;	// IMP=0x0010000000005180
+ (void)_setupFooterNote;	// IMP=0x0010000000005091
+ (void)_setupFastLaunch;	// IMP=0x0010000000005036
+ (void)setupTestEnvironmentIfNeeded;	// IMP=0x0010000000004bc9
+ (void)_hackCanShowWhileLockedMethodIfNeeded;	// IMP=0x0010000000004aad
+ (void)initialize;	// IMP=0x0010000000004a94
+ (void)load;	// IMP=0x0010000000004a7b
- (void).cxx_destruct;	// IMP=0x001000000001c736
@property(retain, nonatomic) LUIUserSwitchTestOngoingIndicatorController *testOngoingIndicatorController; // @synthesize testOngoingIndicatorController=_testOngoingIndicatorController;
@property _Bool logindAcceptedOurConnection; // @synthesize logindAcceptedOurConnection=_logindAcceptedOurConnection;
@property(retain) NSXPCConnection *connectionToLoginD; // @synthesize connectionToLoginD=_connectionToLoginD;
@property(retain, nonatomic) LUILogViewerController *logViewerVC; // @synthesize logViewerVC=_logViewerVC;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)logViewerControllerDidCloseLogViewer:(id)arg1;	// IMP=0x001000000001c5f8
- (void)logViewerControllerDidOpenLogViewer:(id)arg1;	// IMP=0x001000000001c597
- (void)_setupLogViewerIfNeeded;	// IMP=0x001000000001c4ba
- (void)menuButtonLongPressed;	// IMP=0x001000000001c42d
- (void)idleTimerFired;	// IMP=0x001000000001c1f8
- (void)menuButtonPressed;	// IMP=0x001000000001c16b
- (void)observeLockButtonDoubleTapEvent;	// IMP=0x001000000001c072
- (void)observeHomeButtonLongPressNotification;	// IMP=0x001000000001bfad
- (void)observeHomeButtonDoubleTapNotification;	// IMP=0x001000000001bf0d
- (void)endObservingHomeButtonDoubleTapNotification;	// IMP=0x001000000001be74
- (void)userListDidUpdate;	// IMP=0x001000000001bdc5
- (void)bluetoothPowerStatusChanged:(id)arg1;	// IMP=0x001000000001bd81
- (void)enableBluetooth;	// IMP=0x001000000001bce6
- (void)clearPasteboard;	// IMP=0x001000000001bc91
- (void)disableAirplaneMode;	// IMP=0x001000000001bbe2
- (void)enableWiFi;	// IMP=0x001000000001bb34
- (void)_fetchConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ba8c
- (void)fetchConfiguration;	// IMP=0x001000000001b1d7
- (void)saveClassConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001af04
- (void)programmaticallyAuthenticateWithUser:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001adc0
- (void)loginAppleID:(id)arg1 password:(id)arg2 localLoginOnly:(_Bool)arg3 isTemporarySession:(_Bool)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001ac90
- (void)chooseUserWithIdentifier:(id)arg1 inClassWithID:(id)arg2 password:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001a9d1
- (void)hideUserSwitchTestOngoingIndicator;	// IMP=0x001000000001a919
- (void)presentUserSwitchTestOngoingIndicatorWithCancelAction:(CDUnknownBlockType)arg1;	// IMP=0x001000000001a777
- (void)presentUserSwitchTestDonePopup;	// IMP=0x001000000001a6e0
- (void)checkedInWithLoginD;	// IMP=0x001000000001a6c9
- (void)checkInWithLoginD;	// IMP=0x001000000001a5c3
- (void)_connectToLoginD;	// IMP=0x001000000001a27c
- (void)fetchAllPhotosForUsers:(id)arg1;	// IMP=0x001000000001a17c
- (void)newClassRosterReceived:(id)arg1;	// IMP=0x0010000000019f55
- (void)readCachedClassRoster;	// IMP=0x0010000000019d8e
- (void)presentUserLoginViewControllerForUserInfo:(id)arg1 inClass:(id)arg2;	// IMP=0x0010000000019ccb
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0010000000019cc5
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0010000000019cbf
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0010000000019cb9
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0010000000019cb3
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0010000000019cad
- (void)deleteAnyAccountsWeShould;	// IMP=0x00100000000199bd
- (void)generateLoginUserView;	// IMP=0x0010000000019834
- (void)_initializeLoginWindow;	// IMP=0x00100000000195ae
- (void)dealloc;	// IMP=0x00100000000194ec
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00100000000190d1
- (void)_test_setupLogViewerIfNeeded_appleIDScreen;	// IMP=0x00100000000061ad
- (void)_cleanUpEverything;	// IMP=0x0010000000006018
- (void)_test_applicationDidBecomeActive:(id)arg1;	// IMP=0x0010000000005ef3
- (id);	// IMP=0x0010000000005e68
- (id)_test_deviceLockScreenFootnote_footerNote;	// IMP=0x0010000000005ddd
- (id)_test_recentUsers_recentUserScreen;	// IMP=0x0010000000005c06
- (void)_test_consumeSinglePressUpForButtonKind_wifiPicker;	// IMP=0x0010000000005bb6
- (void)_test_fetchConfiguration_appleIDScreen:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005ba4
- (long long)_test_homeButtonType_assignStudentScreen;	// IMP=0x0010000000005b99
- (void)_test_fetchConfiguration_assignStudentScreen:(CDUnknownBlockType)arg1;	// IMP=0x00100000000058bf
- (void)_test_fetchConfiguration_classScreen:(CDUnknownBlockType)arg1;	// IMP=0x00100000000057b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
