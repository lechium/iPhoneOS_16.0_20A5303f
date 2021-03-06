//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSData, NSString, NSXPCConnection, Optional, XPCServiceCatalog, XPCServiceEntitlements;

@interface XPCServiceClient : NSObject
{
    NSData *_auditTokenData;	// 8 = 0x8
    XPCServiceCatalog *_catalog;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    Optional *_enableDiagnostics;	// 32 = 0x20
    XPCServiceEntitlements *_entitlements;	// 40 = 0x28
    _Bool hasSeenAppStore;	// 48 = 0x30
    AMSProcessInfo *_processInfo;	// 56 = 0x38
}

+ (id)newClientForConnection:(id)arg1 withCatalog:(id)arg2;	// IMP=0x002000000012350b
+ (id)currentClient;	// IMP=0x001000000012331a
- (void).cxx_destruct;	// IMP=0x0020000000124d6d
@property(readonly) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
- (void)_provideService:(CDUnknownBlockType)arg1 forEntitlement:(struct _ASDServiceEntitlement)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000124ae8
- (void)getPersonalizationServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000124a5c
- (_Bool)isDialogObserverAvailable;	// IMP=0x00100000001248ac
- (_Bool)hasConnection;	// IMP=0x0010000000124885
- (void)deliverProgress:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001247c3
- (void)deliverNotifications:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000124701
- (void)deliverEngagementRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000124601
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000124501
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000124401
- (void)getUpdatesServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000124375
- (void)getTestFlightFeedbackServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001242e9
- (void)getStoreKitExternalNotificationServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012425d
- (void)getRestoreServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001241d1
- (void)getRepairServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000124145
- (void)getPurchaseServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001240b9
- (void)getPurchaseHistoryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012402d
- (void)getMetricsServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000123fa1
- (void)getOcelotServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000123f15
- (void)getManagedAppServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000123e89
- (void)getCrossfireServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000123dfd
- (void)getLibraryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000123d71
- (void)getInstallAttributionServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000123ce5
- (void)getInstallationServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000123c59
- (void)getIAPHistoryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000123bcd
- (void)getFairPlayServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000123b41
- (void)getDiagnosticServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000123ab5
- (void)getClipServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000123a29
- (void)getArcadeServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012399d
- (void)getAppStoreServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000123911
@property(readonly) _Bool enableDiagnostics;
- (id)initWithConnection:(id)arg1 andCatalog:(id)arg2;	// IMP=0x0010000000123577

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

