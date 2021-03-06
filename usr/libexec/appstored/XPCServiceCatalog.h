//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface XPCServiceCatalog : NSObject
{
    CDUnknownBlockType _AppStoreServiceProvider;	// 8 = 0x8
    CDUnknownBlockType _ArcadeServiceProvider;	// 16 = 0x10
    CDUnknownBlockType _diagnosticServiceProvider;	// 24 = 0x18
    CDUnknownBlockType _ClipServiceProvider;	// 32 = 0x20
    CDUnknownBlockType _CrossfireServiceProvider;	// 40 = 0x28
    CDUnknownBlockType _fairPlayServiceProvider;	// 48 = 0x30
    CDUnknownBlockType _IAPHistoryServiceProvider;	// 56 = 0x38
    CDUnknownBlockType _installationServiceProvider;	// 64 = 0x40
    CDUnknownBlockType _installAttributionServiceProvider;	// 72 = 0x48
    CDUnknownBlockType _libraryServiceProvider;	// 80 = 0x50
    CDUnknownBlockType _MetricsServiceProvider;	// 88 = 0x58
    CDUnknownBlockType _ManagedAppServiceProvider;	// 96 = 0x60
    CDUnknownBlockType _OcelotServiceProvider;	// 104 = 0x68
    CDUnknownBlockType _PersonalizationServiceProvider;	// 112 = 0x70
    CDUnknownBlockType _PurchaseHistoryServiceProvider;	// 120 = 0x78
    CDUnknownBlockType _PurchaseServiceProvider;	// 128 = 0x80
    CDUnknownBlockType _RepairServiceProvider;	// 136 = 0x88
    CDUnknownBlockType _RestoreServiceProvider;	// 144 = 0x90
    CDUnknownBlockType _StoreKitExternalNotificationServiceProvider;	// 152 = 0x98
    CDUnknownBlockType _TestFlightServiceProvider;	// 160 = 0xa0
    CDUnknownBlockType _UpdatesServiceProvider;	// 168 = 0xa8
    struct _ASDServiceEntitlement _AppStoreServiceEntitlement;	// 176 = 0xb0
    struct _ASDServiceEntitlement _ArcadeServiceEntitlement;	// 192 = 0xc0
    struct _ASDServiceEntitlement _diagnosticServiceEntitlement;	// 208 = 0xd0
    struct _ASDServiceEntitlement _clipServiceEntitlement;	// 224 = 0xe0
    struct _ASDServiceEntitlement _CrossfireServerEntitlement;	// 240 = 0xf0
    struct _ASDServiceEntitlement _fairPlayEntitlement;	// 256 = 0x100
    struct _ASDServiceEntitlement _IAPHistoryServiceEntitlement;	// 272 = 0x110
    struct _ASDServiceEntitlement _installationServiceEntitlement;	// 288 = 0x120
    struct _ASDServiceEntitlement _installAttributionServiceEntitlement;	// 304 = 0x130
    struct _ASDServiceEntitlement _libraryServiceEntitlement;	// 320 = 0x140
    struct _ASDServiceEntitlement _MetricsServiceEntitlement;	// 336 = 0x150
    struct _ASDServiceEntitlement _ManagedAppServiceEntitlement;	// 352 = 0x160
    struct _ASDServiceEntitlement _OcelotServerEntitlement;	// 368 = 0x170
    struct _ASDServiceEntitlement _PersonalizationServerEntitlement;	// 384 = 0x180
    struct _ASDServiceEntitlement _PurchaseHistoryServiceEntitlement;	// 400 = 0x190
    struct _ASDServiceEntitlement _PurchaseServiceEntitlement;	// 416 = 0x1a0
    struct _ASDServiceEntitlement _RepairServiceEntitlement;	// 432 = 0x1b0
    struct _ASDServiceEntitlement _RestoreServiceEntitlement;	// 448 = 0x1c0
    struct _ASDServiceEntitlement _StoreKitExternalNotificationServiceEntitlement;	// 464 = 0x1d0
    struct _ASDServiceEntitlement _TestFlightFeedbackServiceEntitlement;	// 480 = 0x1e0
    struct _ASDServiceEntitlement _UpdatesServiceEntitlement;	// 496 = 0x1f0
}

- (void).cxx_destruct;	// IMP=0x00200000000a33c8
@property(copy) CDUnknownBlockType UpdatesServiceProvider; // @synthesize UpdatesServiceProvider=_UpdatesServiceProvider;
@property struct _ASDServiceEntitlement UpdatesServiceEntitlement; // @synthesize UpdatesServiceEntitlement=_UpdatesServiceEntitlement;
@property(copy) CDUnknownBlockType TestFlightServiceProvider; // @synthesize TestFlightServiceProvider=_TestFlightServiceProvider;
@property struct _ASDServiceEntitlement TestFlightFeedbackServiceEntitlement; // @synthesize TestFlightFeedbackServiceEntitlement=_TestFlightFeedbackServiceEntitlement;
@property struct _ASDServiceEntitlement StoreKitExternalNotificationServiceEntitlement; // @synthesize StoreKitExternalNotificationServiceEntitlement=_StoreKitExternalNotificationServiceEntitlement;
@property(copy) CDUnknownBlockType StoreKitExternalNotificationServiceProvider; // @synthesize StoreKitExternalNotificationServiceProvider=_StoreKitExternalNotificationServiceProvider;
@property struct _ASDServiceEntitlement RestoreServiceEntitlement; // @synthesize RestoreServiceEntitlement=_RestoreServiceEntitlement;
@property(copy) CDUnknownBlockType RestoreServiceProvider; // @synthesize RestoreServiceProvider=_RestoreServiceProvider;
@property struct _ASDServiceEntitlement RepairServiceEntitlement; // @synthesize RepairServiceEntitlement=_RepairServiceEntitlement;
@property(copy) CDUnknownBlockType RepairServiceProvider; // @synthesize RepairServiceProvider=_RepairServiceProvider;
@property(copy) CDUnknownBlockType PurchaseServiceProvider; // @synthesize PurchaseServiceProvider=_PurchaseServiceProvider;
@property struct _ASDServiceEntitlement PurchaseServiceEntitlement; // @synthesize PurchaseServiceEntitlement=_PurchaseServiceEntitlement;
@property(copy) CDUnknownBlockType PurchaseHistoryServiceProvider; // @synthesize PurchaseHistoryServiceProvider=_PurchaseHistoryServiceProvider;
@property struct _ASDServiceEntitlement PurchaseHistoryServiceEntitlement; // @synthesize PurchaseHistoryServiceEntitlement=_PurchaseHistoryServiceEntitlement;
@property(copy) CDUnknownBlockType PersonalizationServiceProvider; // @synthesize PersonalizationServiceProvider=_PersonalizationServiceProvider;
@property struct _ASDServiceEntitlement PersonalizationServerEntitlement; // @synthesize PersonalizationServerEntitlement=_PersonalizationServerEntitlement;
@property(copy) CDUnknownBlockType OcelotServiceProvider; // @synthesize OcelotServiceProvider=_OcelotServiceProvider;
@property struct _ASDServiceEntitlement OcelotServerEntitlement; // @synthesize OcelotServerEntitlement=_OcelotServerEntitlement;
@property(copy) CDUnknownBlockType ManagedAppServiceProvider; // @synthesize ManagedAppServiceProvider=_ManagedAppServiceProvider;
@property struct _ASDServiceEntitlement ManagedAppServiceEntitlement; // @synthesize ManagedAppServiceEntitlement=_ManagedAppServiceEntitlement;
@property(copy) CDUnknownBlockType MetricsServiceProvider; // @synthesize MetricsServiceProvider=_MetricsServiceProvider;
@property struct _ASDServiceEntitlement MetricsServiceEntitlement; // @synthesize MetricsServiceEntitlement=_MetricsServiceEntitlement;
@property(copy) CDUnknownBlockType libraryServiceProvider; // @synthesize libraryServiceProvider=_libraryServiceProvider;
@property struct _ASDServiceEntitlement libraryServiceEntitlement; // @synthesize libraryServiceEntitlement=_libraryServiceEntitlement;
@property(copy) CDUnknownBlockType installAttributionServiceProvider; // @synthesize installAttributionServiceProvider=_installAttributionServiceProvider;
@property struct _ASDServiceEntitlement installAttributionServiceEntitlement; // @synthesize installAttributionServiceEntitlement=_installAttributionServiceEntitlement;
@property(copy) CDUnknownBlockType installationServiceProvider; // @synthesize installationServiceProvider=_installationServiceProvider;
@property struct _ASDServiceEntitlement installationServiceEntitlement; // @synthesize installationServiceEntitlement=_installationServiceEntitlement;
@property(copy) CDUnknownBlockType IAPHistoryServiceProvider; // @synthesize IAPHistoryServiceProvider=_IAPHistoryServiceProvider;
@property struct _ASDServiceEntitlement IAPHistoryServiceEntitlement; // @synthesize IAPHistoryServiceEntitlement=_IAPHistoryServiceEntitlement;
@property(copy) CDUnknownBlockType fairPlayServiceProvider; // @synthesize fairPlayServiceProvider=_fairPlayServiceProvider;
@property struct _ASDServiceEntitlement fairPlayEntitlement; // @synthesize fairPlayEntitlement=_fairPlayEntitlement;
@property(copy) CDUnknownBlockType CrossfireServiceProvider; // @synthesize CrossfireServiceProvider=_CrossfireServiceProvider;
@property struct _ASDServiceEntitlement CrossfireServerEntitlement; // @synthesize CrossfireServerEntitlement=_CrossfireServerEntitlement;
@property(copy) CDUnknownBlockType ClipServiceProvider; // @synthesize ClipServiceProvider=_ClipServiceProvider;
@property struct _ASDServiceEntitlement clipServiceEntitlement; // @synthesize clipServiceEntitlement=_clipServiceEntitlement;
@property(copy) CDUnknownBlockType diagnosticServiceProvider; // @synthesize diagnosticServiceProvider=_diagnosticServiceProvider;
@property struct _ASDServiceEntitlement diagnosticServiceEntitlement; // @synthesize diagnosticServiceEntitlement=_diagnosticServiceEntitlement;
@property(copy) CDUnknownBlockType ArcadeServiceProvider; // @synthesize ArcadeServiceProvider=_ArcadeServiceProvider;
@property struct _ASDServiceEntitlement ArcadeServiceEntitlement; // @synthesize ArcadeServiceEntitlement=_ArcadeServiceEntitlement;
@property(copy) CDUnknownBlockType AppStoreServiceProvider; // @synthesize AppStoreServiceProvider=_AppStoreServiceProvider;
@property struct _ASDServiceEntitlement AppStoreServiceEntitlement; // @synthesize AppStoreServiceEntitlement=_AppStoreServiceEntitlement;

@end

