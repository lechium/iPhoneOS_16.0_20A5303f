//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNCapabilitiesManager, CNUIUserActivityRestorer, CNUserActivityRestorerDelegate, CNVCardImportController, ContactsSplitViewController, NSBundle, NSMutableArray, NSString, NSUserActivity, UIApplication, UIWindow;
@protocol CNSchedulerProvider;

@interface ContactsSceneDelegate : NSObject
{
    _Bool _didExecuteSceneInitializationTasks;	// 8 = 0x8
    UIApplication *_application;	// 16 = 0x10
    CNCapabilitiesManager *_capabilitiesManager;	// 24 = 0x18
    NSBundle *_mainBundle;	// 32 = 0x20
    id <CNSchedulerProvider> _schedulerProvider;	// 40 = 0x28
    ContactsSplitViewController *_splitViewController;	// 48 = 0x30
    CNUIUserActivityRestorer *_activityRestorer;	// 56 = 0x38
    CNUserActivityRestorerDelegate *_activityRestorerDelegate;	// 64 = 0x40
    CNVCardImportController *_vCardImportController;	// 72 = 0x48
    NSBundle *_bundle;	// 80 = 0x50
    NSUserActivity *_viewingContactActivityForRestoration;	// 88 = 0x58
    UIWindow *_sceneWindow;	// 96 = 0x60
    NSMutableArray *_actionsDelayedUntilSceneInitialization;	// 104 = 0x68
}

+ (id)log;	// IMP=0x002000000000a3aa
- (void).cxx_destruct;	// IMP=0x002000000000cae0
@property(readonly, nonatomic) NSMutableArray *actionsDelayedUntilSceneInitialization; // @synthesize actionsDelayedUntilSceneInitialization=_actionsDelayedUntilSceneInitialization;
@property(nonatomic) _Bool didExecuteSceneInitializationTasks; // @synthesize didExecuteSceneInitializationTasks=_didExecuteSceneInitializationTasks;
@property(retain, nonatomic) UIWindow *sceneWindow; // @synthesize sceneWindow=_sceneWindow;
@property(retain, nonatomic) NSUserActivity *viewingContactActivityForRestoration; // @synthesize viewingContactActivityForRestoration=_viewingContactActivityForRestoration;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) CNVCardImportController *vCardImportController; // @synthesize vCardImportController=_vCardImportController;
@property(readonly, nonatomic) CNUserActivityRestorerDelegate *activityRestorerDelegate; // @synthesize activityRestorerDelegate=_activityRestorerDelegate;
@property(readonly, nonatomic) CNUIUserActivityRestorer *activityRestorer; // @synthesize activityRestorer=_activityRestorer;
@property(readonly, nonatomic) ContactsSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) NSBundle *mainBundle; // @synthesize mainBundle=_mainBundle;
@property(readonly, nonatomic) CNCapabilitiesManager *capabilitiesManager; // @synthesize capabilitiesManager=_capabilitiesManager;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
- (void)vCardImportController:(id)arg1 didSaveContacts:(id)arg2;	// IMP=0x001000000000c9e5
- (void)vCardImportController:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000000c8f4
- (_Bool)showContactWithLegacyIdentifier:(int)arg1;	// IMP=0x001000000000c6ac
- (_Bool)showContactWithIdentifier:(id)arg1;	// IMP=0x001000000000c479
- (void)showContact:(id)arg1;	// IMP=0x001000000000c350
- (void)showNewContact;	// IMP=0x001000000000c2c3
- (_Bool)showMeContact;	// IMP=0x001000000000c1ec
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x001000000000c135
- (id)showMeCardShortcutItem;	// IMP=0x001000000000bfbc
- (_Bool)openContactsURL:(id)arg1;	// IMP=0x001000000000bd2c
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x001000000000bc93
- (void)scene:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;	// IMP=0x001000000000bc21
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;	// IMP=0x001000000000bbaf
- (void)scene:(id)arg1 willContinueUserActivityWithType:(id)arg2;	// IMP=0x001000000000bb3d
- (id)stateRestorationActivityForScene:(id)arg1;	// IMP=0x001000000000b9cd
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b9b5
- (void)executeActionDelayedUntilSceneInitialization:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b901
- (void)executeAllDelayedActions;	// IMP=0x001000000000b86e
- (void)createShowMeCardApplicationShortcutIfNecessary;	// IMP=0x001000000000b6e5
- (void)performMigrationOfFacebookContactsToLocalStoreIfNecessary;	// IMP=0x001000000000b66e
- (void)displayContactIfNecessary;	// IMP=0x001000000000b489
- (void)checkInLaunchTasksIfNecessary;	// IMP=0x001000000000b314
- (_Bool)splitViewControllerIsDisplayingList;	// IMP=0x001000000000b24a
- (void)executeSceneInitializationTasksOnce:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b1f8
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x001000000000b0c1
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x001000000000b07f
- (id)contactStoreDataSource;	// IMP=0x001000000000afd0
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x001000000000af0b
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x001000000000aeac
- (void)executeShortcutIfNecessary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ad90
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x001000000000a7a2
- (id)initWithApplication:(id)arg1 capabilitiesManager:(id)arg2 schedulerProvider:(id)arg3;	// IMP=0x001000000000a4de
- (id)init;	// IMP=0x001000000000a406

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

