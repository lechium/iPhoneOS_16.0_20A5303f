//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class FCAMSPushHandler, FCAccountActionQueue, FCCloudContext, FCFeedManager, FRAppActivityMonitor, FRApplicationUpdateNotifier, FRBackgroundFetchManager, FRFlintDataProviderFactory, FRFlintEmbedConfigurationManager, FRNotificationManager, FRPrivateDataUpdateCoordinator, FRTodayAgent, NSArray, NSString, NSTimer, TFBridgedContainer, TSAppDelegate, TSLocalDraftsDeviceManager, TUKeyboardInputMonitor, UIAlertController, UIWindow;
@protocol FRActivityErrorHandler, FRFeldsparContext, FRURLRouterManagerType, TFResolver, TSBackgroundFetchScheduler;

@interface FRAppDelegate : UIResponder
{
    int lockStateToken;	// 8 = 0x8
    _Bool _inPreviewMode;	// 12 = 0xc
    _Bool _appOpenedByUserActivity;	// 13 = 0xd
    _Bool _isDeviceLocked;	// 14 = 0xe
    id <TFResolver> _resolver;	// 16 = 0x10
    id <FRFeldsparContext> _feldsparContext;	// 24 = 0x18
    FRPrivateDataUpdateCoordinator *_privateDataUpdateCoordinator;	// 32 = 0x20
    FRAppActivityMonitor *_activityMonitor;	// 40 = 0x28
    FRNotificationManager *_notificationManager;	// 48 = 0x30
    NSArray *_bundleAssemblies;	// 56 = 0x38
    NSArray *_assemblies;	// 64 = 0x40
    TFBridgedContainer *_bridgedContainer;	// 72 = 0x48
    NSTimer *_handoffStreamsTimer;	// 80 = 0x50
    FCAccountActionQueue *_accountActionQueue;	// 88 = 0x58
    TUKeyboardInputMonitor *_keyboardInputMonitor;	// 96 = 0x60
    TSAppDelegate *_bridgedAppDelegate;	// 104 = 0x68
    FCCloudContext *_cloudContext;	// 112 = 0x70
    FRFlintDataProviderFactory *_dataProviderFactory;	// 120 = 0x78
    FRFlintEmbedConfigurationManager *_embedConfigurationManager;	// 128 = 0x80
    id <FRURLRouterManagerType> _urlRouterManager;	// 136 = 0x88
    id <TSBackgroundFetchScheduler> _backgroundFetchScheduler;	// 144 = 0x90
    UIAlertController *_pinAlertController;	// 152 = 0x98
    FRTodayAgent *_todayAgent;	// 160 = 0xa0
    FCFeedManager *_feedManager;	// 168 = 0xa8
    FRBackgroundFetchManager *_backgroundFetchManager;	// 176 = 0xb0
    FCAMSPushHandler *_amsPushHandler;	// 184 = 0xb8
    FRApplicationUpdateNotifier *_applicationUpdateNotifier;	// 192 = 0xc0
    id <FRActivityErrorHandler> _activityErrorHandler;	// 200 = 0xc8
    TSLocalDraftsDeviceManager *_deviceManager;	// 208 = 0xd0
}

+ (_Bool)shouldHideHeadline:(id)arg1;	// IMP=0x00200000000c2ba4
+ (id)sharedDelegate;	// IMP=0x00100000000c1a97
+ (id)stateRestorationURL;	// IMP=0x00100000000c1a44
+ (void)registerDefaults;	// IMP=0x001000000007089c
- (void).cxx_destruct;	// IMP=0x00100000000c622e
@property(retain, nonatomic) TSLocalDraftsDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) id <FRActivityErrorHandler> activityErrorHandler; // @synthesize activityErrorHandler=_activityErrorHandler;
@property(retain, nonatomic) FRApplicationUpdateNotifier *applicationUpdateNotifier; // @synthesize applicationUpdateNotifier=_applicationUpdateNotifier;
@property(retain, nonatomic) FCAMSPushHandler *amsPushHandler; // @synthesize amsPushHandler=_amsPushHandler;
@property(nonatomic) _Bool isDeviceLocked; // @synthesize isDeviceLocked=_isDeviceLocked;
@property(retain, nonatomic) FRBackgroundFetchManager *backgroundFetchManager; // @synthesize backgroundFetchManager=_backgroundFetchManager;
@property(retain, nonatomic) FCFeedManager *feedManager; // @synthesize feedManager=_feedManager;
@property(retain, nonatomic) FRTodayAgent *todayAgent; // @synthesize todayAgent=_todayAgent;
@property(retain, nonatomic) UIAlertController *pinAlertController; // @synthesize pinAlertController=_pinAlertController;
@property(retain, nonatomic) id <TSBackgroundFetchScheduler> backgroundFetchScheduler; // @synthesize backgroundFetchScheduler=_backgroundFetchScheduler;
@property(retain, nonatomic) id <FRURLRouterManagerType> urlRouterManager; // @synthesize urlRouterManager=_urlRouterManager;
@property(retain, nonatomic) FRFlintEmbedConfigurationManager *embedConfigurationManager; // @synthesize embedConfigurationManager=_embedConfigurationManager;
@property(retain, nonatomic) FRFlintDataProviderFactory *dataProviderFactory; // @synthesize dataProviderFactory=_dataProviderFactory;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) TSAppDelegate *bridgedAppDelegate; // @synthesize bridgedAppDelegate=_bridgedAppDelegate;
@property(retain, nonatomic) TUKeyboardInputMonitor *keyboardInputMonitor; // @synthesize keyboardInputMonitor=_keyboardInputMonitor;
@property(retain, nonatomic) FCAccountActionQueue *accountActionQueue; // @synthesize accountActionQueue=_accountActionQueue;
@property(retain, nonatomic) NSTimer *handoffStreamsTimer; // @synthesize handoffStreamsTimer=_handoffStreamsTimer;
@property(retain, nonatomic) TFBridgedContainer *bridgedContainer; // @synthesize bridgedContainer=_bridgedContainer;
@property(retain, nonatomic) NSArray *assemblies; // @synthesize assemblies=_assemblies;
@property(retain, nonatomic) NSArray *bundleAssemblies; // @synthesize bundleAssemblies=_bundleAssemblies;
@property(retain, nonatomic) FRNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(nonatomic) _Bool appOpenedByUserActivity; // @synthesize appOpenedByUserActivity=_appOpenedByUserActivity;
@property(nonatomic) _Bool inPreviewMode; // @synthesize inPreviewMode=_inPreviewMode;
@property(retain, nonatomic) FRAppActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
@property(retain, nonatomic) FRPrivateDataUpdateCoordinator *privateDataUpdateCoordinator; // @synthesize privateDataUpdateCoordinator=_privateDataUpdateCoordinator;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(retain, nonatomic) id <TFResolver> resolver; // @synthesize resolver=_resolver;
- (void)_disableLoggingForUnsupportedControls;	// IMP=0x00100000000c5e3c
- (double)_timeSinceLastActivation;	// IMP=0x00100000000c5d80
- (_Bool)safeIsAppRunningInBackground;	// IMP=0x00100000000c5b8f
- (void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;	// IMP=0x00100000000c5b7a
- (void)_configureBackgroundFetch;	// IMP=0x00100000000c599b
- (void)_updateBackgroundFetchSettingsWithAppConfiguration:(id)arg1;	// IMP=0x00100000000c58a4
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c52ad
- (id)gizmoSyncManager:(id)arg1 fetchOperationForArticleIDs:(id)arg2;	// IMP=0x00100000000c51de
- (void)activityObservingApplicationWindowDidBecomeBackground;	// IMP=0x00100000000c51d8
- (void)activityObservingApplicationWindowDidBecomeForeground;	// IMP=0x00100000000c51d2
- (void)notificationManagerFailedToHandleRemoteNotification:(id)arg1 reason:(id)arg2;	// IMP=0x00100000000c51cc
- (void)notificationManagerDidHandleNotificationResponse:(id)arg1 withAnalyticsReferral:(id)arg2;	// IMP=0x00100000000c515a
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c3ec4
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;	// IMP=0x00100000000c3d52
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;	// IMP=0x00100000000c3af2
- (int)fcDigestModeFromScheduledDeliverySetting:(long long)arg1;	// IMP=0x00100000000c3ad7
- (void)setupNotificationManagerWithFeldsparContext:(id *)arg1 state:(long long)arg2 launchOptions:(id)arg3;	// IMP=0x00100000000c3973
- (void)unregisterForDeviceLockNotifications;	// IMP=0x00100000000c392e
- (void)registerForDeviceLockNotifications;	// IMP=0x00100000000c371c
- (void)sceneDidBecomeActive;	// IMP=0x00100000000c329e
- (void)sceneWillEnterForeground;	// IMP=0x00100000000c2f9f
- (void)sceneDidEnterBackground;	// IMP=0x00100000000c2efe
- (void)_application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00100000000c2c5b
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00100000000c27c4
- (void)application:(id)arg1 didSendEvent:(id)arg2;	// IMP=0x00100000000c2752
- (void)_didResumeLowPriorityTasks;	// IMP=0x00100000000c2400
- (void)_didCommitFirstFrame;	// IMP=0x00100000000c20bb
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000000c203e
- (void)validateCommand:(id)arg1;	// IMP=0x00100000000c1fcc
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x00100000000c1f5a
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00100000000c1efb
- (void)application:(id)arg1 handleIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c1e66
- (void)showAppUnsupportedAlert;	// IMP=0x00100000000c1c83
- (void)hideAlert:(id)arg1;	// IMP=0x00100000000c1c7d
- (void)showAlertWithPin:(id)arg1 pin:(id)arg2;	// IMP=0x00100000000c1c77
- (void)localDraftsDeviceOnPreview:(id)arg1 articleIdentifier:(id)arg2 channelIdentifier:(id)arg3;	// IMP=0x00100000000c1c71
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x00100000000c1bbe
- (void)dealloc;	// IMP=0x00100000000c1b80
- (id)init;	// IMP=0x00100000000c1b23
- (void)removeTopStoriesAndEditorPicksIfNeeded;	// IMP=0x00100000000727bf
- (id)_extractWidgetEngagementFromReferralURL:(id)arg1;	// IMP=0x00100000000726a3
- (id)setupAnalyticsReferralWithOptions:(id)arg1;	// IMP=0x00100000000722e0
- (void)setupAnalyticsControllerWithFeldpsarContext:(id *)arg1 personalizationDataSource:(id)arg2 versionHelpers:(id)arg3 referral:(id)arg4;	// IMP=0x0010000000071f7a
- (void)setupCloudContextWithPersonalizationDataSource:(id)arg1 state:(long long)arg2 launchOptions:(id)arg3 versionHelpers:(id)arg4 referral:(id)arg5;	// IMP=0x0010000000071a5c
- (void)setupCloudContextWithDataActionProvider:(id)arg1 versionHelpers:(id)arg2 configurationManager:(id)arg3 networkBehaviorMonitor:(id)arg4;	// IMP=0x00100000000713a0
- (void)clearOldCacheItems;	// IMP=0x0010000000070ab4
- (void)prepareAppCacheSnapShot;	// IMP=0x0010000000070a54
- (void)prewarmAd;	// IMP=0x0010000000070a4e
- (id)setupDestructiveDataAction;	// IMP=0x00100000000705f0
- (void)setupLanguages;	// IMP=0x0010000000070417
- (void)setupUserDefaultsForPPT;	// IMP=0x001000000007032e
- (void)setRunningPPTWithApplication:(id)arg1;	// IMP=0x0010000000070153
- (void)scheduleTasksWithOptions:(id)arg1;	// IMP=0x00100000000700b5
- (double)_timeSinceLastActivation;	// IMP=0x001000000006fff6
- (void)resolveAppSingletons;	// IMP=0x001000000006f7ab
- (id)createCarPlaySceneResolver;	// IMP=0x001000000006ef47
- (id)createSceneResolver;	// IMP=0x001000000006eef7
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000006df8e
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000006dd02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

