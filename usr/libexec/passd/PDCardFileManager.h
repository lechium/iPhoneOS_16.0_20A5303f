//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, NSURL, PDAppletSubcredentialManager, PDUbiquityManager, PKDirectoryCoordinator, PKSecureElement;
@protocol OS_dispatch_queue, PDCardFileManagerDelegate, PKCloudStoreCoordinatorDelegate;

@interface PDCardFileManager : NSObject
{
    PKDirectoryCoordinator *_directoryCoordinator;	// 8 = 0x8
    NSMapTable *_cardDirectoryCoordinators;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_missingAssetQueue;	// 24 = 0x18
    PDUbiquityManager *_ubiquityManager;	// 32 = 0x20
    NSURL *_cardsURL;	// 40 = 0x28
    id <PDCardFileManagerDelegate> _delegate;	// 48 = 0x30
    id <PKCloudStoreCoordinatorDelegate> _cloudStoreCoordinatorDelegate;	// 56 = 0x38
    _Atomic _Bool _performingMissingRemoteAssetDownloadActivity;	// 64 = 0x40
    unsigned long long _maximumDownloadRetries;	// 72 = 0x48
    PDAppletSubcredentialManager *_subcredentialManager;	// 80 = 0x50
    PKSecureElement *_secureElement;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000000ffdaf
@property(retain, nonatomic) PKSecureElement *secureElement; // @synthesize secureElement=_secureElement;
@property(retain, nonatomic) PDAppletSubcredentialManager *subcredentialManager; // @synthesize subcredentialManager=_subcredentialManager;
- (void)_downloadRemoteAssetsForCardWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000feeb7
- (void)_performMissingAssetDownloadActivity;	// IMP=0x00100000000fe9cb
- (void)_evaluateDownloadMissingAssetsActivityWithForcedReschedule:(_Bool)arg1;	// IMP=0x00100000000fe6db
- (void)receivedXPCEvent:(id)arg1 forEventStream:(id)arg2;	// IMP=0x00100000000fe660
- (id)_cacheURLForUniqueID:(id)arg1;	// IMP=0x00100000000fe5e5
- (id)_objectURLForUniqueID:(id)arg1;	// IMP=0x00100000000fe567
- (void)ubiquitousCatalogDidChange:(id)arg1;	// IMP=0x00100000000fe424
- (void)ubiquitousCardWithUniqueIDRemoved:(id)arg1;	// IMP=0x00100000000fe357
- (void)ubiquitousCardDidChange:(id)arg1;	// IMP=0x00100000000fe0ce
- (id)localNonUbiquitousCatalogURL;	// IMP=0x00100000000fe0c4
- (id)existingCardUniqueIDs;	// IMP=0x00100000000fe0b2
- (id)existingCatalog;	// IMP=0x00100000000fe0a0
- (id)existingCardWithUniqueID:(id)arg1;	// IMP=0x00100000000fe08e
- (void)_dc_performCacheMaintenanceActivity;	// IMP=0x00100000000fd5b7
- (_Bool)_dc_deleteCardWithUniqueID:(id)arg1 cardDirectoryCoordinator:(id)arg2;	// IMP=0x00100000000fd2ea
- (_Bool)_dc_writeCard:(id)arg1 writtenCard:(id *)arg2 diff:(id *)arg3 daemonData:(id *)arg4 undecryptableAssets:(id *)arg5 error:(id *)arg6;	// IMP=0x00100000000fc648
- (id)_cardWithUniqueID:(id)arg1 cardDirectoryCoordinator:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000fc3e1
- (id)_dc_cardWithUniqueID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000fc338
- (id)_dataAccessorForCardDirectoryCoordinator:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000fc0db
- (void)_dc_invalidateCardDirectoryCoordinatorForUniqueID:(id)arg1;	// IMP=0x00100000000fc059
- (id)_dc_cardDirectoryCoordinatorForUniqueID:(id)arg1;	// IMP=0x00100000000fbed8
- (id)_contentForCardWithUniqueID:(id)arg1;	// IMP=0x00100000000fba9b
- (id);	// IMP=0x00100000000fb813
- (id)_imageSetContainerForUniqueID:(id)arg1 ofType:(long long)arg2 withDisplayProfile:(id)arg3 suffix:(id)arg4;	// IMP=0x00100000000fb654
- (id)_cachedImageSetContainerForUniqueID:(id)arg1 type:(long long)arg2 withDisplayProfile:(id)arg3 displayTraits:(id)arg4 cardDirectoryCoordinator:(id)arg5;	// IMP=0x00100000000fb426
- (id)_cachedImageSetContainerForUniqueID:(id)arg1 type:(long long)arg2 withDisplayProfile:(id)arg3 displayTraits:(id)arg4;	// IMP=0x00100000000fb267
- (void)_createImageSetsForCardWithUniqueID:(id)arg1 cardDirectoryCoordinator:(id)arg2 displayProfile:(id)arg3;	// IMP=0x00100000000fb144
- (void)_checkRevocationStatusForPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000facfb
- (void)_recursivelyCheckRevocationStatusForPassUniqueIdentifiers:(id)arg1 osTransaction:(id)arg2;	// IMP=0x00100000000fabb5
- (void)_performRevocationCheckActivity;	// IMP=0x00100000000fab2a
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000000fa9a6
- (void)decryptPassAssets:(id)arg1 undecryptableAssets:(id *)arg2;	// IMP=0x00100000000fa6ac
- (void)forceImmediateRevocationCheck;	// IMP=0x00100000000fa69a
- (void)scheduleImmediateRevocationCheck;	// IMP=0x00100000000fa640
- (void)registerDatabaseObject:(id)arg1;	// IMP=0x00100000000fa481
- (void)nukeCards;	// IMP=0x00100000000fa2e9
- (void)_deleteCardWithUniqueID:(id)arg1 cardDirectoryCoordinator:(id)arg2 forReason:(unsigned long long)arg3 withDiagnosticReason:(id)arg4;	// IMP=0x00100000000f9f81
- (void)deleteCardWithUniqueID:(id)arg1 forReason:(unsigned long long)arg2 withDiagnosticReason:(id)arg3;	// IMP=0x00100000000f9dde
- (void)writeCatalogOfRecord:(id)arg1 source:(long long)arg2;	// IMP=0x00100000000f9c5e
- (_Bool)writeCard:(id)arg1 source:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000f9363
- (void)fetchImageSetContainerForUniqueID:(id)arg1 ofType:(long long)arg2 withDisplayProfile:(id)arg3 suffix:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000f91ac
- (id)imageSetContainerForUniqueID:(id)arg1 ofType:(long long)arg2 withDisplayProfile:(id)arg3 suffix:(id)arg4;	// IMP=0x00100000000f919a
- (void)fetchCachedImageSetContainerForUniqueID:(id)arg1 type:(long long)arg2 withDisplayProfile:(id)arg3 displayTraits:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000f8fe3
- (id)cachedImageSetContainerForUniqueID:(id)arg1 type:(long long)arg2 withDisplayProfile:(id)arg3 displayTraits:(id)arg4;	// IMP=0x00100000000f8fd1
- (void)_deletePossibleInvalidCardWithUniqueID:(id)arg1 cardDirectoryCoordinator:(id)arg2;	// IMP=0x00100000000f8b07
- (id)passTilesForUniqueID:(id)arg1 withDescriptorStatePairs:(id)arg2;	// IMP=0x00100000000f85e2
- (id)passDaemonDataForUniqueID:(id)arg1;	// IMP=0x00100000000f835b
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f8211
- (id)contentForUniqueID:(id)arg1;	// IMP=0x00100000000f81ff
- (id)catalogOfRecord;	// IMP=0x00100000000f8122
- (id)passesOfType:(unsigned long long)arg1;	// IMP=0x00100000000f7f24
- (id)passes;	// IMP=0x00100000000f7d58
- (id)dataAccessorForObjectWithUniqueID:(id)arg1;	// IMP=0x00100000000f7bcf
- (id)objectWithUniqueID:(id)arg1;	// IMP=0x00100000000f7751
- (id)passUniqueIDs;	// IMP=0x00100000000f7338
- (void)performMigrationWithStartTime:(double)arg1;	// IMP=0x00100000000f619b
- (void)startObservingUbiquityEvents;	// IMP=0x00100000000f611f
- (void)restartUbiquity;	// IMP=0x00100000000f60e2
- (void)startUbiquity;	// IMP=0x00100000000f5fc4
- (id)_ubiquityManager;	// IMP=0x00100000000f5f9f
- (id)initWithDelegate:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2 maximumDownloadRetries:(unsigned long long)arg3 atURL:(id)arg4;	// IMP=0x00100000000f5be9
- (id)initWithDelegate:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2;	// IMP=0x00100000000f5b4f
- (id)init;	// IMP=0x00100000000f5b41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

