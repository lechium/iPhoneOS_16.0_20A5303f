//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (BRAdditions)
+ (id)brc_errorCorruptedDB;	// IMP=0x008000000003eca2
+ (id)brc_errorForRejectedDeletionOfItem:(id)arg1;	// IMP=0x008000000003ebb4
+ (id)brc_errorCollisionWithItem:(id)arg1;	// IMP=0x008000000003eac6
+ (id)brc_errorCiconiaFailed:(id)arg1;	// IMP=0x008000000003ea8e
+ (id)brc_errorCiconiaAborted:(id)arg1;	// IMP=0x008000000003ea56
+ (id)brc_errorCoreAnalyticsErrorCountMismatchWithExpected:(id)arg1 actual:(id)arg2;	// IMP=0x008000000003ea15
+ (id)brc_errorItemChanged;	// IMP=0x008000000003e9e4
+ (id)brc_addPartialError:(id)arg1 forURL:(id)arg2 toError:(id)arg3;	// IMP=0x008000000003e786
+ (id)brc_errorItemNotPausedFromSync;	// IMP=0x008000000003e755
+ (id)brc_errorItemAlreadyPausedFromSyncByBundleID:(id)arg1;	// IMP=0x008000000003e668
+ (id)brc_errorItemIneligibleFromSyncForInode:(id)arg1;	// IMP=0x008000000003e57b
+ (id)brc_errorItemInTrash;	// IMP=0x008000000003e54a
+ (id)brc_errorItemNotShareable;	// IMP=0x008000000003e519
+ (id)brc_errorFolderHierarchyTooDeep;	// IMP=0x008000000003e4e8
+ (id)brc_errorFolderHasSharedSubitems;	// IMP=0x008000000003e4b7
+ (id)brc_errorFolderHasSharedSubitemsWithSharedByMeURLs:(id)arg1 sharedToMeURLs:(id)arg2;	// IMP=0x008000000003e360
+ (id)brc_errorItemAlreadyPartOfAShare;	// IMP=0x008000000003e32f
+ (id)brc_errorSyncBlocked;	// IMP=0x008000000003e2fe
+ (id)brc_errorDriveDisabledOrAppLibraryDisabled;	// IMP=0x008000000003e2cd
+ (id)brc_errorAcceptAlreadyInProgressForURL:(id)arg1;	// IMP=0x008000000003e295
+ (id)brc_errorCompatibilityIssue;	// IMP=0x008000000003e264
+ (id)brc_errorOperationCancelled;	// IMP=0x008000000003e233
+ (id)brc_errorDocumentWithFilename:(id)arg1 size:(long long)arg2 isTooLargeToUpload:(long long)arg3;	// IMP=0x008000000003e1f0
+ (id)brc_errorAccountMismatch;	// IMP=0x008000000003e1bf
+ (id)brc_errorDocumentEvicted;	// IMP=0x008000000003e18e
+ (id)brc_errorDocumentIsNoLongerSharedAtURL:(id)arg1;	// IMP=0x008000000003e10e
+ (id)brc_errorDocumentIsNotSharedAtURL:(id)arg1;	// IMP=0x008000000003e08e
+ (id)brc_errorDocumentIsNotShared;	// IMP=0x008000000003e05d
+ (id)brc_errorDocumentAtURL:(id)arg1 isNotExternalToAppLibrary:(id)arg2;	// IMP=0x008000000003deec
+ (id)brc_errorNoDocument:(id)arg1 underlyingPOSIXError:(int)arg2;	// IMP=0x008000000003dda0
+ (id)brc_errorNoDocumentAtURL:(id)arg1 underlyingError:(id)arg2;	// IMP=0x008000000003dc52
+ (id)brc_errorNoSuitableClientApp;	// IMP=0x008000000003dc21
+ (id)brc_errorSyncDisabled:(id)arg1;	// IMP=0x008000000003dbe9
+ (id)brc_errorClientZoneNotFound:(id)arg1;	// IMP=0x008000000003dbb1
+ (id)brc_errorNoAppLibraryForBundle:(id)arg1;	// IMP=0x008000000003db79
+ (id)brc_errorAppLibraryNotFound:(id)arg1;	// IMP=0x008000000003db41
+ (id)brc_errorUnknownKey:(id)arg1;	// IMP=0x008000000003db09
+ (id)brc_errorItemNotFound:(id)arg1;	// IMP=0x008000000003dad1
+ (id)brc_errorPermissionErrorAtURL:(id)arg1;	// IMP=0x008000000003d9ad
+ (id)brc_errorPermissionError:(id)arg1;	// IMP=0x008000000003d8b1
+ (id)brc_errorPathOutsideAnyCloudDocsAppLibraryAtURL:(id)arg1;	// IMP=0x008000000003d78d
+ (id)brc_errorNotInCloud:(id)arg1;	// IMP=0x008000000003d672
+ (id)brc_errorNotOnDisk:(id)arg1;	// IMP=0x008000000003d569
+ (id)brc_errorInvalidParameter:(id)arg1 value:(id)arg2;	// IMP=0x008000000003d528
+ (id)brc_errorMethodNotImplemented:(SEL)arg1;	// IMP=0x008000000003d468
+ (id)brc_errorDaemonShouldBeLoggedOut;	// IMP=0x008000000003d437
+ (id)brc_errorLoggedOut;	// IMP=0x008000000003d406
+ (id)brc_errorNoBRItemService;	// IMP=0x008000000003d3d5
+ (id)brc_errorNotSupportedInFPFS;	// IMP=0x008000000003d3a4
+ (id)br_errorFromErrno;	// IMP=0x008000000003d12d
+ (id)br_errorWithPOSIXCode:(int)arg1 description:(id)arg2;	// IMP=0x008000000003cfba
+ (id)br_errorWithPOSIXCode:(int)arg1;	// IMP=0x008000000003ce6d
+ (id)br_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 description:(id)arg4;	// IMP=0x008000000003ccd8
+ (id)br_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x008000000003cb53
- (id)br_underlyingPOSIXError;	// IMP=0x001000000003d2b3
- (_Bool)br_isCloudDocsErrorCode:(long long)arg1;	// IMP=0x001000000003d23f
- (_Bool)br_isCocoaErrorCode:(long long)arg1;	// IMP=0x001000000003d1cb
- (_Bool)br_isPOSIXErrorCode:(long long)arg1;	// IMP=0x001000000003d157
@end

