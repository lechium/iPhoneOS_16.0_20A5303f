//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDMDMv1InstallAppOperation
{
}

+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000063b1b
+ (id)descriptionForChangeType:(long long)arg1;	// IMP=0x0010000000065152
- (void)_resetRemovabilityWithBundleIdentifier:(id)arg1;	// IMP=0x00200000000682ad
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x00100000000681f7
- (_Bool)_canManageBundleIdentifier:(id)arg1;	// IMP=0x0010000000068193
- (void)_updateManagementInfoWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000067f29
- (void)_setUnusedRedemptionCode:(id)arg1;	// IMP=0x0010000000067dba
- (void)_setRedemptionCode:(id)arg1;	// IMP=0x0010000000067c4b
- (void)_setState:(unsigned long long)arg1;	// IMP=0x0010000000067b2d
- (void)_showInstallationFailurePromptIfNeeded;	// IMP=0x0010000000067851
- (void)_showStorePromptToSignInAndInstallAppForRequest:(id)arg1;	// IMP=0x0010000000067577
- (void)_promptToSignInAndInstallAppForRequest:(id)arg1;	// IMP=0x0010000000067205
- (void)_promptIfNeededWithMessageFormat:(id)arg1 success:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066a8a
- (void)_applyManagementPiecesForRequest:(id)arg1;	// IMP=0x00100000000668e4
- (void)_downloadStoreAppForRequest:(id)arg1 type:(long long)arg2;	// IMP=0x0010000000065da0
- (void)_purchaseFreeAppForRequest:(id)arg1;	// IMP=0x0010000000065d89
- (void)_redownloadUserAppForRequest:(id)arg1;	// IMP=0x0010000000065d72
- (void)_redownloadDeviceAppForRequest:(id)arg1;	// IMP=0x0010000000065d5b
- (void)_attemptSINFSwapForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065ad2
- (void)_installStoreAppForRequest:(id)arg1;	// IMP=0x001000000006519a
- (void)_installSystemAppWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000064eb8
- (void)_installEnterpriseAppForRequest:(id)arg1;	// IMP=0x000000000006445f
- (void)_redeemAppWithRedemptionCode:(id)arg1;	// IMP=0x00100000000640dc
- (id)_getRequiredAppIDFromDisk;	// IMP=0x0010000000064021
- (id)_storeAppFormat;	// IMP=0x0010000000063f67
- (void)installAppForRequest:(id)arg1;	// IMP=0x0010000000063c0f
- (void)endOperationWithError:(id)arg1;	// IMP=0x0010000000063bae
- (void)endOperationWithResultObject:(id)arg1;	// IMP=0x0010000000063b4d

@end
