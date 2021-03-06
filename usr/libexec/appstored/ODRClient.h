//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSLock, NSMutableDictionary, NSString;
@protocol ODRClientProtocol;

@interface ODRClient : NSObject
{
    MISSING_TYPE *_application;	// 8 = 0x8
    _Bool _isAppClip;	// 16 = 0x10
    CDStruct_4c969caf _auditToken;	// 20 = 0x14
    id <ODRClientProtocol> _clientProxy;	// 56 = 0x38
    NSString *_requestingAppBundleID;	// 64 = 0x40
    NSMutableDictionary *_bundleRequestToDownloadRequest;	// 72 = 0x48
    NSLock *_readyLock;	// 80 = 0x50
    NSDictionary *_sandboxExtension;	// 88 = 0x58
}

+ (void)initialize;	// IMP=0x00200000000e4e95
- (void).cxx_destruct;	// IMP=0x00200000000ec11d
- (void)setAlwaysPreserved:(_Bool)arg1 forTags:(id)arg2 inBundle:(id)arg3;	// IMP=0x00100000000eb71f
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2 inBundle:(id)arg3;	// IMP=0x00100000000eb108
- (void)okToPurgeAssetPacks:(id)arg1;	// IMP=0x00100000000eae18
- (void)unpinTags:(id)arg1 inBundle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ea477
- (void)setLoadingPriority:(double)arg1 forTags:(id)arg2 inBundle:(id)arg3;	// IMP=0x00100000000ea0a3
- (void)conditionallyPinTags:(id)arg1 inBundle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e9061
- (void)pinTags:(id)arg1 inBundle:(id)arg2 priority:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e76ef
- (void)tagStateInBundle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e7185
- (void)beginWithBundleURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e6aff
- (void)beginODRSessionWithBundleURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e65b8
- (void)hello:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e613b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

