//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface GSClient : NSObject
{
    NSMutableDictionary *_storageVolPaths;	// 8 = 0x8
    NSMutableSet *_stagingPrefixes;	// 16 = 0x10
    struct GSCredential _creds;	// 24 = 0x18
    id _openHandleTx;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000017571
- (void)removeAdditionsInStorage:(long long)arg1 removalSpec:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000016989
- (void)createAdditionInStorage:(long long)arg1 stagedFileDescriptor:(id)arg2 creationInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000016135
- (void)setAdditionNameSpaceInStorage:(long long)arg1 nameSpace:(id)arg2 additionName:(id)arg3 value:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000015b19
- (void)setAdditionDisplayNameInStorage:(long long)arg1 nameSpace:(id)arg2 additionName:(id)arg3 value:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000015447
- (void)mergeAdditionInfoValueInStorage:(long long)arg1 nameSpace:(id)arg2 additionName:(id)arg3 value:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000014bb8
- (void)setAdditionOptionsInStorage:(long long)arg1 nameSpace:(id)arg2 additionName:(id)arg3 value:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000014407
- (void)checkItemAtURLValidInsidePermanentStorage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000142e4
- (void)listAdditionsOfStorage:(long long)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 andEnumerationState:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000013904
- (void)getAdditionsInStorage:(long long)arg1 andNameSpace:(id)arg2 named:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000013077
- (void)getAdditionInStorage:(long long)arg1 andNameSpace:(id)arg2 named:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000129ca
- (oneway void)permanentStorageClose:(unsigned long long)arg1;	// IMP=0x00100000000128e4
- (void)permanentStorageOpenForHandle:(id)arg1 withRemoteID:(unsigned long long)arg2 andDocumentID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000012174
- (void)permanentStorageIDForHandle:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011f2e
- (void)permanentStoragePrefixForHandle:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011b41
- (oneway void)stagingPrefixRelinquish:(id)arg1;	// IMP=0x0010000000011a9f
- (void)_stagingPrefixCleanup:(id)arg1;	// IMP=0x0010000000011915
- (void)stagingPrefixForDevice:(int)arg1 volumeUUID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011264
- (void)isPermanentStorageSupportedForHandle:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010fb5
- (void)hintDocIDCreationForFileHandle:(id)arg1;	// IMP=0x0010000000010e4d
- (void)getFileIdForDocumentId:(unsigned long long)arg1 onDevice:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010ca9
- (void)requestFreeSpace:(unsigned long long)arg1 forVolume:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000107ca
- (id)_getCachedVolPath:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x0010000000010697
- (id)description;	// IMP=0x001000000001066f
- (void)dealloc;	// IMP=0x0010000000010631
- (void)invalidate;	// IMP=0x001000000001042e
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000001030e

@end

