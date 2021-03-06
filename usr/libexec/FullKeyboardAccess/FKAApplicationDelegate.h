//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUIUtilities/AXUIDaemonApplicationDelegate.h>

@class AXElementActionManager, AXNotificationObserver, AXSSEventManager, AXUIBannerPresenter, FKAActionManager, FKACommandsViewController, FKAEventTap, FKARootViewController, FKATypeaheadNamesViewController, FKATypeaheadViewController, NSDate, NSString, NSTimer, UIWindow;

@interface FKAApplicationDelegate : AXUIDaemonApplicationDelegate
{
    AXElementActionManager *_elementActionManager;	// 8 = 0x8
    UIWindow *_nonInteractiveWindow;	// 16 = 0x10
    _Bool _gesturesModeEnabled;	// 24 = 0x18
    _Bool _passthroughModeEnabled;	// 25 = 0x19
    _Bool _shouldIgnoreNextScreenChange;	// 26 = 0x1a
    _Bool _isShowingTextEditingModeInstructions;	// 27 = 0x1b
    FKAEventTap *_eventTap;	// 32 = 0x20
    AXSSEventManager *_eventManager;	// 40 = 0x28
    FKATypeaheadViewController *_typeaheadController;	// 48 = 0x30
    FKATypeaheadNamesViewController *_typeaheadNamesViewController;	// 56 = 0x38
    FKACommandsViewController *_commandsViewController;	// 64 = 0x40
    AXUIBannerPresenter *_bannerPresenter;	// 72 = 0x48
    AXUIBannerPresenter *_debugBannerPresenter;	// 80 = 0x50
    NSString *_gesturesModeKeyChordsIdentifier;	// 88 = 0x58
    AXNotificationObserver *_axNotificationObserver;	// 96 = 0x60
    id _availableCommandsUpdateToken;	// 104 = 0x68
    NSDate *_lastWakeDeviceDate;	// 112 = 0x70
    NSTimer *_typeaheadStartTimer;	// 120 = 0x78
    NSTimer *_debugDisplayTimer;	// 128 = 0x80
}

+ (id)featureEnabledStatusDidChangeNotification;	// IMP=0x0020000000011f0e
+ (_Bool)isFeatureEnabled;	// IMP=0x0010000000011efe
+ (id)debugFeatureName;	// IMP=0x0010000000011ef1
+ (id)loggingFacility;	// IMP=0x0010000000011ee7
- (void).cxx_destruct;	// IMP=0x0020000000017602
@property(retain, nonatomic) NSTimer *debugDisplayTimer; // @synthesize debugDisplayTimer=_debugDisplayTimer;
@property(retain, nonatomic) NSTimer *typeaheadStartTimer; // @synthesize typeaheadStartTimer=_typeaheadStartTimer;
@property(nonatomic) _Bool isShowingTextEditingModeInstructions; // @synthesize isShowingTextEditingModeInstructions=_isShowingTextEditingModeInstructions;
@property(nonatomic) _Bool shouldIgnoreNextScreenChange; // @synthesize shouldIgnoreNextScreenChange=_shouldIgnoreNextScreenChange;
@property(retain, nonatomic) NSDate *lastWakeDeviceDate; // @synthesize lastWakeDeviceDate=_lastWakeDeviceDate;
@property(retain, nonatomic) id availableCommandsUpdateToken; // @synthesize availableCommandsUpdateToken=_availableCommandsUpdateToken;
@property(retain, nonatomic) AXNotificationObserver *axNotificationObserver; // @synthesize axNotificationObserver=_axNotificationObserver;
@property(copy, nonatomic) NSString *gesturesModeKeyChordsIdentifier; // @synthesize gesturesModeKeyChordsIdentifier=_gesturesModeKeyChordsIdentifier;
@property(nonatomic, getter=isPassthroughModeEnabled) _Bool passthroughModeEnabled; // @synthesize passthroughModeEnabled=_passthroughModeEnabled;
@property(nonatomic, getter=isGesturesModeEnabled) _Bool gesturesModeEnabled; // @synthesize gesturesModeEnabled=_gesturesModeEnabled;
@property(retain, nonatomic) AXUIBannerPresenter *debugBannerPresenter; // @synthesize debugBannerPresenter=_debugBannerPresenter;
@property(retain, nonatomic) AXUIBannerPresenter *bannerPresenter; // @synthesize bannerPresenter=_bannerPresenter;
@property(retain, nonatomic) FKACommandsViewController *commandsViewController; // @synthesize commandsViewController=_commandsViewController;
@property(retain, nonatomic) FKATypeaheadNamesViewController *typeaheadNamesViewController; // @synthesize typeaheadNamesViewController=_typeaheadNamesViewController;
@property(retain, nonatomic) FKATypeaheadViewController *typeaheadController; // @synthesize typeaheadController=_typeaheadController;
@property(readonly, nonatomic) AXSSEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(retain, nonatomic) FKAEventTap *eventTap; // @synthesize eventTap=_eventTap;
- (void)_announceCommandList:(id)arg1;	// IMP=0x0010000000017156
- (void)_dismissTextEditingModeInstructionsIfNeeded;	// IMP=0x0010000000017095
- (id)_keyChordForExitingTextMode;	// IMP=0x0010000000016fb0
- (void)_didUpdateFocusRingTimeout;	// IMP=0x0010000000016f25
- (void)_didUpdateAvailableCommandsWithUpdatedMap:(id)arg1;	// IMP=0x0010000000016e44
- (_Bool)_canEnableFocusRingCheckingSystemSleepingState:(_Bool)arg1;	// IMP=0x0010000000016cbc
- (void)_cancelFocusRingTimeout;	// IMP=0x0010000000016c96
- (void)_resetFocusRingTimeout;	// IMP=0x0010000000016bff
- (void)_disableFocusRingForTimeout;	// IMP=0x0010000000016b83
- (void)_disableFocusRing;	// IMP=0x0010000000016b2a
- (void)_enableFocusRingWithTimeout;	// IMP=0x0010000000016ab9
- (void)_enableFocusRingIfNecessary;	// IMP=0x0010000000016aa2
- (void)_enableFocusRingIfNecessaryCheckingSystemSleepingState:(_Bool)arg1;	// IMP=0x0010000000016a64
- (void)observer:(id)arg1 didObserveNotification:(int)arg2 notificationData:(const void *)arg3;	// IMP=0x0010000000016874
- (void)_handleScreenChange;	// IMP=0x001000000001682e
- (void)_handleUpdatedElementsForScreenChange:(_Bool)arg1;	// IMP=0x00100000000167a9
- (_Bool)_dismissActionsControllerByForce:(_Bool)arg1;	// IMP=0x0010000000016634
- (_Bool)_areActionsValidForElement:(id)arg1;	// IMP=0x00100000000165d6
- (void)_showActionsForElement:(id)arg1;	// IMP=0x0010000000015ff2
- (void)_addTransientCommandsForGesturesMode;	// IMP=0x0010000000014d1a
- (_Bool)_canPerform3DTouchCommand;	// IMP=0x0010000000014d10
- (void)_showDebugBannerText:(id)arg1;	// IMP=0x0010000000014bfe
- (void)_showBannerWithText:(id)arg1 andSecondaryText:(id)arg2 orCustomView:(id)arg3 isSticky:(_Bool)arg4 fromUserAction:(_Bool)arg5;	// IMP=0x00100000000149de
- (void)_showBannerWithCustomView:(id)arg1 isSticky:(_Bool)arg2;	// IMP=0x00100000000149b2
- (void)_showBannerWithText:(id)arg1 secondaryText:(id)arg2 isSticky:(_Bool)arg3 fromUserAction:(_Bool)arg4;	// IMP=0x001000000001498a
- (void)_showBannerWithText:(id)arg1;	// IMP=0x0010000000014960
@property(readonly, nonatomic) FKARootViewController *nonInteractiveRootViewController;
@property(readonly, nonatomic) FKARootViewController *rootViewController;
- (id)_sceneDelegateForExternalDisplay:(_Bool)arg1;	// IMP=0x00100000000144c3
@property(readonly, nonatomic) UIWindow *nonInteractiveWindow;
- (void)_didUpdateHardwareKeyboardAttachedStatus;	// IMP=0x00100000000143b8
- (void)eventManager:(id)arg1 repostEvent:(id)arg2;	// IMP=0x0010000000014346
- (_Bool)eventManager:(id)arg1 shouldRepostEvent:(id)arg2;	// IMP=0x0010000000013e52
- (void)willDismissFloatingViewForPresenter:(id)arg1;	// IMP=0x0010000000013d6f
- (void)_updateTypeaheadNamesViewControllerItemsForQueryString:(id)arg1;	// IMP=0x0010000000013859
- (void)_updateTypeaheadNamesViewControllerItems;	// IMP=0x00100000000137ea
- (void)_hideTypeaheadNames;	// IMP=0x001000000001372c
- (void)_showTypeaheadNames;	// IMP=0x0010000000013648
- (void)typeaheadViewControllerDidTypeReturn:(id)arg1;	// IMP=0x00100000000135fb
- (void)typeaheadViewControllerWillDismiss:(id)arg1;	// IMP=0x0010000000013575
- (void)typeaheadViewControllerWillAppear:(id)arg1;	// IMP=0x0010000000013528
- (void)typeaheadViewController:(id)arg1 didChangeQueryString:(id)arg2;	// IMP=0x00100000000132a9
- (void)didMoveToInnerElementForActionManager:(id)arg1;	// IMP=0x00100000000131f4
- (void)didExitTextEditingModeForActionManager:(id)arg1;	// IMP=0x00100000000131e2
- (void)didToggleNotificationCenterForActionManager:(id)arg1;	// IMP=0x0010000000013161
- (_Bool)canMoveApplicationFocusForActionManager:(id)arg1;	// IMP=0x001000000001311e
- (void)didSuppressCommandForActionManager:(id)arg1;	// IMP=0x00100000000130ee
- (_Bool)actionManagerCanAvoidRepostingTextInput:(id)arg1;	// IMP=0x00100000000130a6
- (void)wakeDeviceIfNeededForActionManager:(id)arg1;	// IMP=0x0010000000013094
- (void)_wakeDeviceIfNeeded;	// IMP=0x0010000000012f90
- (_Bool)dismissHelpForActionManager:(id)arg1;	// IMP=0x0010000000012ef0
- (void)showDebugDisplayWithKeyChord:(id)arg1;	// IMP=0x0010000000012e41
- (void)showDebugDisplay:(id)arg1;	// IMP=0x0010000000012d5f
- (void)showHelpForActionManager:(id)arg1;	// IMP=0x0010000000012c4a
- (void)actionManager:(id)arg1 displaySysdiagnoseStatus:(id)arg2;	// IMP=0x0010000000012c35
- (void)togglePassthroughModeForActionManager:(id)arg1;	// IMP=0x0010000000012c02
- (void)toggleGesturesModeForActionManager:(id)arg1;	// IMP=0x0010000000012bcf
- (void)_hideTypeaheadSynchronously;	// IMP=0x00100000000129a5
- (void)hideTypeaheadSynchronouslyForActionManager:(id)arg1;	// IMP=0x0010000000012993
- (void)toggleTypeaheadForActionManager:(id)arg1;	// IMP=0x001000000001279b
- (void)actionManager:(id)arg1 showActionsForElement:(id)arg2;	// IMP=0x00100000000125ac
- (void)eventTap:(id)arg1 handleKeyboardEvent:(id)arg2;	// IMP=0x001000000001231b
- (void)_setupEngineeringUI;	// IMP=0x00100000000122b2
- (void)willTerminate;	// IMP=0x0010000000012236
- (void)_setupUI;	// IMP=0x0010000000011fa9
- (void)didFinishLaunching;	// IMP=0x0010000000011f22
@property(readonly, nonatomic) AXElementActionManager *elementActionManager;
@property(readonly, nonatomic) FKAActionManager *actionManager;
- (void)setUpNonInteractiveUIForRootViewController:(id)arg1;	// IMP=0x0010000000011cec
- (void)dealloc;	// IMP=0x0010000000011c6f
- (id)init;	// IMP=0x00100000000115ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

