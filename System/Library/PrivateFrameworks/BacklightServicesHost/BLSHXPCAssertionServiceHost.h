//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSProcessHandle, NSMutableDictionary, NSString;
@protocol BLSAssertionService;

__attribute__((visibility("hidden")))
@interface BLSHXPCAssertionServiceHost : NSObject
{
    id <BLSAssertionService> _localService;	// 8 = 0x8
    BSProcessHandle *_remoteProcessHandle;	// 16 = 0x10
    NSMutableDictionary *_assertionProxies;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    _Bool _valid;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000027d89
- (oneway void)destroyAssertion:(id)arg1;	// IMP=0x0000000000027d7f
- (oneway void)restartAssertionTimeoutTimer:(id)arg1;	// IMP=0x0000000000027d44
- (oneway void)cancelAssertion:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000027cda
- (oneway void)acquireAssertion:(id)arg1;	// IMP=0x0000000000027c9f
- (id)acquireAssertionForDescriptor:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000027901
- (void)invalidate;	// IMP=0x0000000000027631
- (void)dealloc;	// IMP=0x000000000002757a
- (id)initWithLocalService:(id)arg1 peer:(id)arg2;	// IMP=0x000000000002747f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
