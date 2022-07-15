//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (CLSAdditions)
+ (id)cls_draftsURLAndReturnError:(id *)arg1;	// IMP=0x0020000000019d85
+ (id)cls_draftsURL;	// IMP=0x0020000000019d71
+ (id)cls_documentsURLAndReturnError:(id *)arg1;	// IMP=0x0020000000019c8e
+ (id)cls_documentsURL;	// IMP=0x0020000000019c7a
+ (void)cls_getUbiquitousContainerURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0020000000019b58
+ (id)cls_ubiquitousContainerURL;	// IMP=0x0020000000019a9e
+ (id)cls_configURL;	// IMP=0x00200000000199d1
+ (id)cls_libraryURL;	// IMP=0x00200000000198a5
+ (_Bool)cls_deleteFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x002000000001bef2
+ (void)cls_deleteFileAtExpectedURL:(id)arg1 containerURL:(id)arg2 itemID:(id)arg3 ownerName:(id)arg4 zoneName:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x002000000001bd87
+ (void)cls_urlSuitableForOpeningForExpectedURL:(id)arg1 containerURL:(id)arg2 itemID:(id)arg3 ownerName:(id)arg4 zoneName:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x002000000001a93e
+ (id)cls_ubiquitousContainerURL_Imp:(id *)arg1;	// IMP=0x002000000001a6de
- (unsigned long long)_cls_stableHash;	// IMP=0x001000000001a69a
- (void)cls_removeCachedResourceValueForKeys:(id)arg1;	// IMP=0x001000000001a570
- (id)cls_createDirectoryIfNeeded:(id *)arg1;	// IMP=0x001000000001a3a1
- (_Bool)cls_isParentOfURL:(id)arg1;	// IMP=0x001000000001a301
@property(readonly, nonatomic) _Bool cls_fileExists;
@property(readonly, nonatomic) _Bool cls_isUploaded;
@property(readonly, nonatomic) _Bool cls_isUbiquitous;
- (id)cls_pathRelativeToURL:(id)arg1;	// IMP=0x0010000000019e68
- (id)deleteContent;	// IMP=0x001000000001dc94
- (long long)totalAllocatedSizeIncludingSubDirectories:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000001d663
- (void)attachSandboxExtensionToken:(id)arg1;	// IMP=0x001000000001d656
- (id)sandboxExtensionTokenForProcess:(CDStruct_6ad76789)arg1;	// IMP=0x001000000001d5b1
- (id)sandboxExtensionTokenForAnyProcess;	// IMP=0x001000000001d525
- (void)cls_performWithSandboxAccess:(CDUnknownBlockType)arg1;	// IMP=0x001000000001d4ba
- (void)cls_checkForCKShareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001cf37
- (void)cls_createShareIfNeededWithOrgAdminUserRecordID:(id)arg1 userRecordID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001c1d0
@end
