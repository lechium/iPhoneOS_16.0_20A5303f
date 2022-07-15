//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RMDeviceIdentity : NSObject
{
    NSObject *_identityLock;	// 8 = 0x8
    struct __SecKey *_privateKey;	// 16 = 0x10
    NSArray *_certificates;	// 24 = 0x18
}

+ (id)deviceIdentityForTesting;	// IMP=0x002000000002b74b
+ (id)sharedDeviceIdentity;	// IMP=0x001000000002b6f6
- (void).cxx_destruct;	// IMP=0x002000000002c465
@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(nonatomic) struct __SecKey *privateKey; // @synthesize privateKey=_privateKey;
- (void)_persistIdentityWithPrivateKey:(struct __SecKey *)arg1 certificateChain:(id)arg2 fileName:(id)arg3 isBAA:(_Bool)arg4;	// IMP=0x001000000002c2b8
- (void)_copyPersistedIdentityWithFileName:(id)arg1 isBAA:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002c130
- (void)_fetchOrCreateSelfSignedCertificateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002be72
- (void)_issueDeviceIdentityCertificateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002bdfe
- (void)_fetchDeviceIdentityCertificateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002bdec
- (void)deviceIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002ba15
- (void)_cachePrivateKey:(struct __SecKey *)arg1 certificates:(id)arg2;	// IMP=0x001000000002b8df
- (_Bool)_validDeviceIdentityCache;	// IMP=0x001000000002b7d3
- (id)init;	// IMP=0x001000000002b764

@end
