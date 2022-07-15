//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface InstallEBookDownloadOperation
{
    _Bool _isSharedDownload;	// 91 = 0x5b
    NSString *_bookPath;	// 96 = 0x60
}

+ (id)sharedBookContainerPath;	// IMP=0x0040000000141747
+ (id)sharedBookContainerCachesPath;	// IMP=0x00100000001413ff
- (void).cxx_destruct;	// IMP=0x0020000000144980
- (id)_syncedBooksPath;	// IMP=0x0010000000144904
- (id)_storeFrontIdentifier;	// IMP=0x00100000001447b2
- (void)_removeDuplicateEntry:(id)arg1;	// IMP=0x001000000014456e
- (id)_newManifestEntry:(_Bool)arg1 withFileName:(id)arg2;	// IMP=0x0010000000143aea
- (id)_newManifestEntry:(id)arg1;	// IMP=0x0010000000143ad3
- (_Bool)_installMediaAsset:(id)arg1 assetInstalledPath:(id *)arg2 fileName:(id *)arg3 drmPath:(id *)arg4 error:(id *)arg5;	// IMP=0x00100000001425af
- (id)_existingManifestEntry;	// IMP=0x0010000000142440
- (id)_bookManifest;	// IMP=0x001000000014221a
- (void)_addPurchaseManifestItem:(_Bool)arg1;	// IMP=0x0010000000141a42
- (void)run;	// IMP=0x001000000014080e

@end
