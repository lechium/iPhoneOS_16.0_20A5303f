//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TKSEPKey.h"

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface TKLocalSEPKey : TKSEPKey
{
    id _keyHolder;	// 8 = 0x8
    id _accessControl;	// 16 = 0x10
    id _keyType;	// 24 = 0x18
    NSXPCConnection *_caller;	// 32 = 0x20
}

+ (void)set_testing_callerEntitlements:(id)arg1;	// IMP=0x006000000001d84e
+ (void)setupKeybagForTesting:(_Bool)arg1;	// IMP=0x006000000001d848
+ (_Bool)hasSEP;	// IMP=0x006000000001d840
+ (void)setContextErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x006000000001d83a
+ (void)runsInSystemSession;	// IMP=0x006000000001d834
- (void).cxx_destruct;	// IMP=0x000000000001df5d
@property(readonly, nonatomic) NSXPCConnection *caller; // @synthesize caller=_caller;
- (_Bool)lifetimeControlWithType:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000001defa
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001dea8
- (id)recryptData:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001de56
- (id)computeSharedSecret:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001dd20
- (id)signDigest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001dcaf
- (id)publicKeyWithError:(id *)arg1;	// IMP=0x000000000001dc13
- (_Bool)deleteWithError:(id *)arg1;	// IMP=0x000000000001dc0b
- (id)objectID;	// IMP=0x000000000001dbe7
- (id)_initWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl *)arg3 options:(id)arg4 authContext:(id)arg5 caller:(id)arg6 error:(id *)arg7;	// IMP=0x000000000001da31
- (struct __SecAccessControl *)accessControl;	// IMP=0x000000000001da20
- (id)_initWithObjectID:(id)arg1 authContext:(id)arg2 caller:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001d8a1
- (_Bool)systemKey;	// IMP=0x000000000001d899
- (id)keyType;	// IMP=0x000000000001d884
- (long long)keySize;	// IMP=0x000000000001d865
@property(readonly, nonatomic) struct __SecKey *key;

@end

