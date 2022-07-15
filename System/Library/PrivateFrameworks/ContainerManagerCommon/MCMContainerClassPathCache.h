//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MCMContainerClassPathCache : NSObject
{
    NSMutableDictionary *_lookup;	// 8 = 0x8
    struct os_unfair_lock_s _lookupLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004a4a5
- (void)_lock_flush;	// IMP=0x000000000004a43b
- (id)_lock_containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 typeClass:(Class)arg3;	// IMP=0x000000000004a0a1
- (void)userIdentityCache:(id)arg1 didAddUserIdentity:(id)arg2;	// IMP=0x000000000004a070
- (void)userIdentityCache:(id)arg1 didInvalidateUserIdentity:(id)arg2;	// IMP=0x000000000004a033
- (id)containerClassPathWithURL:(id)arg1 reference:(id)arg2;	// IMP=0x0000000000049e87
- (id)referenceForPOSIXUser:(id)arg1;	// IMP=0x0000000000049c97
- (void)flush;	// IMP=0x0000000000049c3a
- (id)containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 typeClass:(Class)arg3;	// IMP=0x0000000000049b9d
- (id)containerClassPathForContainerIdentity:(id)arg1 typeClass:(Class)arg2;	// IMP=0x0000000000049ad7
- (id)init;	// IMP=0x00000000000499fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
