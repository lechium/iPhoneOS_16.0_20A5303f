//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPApplicationPolicyManager, CSDAudioController, CSDCallDirectoryManager, CSDCallStateController, CSDCallStateMonitor, CSDConversationProviderManager, CSDConversationProviderManagerXPCServer, CSDDeviceLockStateObserver, CSDHandoffAudioController, CSDMomentsController, CSDOrientationMonitor, CSDPowerAssertionManager, CSDProximityController, CSDProximitySensorObserver, CSDRaiseToAnswerController, CSDRelayClientController, CSDRelayCommonController, CSDRelayHostController, CSDRelayMessagingController, CSDStatusBarManager, CSDUserNotificationController, CSDVoIPApplicationController, CSDVoiceOverObserver, NSMutableArray, NSString, TUUserConfiguration;
@protocol OS_dispatch_queue, TUFeatureFlags;

@interface CSDDaemon : NSObject
{
    id <TUFeatureFlags> _featureFlags;	// 8 = 0x8
    CSDConversationProviderManagerXPCServer *_conversationProviderManagerXPCServer;	// 16 = 0x10
    CSDConversationProviderManager *_conversationProviderManager;	// 24 = 0x18
    CSDCallStateController *_callStateController;	// 32 = 0x20
    CSDCallStateMonitor *_callStateMonitor;	// 40 = 0x28
    CSDRelayMessagingController *_relayMessagingController;	// 48 = 0x30
    CSDRelayClientController *_relayClientController;	// 56 = 0x38
    CSDRelayHostController *_relayHostController;	// 64 = 0x40
    CSDRelayCommonController *_relayCommonController;	// 72 = 0x48
    CSDCallDirectoryManager *_callDirectoryManager;	// 80 = 0x50
    CSDVoIPApplicationController *_voipApplicationController;	// 88 = 0x58
    CSDMomentsController *_momentsController;	// 96 = 0x60
    TUUserConfiguration *_userConfiguration;	// 104 = 0x68
    CSDUserNotificationController *_userNotificationController;	// 112 = 0x70
    CSDVoiceOverObserver *_voiceOverObserver;	// 120 = 0x78
    NSMutableArray *_signalHandlerDispatchSources;	// 128 = 0x80
    CSDDeviceLockStateObserver *_deviceLockStateObserver;	// 136 = 0x88
    CSDOrientationMonitor *_orientationMonitor;	// 144 = 0x90
    CSDProximityController *_proximityController;	// 152 = 0x98
    CSDProximitySensorObserver *_proximitySensorObserver;	// 160 = 0xa0
    CSDRaiseToAnswerController *_raiseToAnswerController;	// 168 = 0xa8
    CSDPowerAssertionManager *_powerAssertionManager;	// 176 = 0xb0
    CSDAudioController *_audioController;	// 184 = 0xb8
    CSDHandoffAudioController *_handoffAudioController;	// 192 = 0xc0
    CSDStatusBarManager *_statusBarManager;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_queue;	// 208 = 0xd0
    CPApplicationPolicyManager *_applicationPolicyManager;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00200000000934e5
@property(retain, nonatomic) CPApplicationPolicyManager *applicationPolicyManager; // @synthesize applicationPolicyManager=_applicationPolicyManager;
// Error: Property attributes should begin with the type ('T') attribute, property name: queue
// Property attributes: (null)

@property(retain, nonatomic) CSDStatusBarManager *statusBarManager; // @synthesize statusBarManager=_statusBarManager;
@property(retain, nonatomic) CSDHandoffAudioController *handoffAudioController; // @synthesize handoffAudioController=_handoffAudioController;
@property(retain, nonatomic) CSDAudioController *audioController; // @synthesize audioController=_audioController;
@property(retain, nonatomic) CSDPowerAssertionManager *powerAssertionManager; // @synthesize powerAssertionManager=_powerAssertionManager;
@property(retain, nonatomic) CSDRaiseToAnswerController *raiseToAnswerController; // @synthesize raiseToAnswerController=_raiseToAnswerController;
@property(retain, nonatomic) CSDProximitySensorObserver *proximitySensorObserver; // @synthesize proximitySensorObserver=_proximitySensorObserver;
@property(retain, nonatomic) CSDProximityController *proximityController; // @synthesize proximityController=_proximityController;
@property(retain, nonatomic) CSDOrientationMonitor *orientationMonitor; // @synthesize orientationMonitor=_orientationMonitor;
@property(retain, nonatomic) CSDDeviceLockStateObserver *deviceLockStateObserver; // @synthesize deviceLockStateObserver=_deviceLockStateObserver;
@property(retain, nonatomic) NSMutableArray *signalHandlerDispatchSources; // @synthesize signalHandlerDispatchSources=_signalHandlerDispatchSources;
@property(retain, nonatomic) CSDVoiceOverObserver *voiceOverObserver; // @synthesize voiceOverObserver=_voiceOverObserver;
@property(retain, nonatomic) CSDUserNotificationController *userNotificationController; // @synthesize userNotificationController=_userNotificationController;
@property(retain, nonatomic) TUUserConfiguration *userConfiguration; // @synthesize userConfiguration=_userConfiguration;
@property(retain, nonatomic) CSDMomentsController *momentsController; // @synthesize momentsController=_momentsController;
@property(retain, nonatomic) CSDVoIPApplicationController *voipApplicationController; // @synthesize voipApplicationController=_voipApplicationController;
@property(retain, nonatomic) CSDCallDirectoryManager *callDirectoryManager; // @synthesize callDirectoryManager=_callDirectoryManager;
@property(retain, nonatomic) CSDRelayCommonController *relayCommonController; // @synthesize relayCommonController=_relayCommonController;
@property(retain, nonatomic) CSDRelayHostController *relayHostController; // @synthesize relayHostController=_relayHostController;
@property(retain, nonatomic) CSDRelayClientController *relayClientController; // @synthesize relayClientController=_relayClientController;
@property(retain, nonatomic) CSDRelayMessagingController *relayMessagingController; // @synthesize relayMessagingController=_relayMessagingController;
@property(retain, nonatomic) CSDCallStateMonitor *callStateMonitor; // @synthesize callStateMonitor=_callStateMonitor;
@property(retain, nonatomic) CSDCallStateController *callStateController; // @synthesize callStateController=_callStateController;
@property(readonly, nonatomic) CSDConversationProviderManager *conversationProviderManager; // @synthesize conversationProviderManager=_conversationProviderManager;
@property(readonly, nonatomic) CSDConversationProviderManagerXPCServer *conversationProviderManagerXPCServer; // @synthesize conversationProviderManagerXPCServer=_conversationProviderManagerXPCServer;
@property(retain, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
- (void)propertiesDidChangeForConfiguration:(id)arg1;	// IMP=0x0010000000093159
- (void)_setUpSandbox;	// IMP=0x001000000009313e
- (id)_setUpTemporaryDirectory;	// IMP=0x0010000000092fd2
- (void)_setUpLanguageChangeListener;	// IMP=0x0010000000092f05
@property(readonly, copy) NSString *debugDescription;
- (void)_observeSignal:(int)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000092c3b
- (void)dealloc;	// IMP=0x0010000000092ab9
- (id)init;	// IMP=0x00100000000910d2

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
