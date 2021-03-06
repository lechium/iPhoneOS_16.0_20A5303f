//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AppStoreUtility : NSObject
{
}

+ (void)_sendSoftwareManifest:(id)arg1 withReason:(id)arg2;	// IMP=0x00400000001cdf88
+ (id)_newRequestWithManifest:(id)arg1;	// IMP=0x00100000001cdef3
+ (id)_newManifestWithManifestType:(long long)arg1;	// IMP=0x00100000001cdeb8
+ (void)_checkClaimsForAccountID:(id)arg1 claimStyle:(long long)arg2 clientAuditTokenData:(id)arg3 establishActiveAccounts:(_Bool)arg4 ignoresPreviousClaimAttempts:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00100000001cd8fb
+ (void)_addDownloads:(id)arg1 toManifest:(id)arg2 forClientID:(id)arg3;	// IMP=0x00100000001cd5f3
+ (void)sendAppStoreSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00100000001cd3f5
+ (void)sendActivitySubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00100000001cd1f7
+ (void)sendNewsSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00100000001ccffc
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 forClientID:(id)arg3 manifestType:(long long)arg4;	// IMP=0x00100000001ccd84
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 forClientID:(id)arg3;	// IMP=0x00100000001ccd6f
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 manifestType:(long long)arg3;	// IMP=0x00100000001ccd53
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2;	// IMP=0x00100000001ccd37
+ (void)sendClusterMappings:(id)arg1;	// IMP=0x00100000001cc42d
+ (void)restoreDemotedAppsWithBundleIDs:(id)arg1;	// IMP=0x00100000001cbf62
+ (void)repairAppWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001cbbbb
+ (void)reloadUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cb970
+ (void)postBulletinWithTitle:(id)arg1 message:(id)arg2 destinations:(unsigned long long)arg3 actionButtonTitle:(id)arg4 actionButtonURL:(id)arg5 launchURL:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00100000001cb647
+ (void)installManagedAppWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001cb2aa
+ (void)hidePendingUpdatesBadge;	// IMP=0x00100000001cb0e1
+ (void)claimAppsWithPurchase:(id)arg1;	// IMP=0x00100000001caa65
+ (void)checkFirstPartyClaimsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001caa3e
+ (void)checkFirstPartyClaimsWithAuditTokenData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001caa17
+ (void)checkDownloadQueue;	// IMP=0x00100000001ca5e8
+ (void)checkClaimsEstablishingActiveAccounts:(_Bool)arg1 ignoringPreviousClaimAttempts:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ca5bb

@end

