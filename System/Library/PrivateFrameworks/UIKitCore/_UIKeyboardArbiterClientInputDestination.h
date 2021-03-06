//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSString, UIScreen, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterClientInputDestination
{
    _Bool _deactivatedBySystemAnimation;	// 24 = 0x18
    _Bool _resignActiveByControlCenter;	// 25 = 0x19
    _Bool _hadFocusBeforeOverlay;	// 26 = 0x1a
    UIWindowScene *_suppressedScene;	// 32 = 0x20
    int _hostedCount;	// 40 = 0x28
    UIScreen *_lastScreen;	// 48 = 0x30
    _Bool _resigningByOtherApp;	// 56 = 0x38
    _Bool _updatingKeyWindow;	// 57 = 0x39
    NSString *_focusedSceneIdentityStringOrIdentifier;	// 64 = 0x40
    NSMutableSet *_pendingKeyboardGrabs;	// 72 = 0x48
    NSMutableSet *_activePIDs;	// 80 = 0x50
}

+ (id)currentBundleIdentifier;	// IMP=0x00600000014a9ec6
- (void).cxx_destruct;	// IMP=0x00000000014b102c
@property(nonatomic) _Bool updatingKeyWindow; // @synthesize updatingKeyWindow=_updatingKeyWindow;
@property(retain, nonatomic) NSMutableSet *activePIDs; // @synthesize activePIDs=_activePIDs;
@property(retain, nonatomic) NSMutableSet *pendingKeyboardGrabs; // @synthesize pendingKeyboardGrabs=_pendingKeyboardGrabs;
@property(copy, nonatomic) NSString *focusedSceneIdentityStringOrIdentifier; // @synthesize focusedSceneIdentityStringOrIdentifier=_focusedSceneIdentityStringOrIdentifier;
- (void)queue_sceneBecameFocused:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000014b09ed
- (void)queue_setKeyboardDisabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000014b08ee
- (void)queue_activeProcessResignWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000014b07e2
- (void)queue_keyboardUIDidChange:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x00000000014b021f
- (void)handleKeyboardUIDidChange:(id)arg1;	// IMP=0x00000000014afd14
- (void)handleKeyboardUITrackingChange:(id)arg1;	// IMP=0x00000000014af83a
- (void)queue_keyboardChanged:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x00000000014af212
- (void)peekApplicationEvent:(id)arg1;	// IMP=0x00000000014aec3f
- (_Bool)_sceneFocusUpdatePermittedForWindow:(id)arg1;	// IMP=0x00000000014ae7dc
- (_Bool)_sceneFocusPermittedForApplication;	// IMP=0x00000000014ae799
- (void)userSelectedApp:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000014ae22c
- (void)completeMoveKeyboard;	// IMP=0x00000000014ae1c8
- (void)updateWindowState;	// IMP=0x00000000014ae195
- (void)setWindowEnabled:(_Bool)arg1 force:(_Bool)arg2;	// IMP=0x00000000014adf5e
- (void)setWindowEnabled:(_Bool)arg1;	// IMP=0x00000000014adf4a
- (void)resignFirstResponderIfNeeded;	// IMP=0x00000000014add59
- (_Bool)allowedToShowKeyboard;	// IMP=0x00000000014add10
- (_Bool)needsToShowKeyboardForViewServiceHost;	// IMP=0x00000000014adcd7
- (_Bool)needsToShowKeyboard;	// IMP=0x00000000014adc9e
- (struct CGRect)keyboardFrameIncludingRemoteIAV;	// IMP=0x00000000014adc40
- (void)finishWithHostedWindow;	// IMP=0x00000000014adbeb
- (id)prepareForHostedWindowWithScene:(id)arg1;	// IMP=0x00000000014adb59
- (_Bool)wantsToShowKeyboardForViewServiceHost;	// IMP=0x00000000014adb47
- (_Bool)wantsToShowKeyboard;	// IMP=0x00000000014adac5
- (void)setWindowHostingPID:(int)arg1 active:(_Bool)arg2;	// IMP=0x00000000014ad97e
- (void)removeWindowHostingPID:(int)arg1;	// IMP=0x00000000014ad96a
- (void)addWindowHostingPID:(int)arg1;	// IMP=0x00000000014ad953
- (_Bool)hasWindowHostingPID:(int)arg1;	// IMP=0x00000000014ad8d8
- (_Bool)isHostedInAnotherProcess;	// IMP=0x00000000014ad843
- (void)applicationKeyWindowDidChange:(id)arg1;	// IMP=0x00000000014ad681
- (id)_activeScreen;	// IMP=0x00000000014ad5a3
- (unsigned long long)localSceneCount;	// IMP=0x00000000014ad410
- (void)signalToProxyKeyboardChanged:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000014ad2e9
- (_Bool)_didHandleKeyboardClientChange:(id)arg1 shouldConsiderSnapshottingKeyboard:(_Bool)arg2 isLocalEvent:(_Bool)arg3;	// IMP=0x00000000014ac5b0
- (void)_layoutKeyboardViews:(id)arg1;	// IMP=0x00000000014ac2a3
- (void)_preserveInputViewsForClientChange:(_Bool)arg1 snapshotIfNecessary:(_Bool)arg2;	// IMP=0x00000000014ac291
- (void)inputDestinationDidChange:(_Bool)arg1 withIAVHeight:(double)arg2 isIAVRelevant:(_Bool)arg3 notifyRemote:(_Bool)arg4 forScene:(id)arg5;	// IMP=0x00000000014ab8a6
- (_Bool)shouldIgnoreInputDestinationChange:(_Bool)arg1 withIAVHeight:(double)arg2;	// IMP=0x00000000014ab845
- (void)setSuppressingKeyboard:(_Bool)arg1 forScene:(id)arg2;	// IMP=0x00000000014ab2ef
- (void)didBecomeActive:(id)arg1;	// IMP=0x00000000014ab1ac
- (void)willResignActive:(id)arg1;	// IMP=0x00000000014ab08c
- (void)didRemoveDeactivationReason:(id)arg1;	// IMP=0x00000000014aadb4
- (void)willAddDeactivationReason:(id)arg1;	// IMP=0x00000000014aac11
- (void)didSuspend:(id)arg1;	// IMP=0x00000000014aa277
- (void)willResume:(id)arg1;	// IMP=0x00000000014a9f59
- (void)restorePreservedInputViewsIfNecessary;	// IMP=0x00000000014a9e84
- (_Bool)shouldSnapshot;	// IMP=0x00000000014a9e2b
- (void)setSnapshotting:(_Bool)arg1;	// IMP=0x00000000014a9c80
- (void)setCurrentClientState:(id)arg1;	// IMP=0x00000000014a9baa
- (void)didFailArbiterConnection;	// IMP=0x00000000014a9b67
- (void)configureArbiterCommunication:(id)arg1;	// IMP=0x00000000014a9a69
- (void)stopConnection;	// IMP=0x00000000014a9a28
- (void)startConnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000014a97dd
- (void)startConnection;	// IMP=0x00000000014a97c9
- (id)currentHostedPIDs;	// IMP=0x00000000014a9779
- (id)init;	// IMP=0x00000000014a95af

@end

