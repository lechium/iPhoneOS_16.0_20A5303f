//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC19appstorecomponentsd19LockupFetcherClient : NSObject
{
    MISSING_TYPE *fetcher;	// 8 = 0x8
    MISSING_TYPE *service;	// 48 = 0x30
    MISSING_TYPE *appStateController;	// 88 = 0x58
    MISSING_TYPE *bag;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000008f2f0
- (id)init;	// IMP=0x001000000008f290
- (void)getLockupCollectionWithRequest:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008f1e0
- (void)getLockupForBundleID:(id)arg1 withContext:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008e9d0
- (void)getLockupsWithRequest:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008e090
- (void)getLockupWithRequest:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008dbd0

@end
