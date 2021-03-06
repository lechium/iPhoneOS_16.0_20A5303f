//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ACDPairedDeviceAccountCache : NSObject
{
    NSObject<OS_dispatch_queue> *_synchronizationQueue;	// 8 = 0x8
    _Bool _accountsIsValid;	// 16 = 0x10
    NSArray *_accounts;	// 24 = 0x18
    NSMutableArray *_completions;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x004000000005d97a
- (void).cxx_destruct;	// IMP=0x000000000005e380
- (void)invalidate;	// IMP=0x000000000005e2af
- (void)_didFetchAccounts:(id)arg1 error:(id)arg2;	// IMP=0x000000000005ded6
- (void)accountsFromRemoteDeviceProxy:(id)arg1 ignoreCache:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000005da92
- (id)init;	// IMP=0x000000000005d9cf

@end

