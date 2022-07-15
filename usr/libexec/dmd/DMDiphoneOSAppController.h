//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDJobManager, ASDUpdatesService, FBSDisplayLayoutMonitor, NSArray, NSMutableDictionary, NSString;

@interface DMDiphoneOSAppController
{
    NSString *_singleAppModeBundleIndentifier;	// 8 = 0x8
    NSMutableDictionary *_bundleIDsToAssertions;	// 16 = 0x10
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 24 = 0x18
    NSArray *__foregroundBundleIdentifiers;	// 32 = 0x20
}

+ (id)metadataPath;	// IMP=0x002000000001d347
+ (id)changeTypeAsString:(long long)arg1;	// IMP=0x001000000001d073
+ (id)_appleAccountForPersona:(id)arg1;	// IMP=0x001000000001cdea
+ (id)_appStoreAccountIdentifierForPersona:(id)arg1;	// IMP=0x001000000001cc78
+ (id)enumeratorForOrdinaryApps;	// IMP=0x001000000001af02
+ (id)enumeratorForSystemAppPlaceholders;	// IMP=0x001000000001aee9
+ (id)enumeratorForUserAppPlaceholders;	// IMP=0x001000000001aecb
- (void).cxx_destruct;	// IMP=0x001000000001ecf8
@property(retain, nonatomic) NSArray *_foregroundBundleIdentifiers; // @synthesize _foregroundBundleIdentifiers=__foregroundBundleIdentifiers;
@property(retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // @synthesize layoutMonitor=_layoutMonitor;
@property(retain, nonatomic) NSMutableDictionary *bundleIDsToAssertions; // @synthesize bundleIDsToAssertions=_bundleIDsToAssertions;
@property(copy, nonatomic) NSString *singleAppModeBundleIndentifier; // @synthesize singleAppModeBundleIndentifier=_singleAppModeBundleIndentifier;
- (void)_updateForegroundBundleIdentifiers;	// IMP=0x001000000001e962
- (void)_getMetadataForBundleIdentifier:(id)arg1 storeItemIdentifier:(id)arg2 personaIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001e3c1
- (void)_applyStoreDictionary:(id)arg1 toAppMetadata:(id)arg2;	// IMP=0x001000000001e1f9
- (id)_managedDefaultsForBundleIdentifier:(id)arg1;	// IMP=0x001000000001e1a7
- (_Bool)setFeedback:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001ded8
- (id)feedbackForBundleIdentifier:(id)arg1;	// IMP=0x001000000001dc46
- (void)_withSandboxExtensionForApp:(id)arg1 do:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d9d4
- (_Bool)setConfiguration:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001d827
- (id)configurationForBundleIdentifier:(id)arg1;	// IMP=0x001000000001d7d0
- (void)getMetadataForNonEnterpriseAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d46d
- (void)getBundleIdentifierForStoreItemIdentifier:(id)arg1 personaIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d360
- (_Bool)writeManagementInformationToDiskWithError:(id *)arg1;	// IMP=0x001000000001d2c8
- (void)installSystemAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d092
- (void)sendAppRequestWithBundleIdentifier:(id)arg1 storeItemIdentifier:(id)arg2 personaIdentifier:(id)arg3 type:(long long)arg4 skipDownloads:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000001c85e
- (void)promptUserToSignInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001c692
@property(readonly, nonatomic) _Bool userIsSignedIn;
- (void)removeTerminationAssertionForBundleIdentifier:(id)arg1;	// IMP=0x001000000001c4f1
- (void)addTerminationAssertion:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000001c39d
@property(readonly, copy, nonatomic) ASDUpdatesService *updatesService;
@property(readonly, copy, nonatomic) ASDJobManager *jobManager;
- (id)foregroundBundleIdentifiers;	// IMP=0x001000000001c29a
- (id)initPrivate;	// IMP=0x001000000001c10a
- (id)_allPropertyKeys;	// IMP=0x001000000001af97
- (unsigned long long)appTypeFromProxy:(id)arg1;	// IMP=0x001000000001af1d
- (void)handleFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019bee
- (void)_downloadAppForRequest:(id)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001bee7
- (void)_installUserAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001bcb2
- (void)_installDeviceLicensedAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001bbd1
- (void)resumeAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b663
- (void)startInstallingNonEnterpriseAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b42b
- (void)startInstallingEnterpriseAppWithManifestURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b1f3
- (void)startRedeemingAppWithCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ed4b
- (void)_uninstallAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001f8b4
- (void)startUninstallingAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001f625
- (void)cancelAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001f135
- (void)_updateEndedForLifeCycle:(id)arg1;	// IMP=0x001000000002022c
- (void)_startUpdatingAppForRequest:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001fea6
- (void)didFinishUpdatingForLifeCycle:(id)arg1;	// IMP=0x001000000001fe38
- (void)didFailUpdatingForLifeCycle:(id)arg1;	// IMP=0x001000000001fdca
- (void)didCancelUpdatingForLifeCycle:(id)arg1;	// IMP=0x001000000001fd5c
- (void)resumeAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001fd4a
- (void)cancelAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001fd38
- (void)startUpdatingAppForRequest:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001fad7

@end
