//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (BRCSyncOperationThrottle)
+ (void)initialize;	// IMP=0x0060000000223b18
+ (id)brc_daemonAccessDisabledError;	// IMP=0x0060000000223ae7
+ (id)brc_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;	// IMP=0x0060000000223692
- (int)brc_syncOperationErrorKind;	// IMP=0x00100000001111e2
- (_Bool)brc_isExpectedErrorForTelemetry;	// IMP=0x0010000000224262
- (id)brc_telemetryReportableErrorWithRecordName:(id *)arg1;	// IMP=0x0010000000223d58
- (id)brc_cloudKitErrorMessage;	// IMP=0x0010000000223c8b
- (id)brc_description;	// IMP=0x0010000000223bbf
- (id)brc_wrappedError;	// IMP=0x001000000022380d
- (id)brc_strippedError;	// IMP=0x00100000002230ab
- (_Bool)brc_isIgnorableListDirectoryError;	// IMP=0x0010000000223099
- (_Bool)brc_isCloudKitPCSDecryptionFailure;	// IMP=0x0010000000223082
- (_Bool)brc_isReferenceValidationError;	// IMP=0x001000000022306b
- (_Bool)brc_isStaleRecordUpdateError;	// IMP=0x0010000000223054
- (_Bool)brc_isCloudKitErrorNeedsPCSPrep;	// IMP=0x0010000000223021
- (_Bool)brc_isCloudKitErrorZoneMigrated;	// IMP=0x0010000000222fee
- (_Bool)brc_isCloudKitErrorZoneUndergoingMigration;	// IMP=0x0010000000222fbb
- (_Bool)brc_isCloudKitErrorImplyingZoneNeedsCreation;	// IMP=0x0010000000222f82
- (_Bool)_brc_isCloudKitZoneUserDeletedError;	// IMP=0x0010000000222f6b
- (_Bool)_brc_isCloudKitZoneNotFoundError;	// IMP=0x0010000000222f54
- (_Bool)brc_isOutOfSpaceError;	// IMP=0x0010000000222d8f
- (_Bool)brc_isBlacklistError;	// IMP=0x0010000000222d78
- (_Bool)brc_isCloudKitErrorSafeToSyncUpWithoutSyncDown;	// IMP=0x001000000022220c
- (_Bool)_brc_isCloudKitInternalErrorSafeToSyncUpWithoutSyncDown;	// IMP=0x0010000000221950
- (_Bool)brc_isCloudKitErrorRequiringSkipThrottling;	// IMP=0x0010000000221910
- (_Bool)brc_isRetriableForPCSChaining;	// IMP=0x001000000022187e
- (_Bool)brc_isIndividualItemBlacklistError;	// IMP=0x0010000000221757
- (_Bool)brc_isCloudKitErrorRemappedToNewRecordName:(id *)arg1;	// IMP=0x00100000002216a1
- (_Bool)brc_isCloudKitErrorChainedToNewParent:(id *)arg1;	// IMP=0x00100000002215eb
- (_Bool)brc_isCloudKitErrorUnsupportedOSForZoneAndGetMinimumSupported:(id *)arg1;	// IMP=0x0010000000221535
- (_Bool)brc_isCloudKitErrorUnsupportedOSForItemAndGetMinimumSupported:(id *)arg1;	// IMP=0x001000000022147f
- (id)_brc_cloudKitPluginErrorPayload;	// IMP=0x00100000002213a7
- (_Bool)_brc_isCloudKitPluginErrorCode:(long long)arg1;	// IMP=0x00100000002212bb
- (_Bool)brc_isCloudKitErrorRequiringAssetReupload;	// IMP=0x0010000000221157
- (_Bool)brc_isCloudKitErrorRequiringAssetRescan;	// IMP=0x0010000000220ffc
- (_Bool)brc_isCloudKitAccountTemporarilyUnavailable;	// IMP=0x0010000000220fe5
- (_Bool)brc_isCloudKitUnknownItemError;	// IMP=0x0010000000220fa2
- (_Bool)brc_isCloudKitPCSChainingError;	// IMP=0x0010000000220f5f
- (_Bool)brc_isCloudKitAtomicFailure;	// IMP=0x0010000000220f48
- (_Bool)brc_isCloudKitOutOfQuota;	// IMP=0x0010000000220f05
- (_Bool)brc_isCloudKitAssetFileModified;	// IMP=0x0010000000220eee
- (_Bool)brc_isCloudKitCancellationError;	// IMP=0x0010000000220ed7
- (id)brc_cloudKitErrorForZone:(id)arg1;	// IMP=0x0010000000220ec5
- (id)brc_cloudKitErrorForRecordID:(id)arg1;	// IMP=0x0010000000220eb3
- (id)brc_cloudKitErrorForSubscriptionID:(id)arg1;	// IMP=0x0010000000220ea1
- (id)br_cloudKitErrorForIdentifier:(id)arg1;	// IMP=0x0010000000220d5c
- (_Bool)brc_containsCloudKitInternalErrorCode:(long long)arg1;	// IMP=0x0010000000220cf1
- (_Bool)_brc_isCloudKitInternalErrorCode:(long long)arg1;	// IMP=0x0010000000220cbe
- (id)_brc_cloudKitInternalWithErrorCode:(long long)arg1;	// IMP=0x0010000000220aa4
- (_Bool)brc_containsCloudKitErrorCode:(long long)arg1;	// IMP=0x0010000000220a39
- (_Bool)_brc_isCloudKitErrorCode:(long long)arg1;	// IMP=0x00100000002209c5
- (_Bool)brc_checkErrorsFromCloudKit:(CDUnknownBlockType)arg1;	// IMP=0x0010000000220790
- (_Bool)brc_isEverRetriable;	// IMP=0x0010000000220717
- (_Bool)brc_shouldRetryLater;	// IMP=0x00100000002206aa
- (_Bool)brc_isUserInitiatedRetriable;	// IMP=0x001000000022066b
- (_Bool)brc_isRetriable;	// IMP=0x0010000000220484
- (double)br_suggestedRetryTimeInterval;	// IMP=0x0010000000220246
- (unsigned long long)brc_containerResetErrorForSharedZone:(_Bool)arg1 resetReason:(id *)arg2;	// IMP=0x001000000021fcd1
- (_Bool)brc_isResetError;	// IMP=0x001000000021fcb4
@end
