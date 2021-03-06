//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DMFOSStateHandler, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface DMDAppController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_manifest;	// 16 = 0x10
    DMFOSStateHandler *_stateHandler;	// 24 = 0x18
}

+ (void)_sendAppStatusChangeNotification;	// IMP=0x0020000000018b26
+ (id)metadataPath;	// IMP=0x0010000000015eb6
+ (id)sharedController;	// IMP=0x001000000001317a
- (void).cxx_destruct;	// IMP=0x0020000000019bbb
@property(readonly, nonatomic) DMFOSStateHandler *stateHandler; // @synthesize stateHandler=_stateHandler;
@property(readonly, nonatomic) NSMutableDictionary *manifest; // @synthesize manifest=_manifest;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_getEnterpriseAppMetadataFromData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019722
- (void)_getEnterpriseAppMetadataForManifestURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000192ca
- (id)_newMetadataDictionary;	// IMP=0x001000000001924b
- (id)_metadataByBundleIdentifier;	// IMP=0x00100000000191f4
- (_Bool)_setMetadata:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000018da1
- (id)_metadataForBundleIdentifier:(id)arg1;	// IMP=0x0010000000018b4a
- (void)_applyChangeInLifeCycle:(id)arg1 stateMap:(id)arg2;	// IMP=0x0010000000018600
- (void)_cleanUpStaleManagementStatesAndStartObservingApps;	// IMP=0x0010000000017cb2
- (void)advanceTransientStates;	// IMP=0x0010000000017604
- (_Bool)setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000173fc
- (unsigned long long)stateForBundleIdentifier:(id)arg1;	// IMP=0x0010000000017377
- (void)setVPNUUIDString:(id)arg1 contentFilterUUIDString:(id)arg2 DNSProxyUUIDString:(id)arg3 associatedDomains:(id)arg4 enableDirectDownloads:(id)arg5 configuration:(id)arg6 options:(unsigned long long)arg7 forBundleIdentifier:(id)arg8;	// IMP=0x0010000000016e50
- (void)setVPNUUIDString:(id)arg1 associatedDomains:(id)arg2 enableDirectDownloads:(id)arg3 configuration:(id)arg4 options:(unsigned long long)arg5 forBundleIdentifier:(id)arg6;	// IMP=0x0010000000016e18
@property(readonly, copy, nonatomic) NSArray *managedBundleIdentifiers;
- (void)didFinishUninstallingForLifeCycle:(id)arg1;	// IMP=0x0010000000016b3d
- (void)didFinishUpdatingForLifeCycle:(id)arg1;	// IMP=0x0010000000016a76
- (void)didFailUpdatingForLifeCycle:(id)arg1;	// IMP=0x0010000000016a64
- (void)didCancelUpdatingForLifeCycle:(id)arg1;	// IMP=0x0010000000016a52
- (void)didStartUpdatingForLifeCycle:(id)arg1;	// IMP=0x001000000001698b
- (void)didFinishInstallingForLifeCycle:(id)arg1;	// IMP=0x00100000000168c4
- (void)didFailInstallingForLifeCycle:(id)arg1;	// IMP=0x00100000000167fd
- (void)didCancelInstallingForLifeCycle:(id)arg1;	// IMP=0x00100000000167eb
- (void)didStartInstallingForLifeCycle:(id)arg1;	// IMP=0x00100000000166fe
- (void)startUninstallingAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001664e
- (void)resumeAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001659e
- (void)cancelAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000164ee
- (void)startUpdatingAppForRequest:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001643e
- (void)resumeAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001638e
- (void)cancelAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000162de
- (void)startRedeemingAppWithCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001622e
- (void)startInstallingNonEnterpriseAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001617e
- (void)startInstallingEnterpriseAppWithManifestURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000160ce
- (void)handleFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001601e
- (void)getMetadataForNonEnterpriseAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015f6e
- (void)getBundleIdentifierForStoreItemIdentifier:(id)arg1 personaIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015ebe
- (_Bool)setFeedback:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000015e05
- (id)feedbackForBundleIdentifier:(id)arg1;	// IMP=0x0010000000015d54
- (_Bool)setConfiguration:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000015ca3
- (id)configurationForBundleIdentifier:(id)arg1;	// IMP=0x0010000000015bf2
- (void)setRemovability:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001561a
- (id)removabilityForBundleIdentifier:(id)arg1;	// IMP=0x0010000000015593
- (_Bool)setAssociatedDomainsEnableDirectDownloads:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001540a
- (id)associatedDomainsEnableDirectDownloadsForBundleIdentifier:(id)arg1;	// IMP=0x0010000000015383
- (_Bool)setAssociatedDomains:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000151fa
- (id)associatedDomainsForBundleIdentifier:(id)arg1;	// IMP=0x0010000000015173
- (_Bool)setDNSProxyUUIDString:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000014fea
- (id)DNSProxyUUIDStringForBundleIdentifier:(id)arg1;	// IMP=0x0010000000014f63
- (_Bool)setContentFilterUUIDString:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000014dda
- (id)contentFilterUUIDStringForBundleIdentifier:(id)arg1;	// IMP=0x0010000000014d53
- (_Bool)setVPNUUIDString:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000014bca
- (id)VPNUUIDStringForBundleIdentifier:(id)arg1;	// IMP=0x0010000000014b43
- (_Bool)removePersonaMappingForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000014761
- (void)updateBundleIDPersonaIDMappingForPersonaID:(id)arg1 addingBundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014513
- (_Bool)writeManagementInformationToDiskWithError:(id *)arg1;	// IMP=0x00100000000142db
- (_Bool)setManagementInformation:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000014080
- (id)managementInformationForBundleIdentifier:(id)arg1;	// IMP=0x0010000000013e81
- (void)getMetadataForAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013c4e
- (void)getBundleIdentifierForAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013931
- (void)getBundleIdentifierForManifestURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001367c
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *foregroundBundleIdentifiers;
- (id)initPrivate;	// IMP=0x00100000000131e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

