//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface SPApplicationManager : NSObject
{
    _Bool _domainVerified;	// 8 = 0x8
    long long _installationMode;	// 16 = 0x10
    NSString *_currentXcodeControlledPlugin;	// 24 = 0x18
    NPSDomainAccessor *_watchKitAppsDomain;	// 32 = 0x20
    NSMutableDictionary *_continuouslyDiscoveredPlugins;	// 40 = 0x28
    CDUnknownBlockType _pluginsFoundBlock;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_pkPluginManagementQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_pkPluginCompletionQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_pkPluginBeginUsingTimerQueue;	// 72 = 0x48
    NSMutableDictionary *_pkPluginBeginUsingTimers;	// 80 = 0x50
    id _wkContinuousDiscoveryToken;	// 88 = 0x58
    id _domainUpdateLock;	// 96 = 0x60
    NSMutableSet *_companionAppIDsInstalledViaXcode;	// 104 = 0x68
    id _companionAppIDsInstalledViaXcodeLock;	// 112 = 0x70
    NSMutableSet *_extensionsKilledDueToAppDeath;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_extensionsKilledDueToAppDeathAccessQueue;	// 128 = 0x80
}

+ (id)sharedInstance;	// IMP=0x004000000001a024
- (void).cxx_destruct;	// IMP=0x0020000000020494
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *extensionsKilledDueToAppDeathAccessQueue; // @synthesize extensionsKilledDueToAppDeathAccessQueue=_extensionsKilledDueToAppDeathAccessQueue;
@property(retain, nonatomic) NSMutableSet *extensionsKilledDueToAppDeath; // @synthesize extensionsKilledDueToAppDeath=_extensionsKilledDueToAppDeath;
@property(retain, nonatomic) id companionAppIDsInstalledViaXcodeLock; // @synthesize companionAppIDsInstalledViaXcodeLock=_companionAppIDsInstalledViaXcodeLock;
@property(retain, nonatomic) NSMutableSet *companionAppIDsInstalledViaXcode; // @synthesize companionAppIDsInstalledViaXcode=_companionAppIDsInstalledViaXcode;
@property(retain, nonatomic) id domainUpdateLock; // @synthesize domainUpdateLock=_domainUpdateLock;
@property(retain, nonatomic) id wkContinuousDiscoveryToken; // @synthesize wkContinuousDiscoveryToken=_wkContinuousDiscoveryToken;
@property(retain, nonatomic) NSMutableDictionary *pkPluginBeginUsingTimers; // @synthesize pkPluginBeginUsingTimers=_pkPluginBeginUsingTimers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pkPluginBeginUsingTimerQueue; // @synthesize pkPluginBeginUsingTimerQueue=_pkPluginBeginUsingTimerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pkPluginCompletionQueue; // @synthesize pkPluginCompletionQueue=_pkPluginCompletionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pkPluginManagementQueue; // @synthesize pkPluginManagementQueue=_pkPluginManagementQueue;
@property(copy, nonatomic) CDUnknownBlockType pluginsFoundBlock; // @synthesize pluginsFoundBlock=_pluginsFoundBlock;
@property(retain, nonatomic) NSMutableDictionary *continuouslyDiscoveredPlugins; // @synthesize continuouslyDiscoveredPlugins=_continuouslyDiscoveredPlugins;
@property _Bool domainVerified; // @synthesize domainVerified=_domainVerified;
@property(retain, nonatomic) NPSDomainAccessor *watchKitAppsDomain; // @synthesize watchKitAppsDomain=_watchKitAppsDomain;
@property(copy) NSString *currentXcodeControlledPlugin; // @synthesize currentXcodeControlledPlugin=_currentXcodeControlledPlugin;
@property long long installationMode; // @synthesize installationMode=_installationMode;
- (void)saveGizmoBuildVersion:(id)arg1;	// IMP=0x0010000000020240
- (id)savedGizmoBuildVersion;	// IMP=0x00100000000201a0
- (void)notifyInactiveForPluginWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ff0f
- (void)notifyActiveForPluginWithIdentifier:(id)arg1;	// IMP=0x001000000001fcd6
- (_Bool)pluginHasFinishedBeginUsing:(id)arg1;	// IMP=0x001000000001fc16
- (void)markPluginWithIdentifierNeedsBeginUsing:(id)arg1;	// IMP=0x001000000001f9e8
- (void);	// IMP=0x001000000001f6df
- (void)discoverAllPlugIns:(CDUnknownBlockType)arg1;	// IMP=0x001000000001f521
- (void)updateCoreDuetSession:(id)arg1;	// IMP=0x001000000001f51b
- (void)clearXcodeWillInstallSockPuppetAppWithCompanionAppIDState:(id)arg1;	// IMP=0x001000000001f46b
- (_Bool)willXcodeInstallSockPuppetAppWithCompanionAppID:(id)arg1;	// IMP=0x001000000001f3a6
- (void)xcodeWillInstallSockPuppetAppWithCompanionAppID:(id)arg1;	// IMP=0x001000000001f2f6
- (void)fetchInstalledApplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001f1a6
- (_Bool)applicationContainsWK1Application:(id)arg1;	// IMP=0x001000000001f002
- (_Bool)applicationContainsWK2Application:(id)arg1;	// IMP=0x001000000001ef29
- (void)stopUsingPluginIfNecessary:(id)arg1;	// IMP=0x001000000001e9f3
- (id)identifierForPluginProxy:(id)arg1;	// IMP=0x001000000001e966
- (id)pluginIdentifierForProtocolIdentifier:(id)arg1;	// IMP=0x001000000001e796
- (id)gizmoApplicationInfoWithIdentifier:(id)arg1;	// IMP=0x001000000001e6b3
- (id)gizmoPersistentDomain;	// IMP=0x001000000001e4d3
- (void)handleInstallationsReportedByLaunchServices:(id)arg1;	// IMP=0x001000000001e074
- (_Bool)wasExtensionKilledDueToAppDeath:(id)arg1;	// IMP=0x001000000001df6f
- (void)setExtension:(id)arg1 wasKilledDueToAppDeath:(_Bool)arg2;	// IMP=0x001000000001ddb1
- (void)getOrBeginActivePlugInForApplication:(id)arg1 setupBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d496
- (void)beginUsingPlugin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001bf96
- (void)waitForPreviousPluginToFinishEnding:(id)arg1 toComplete:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b53b
- (void)callEndUsingCompletionsForPluginWithIdentifier:(id)arg1;	// IMP=0x001000000001aedc
- (void)registerForContinuousPluginDiscovery;	// IMP=0x001000000001a1fa
- (id)init;	// IMP=0x001000000001a079

@end

