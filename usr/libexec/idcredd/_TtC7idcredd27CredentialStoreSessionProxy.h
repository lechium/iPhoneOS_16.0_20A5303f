//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7idcredd27CredentialStoreSessionProxy : NSObject
{
    MISSING_TYPE *jetsamTransaction;	// 8 = 0x8
    MISSING_TYPE *connection;	// 16 = 0x10
    MISSING_TYPE *partitions;	// 24 = 0x18
    MISSING_TYPE *storage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00400000000564c0
- (id)init;	// IMP=0x00100000000574e0
- (void)eraseLegacySEKeySlot:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056ff0
- (void)occupiedLegacySEKeySlotsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000056f90
- (void)allElementsOfCredential:(id)arg1 authData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056e90
- (void)payloadsOfCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056dd0
- (void)checkCompletenessOfCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056db0
- (void)elementsOfCredential:(id)arg1 elementIdentifiers:(id)arg2 authData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000056c60
- (void)payloadAuthACLForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056c40
- (void)setStateOfCredential:(id)arg1 to:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056b90
- (void)propertiesOfCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056b70
- (void)deleteCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056b50
- (void)credentialIdentifiersInPartitions:(id)arg1 docType:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056a70
- (void)credentialIdentifiersInPartitions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000569b0
- (void)replacePayloadOfCredential:(id)arg1 withPayload:(id)arg2 format:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000568c0
- (void)credentialIdentifierForPublicKeyIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056820
- (void)associateExternalPresentmentKeyWithCredential:(id)arg1 publicKeyIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056720
- (void)authorizeRemoteKeySigningKeyWithCredential:(id)arg1 remoteKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056700
- (void)generatePresentmentKeyForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056630
- (void)generateDeviceEncryptionKeyForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056610
- (void)generateKeySigningKeyForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000565f0
- (void)createCredentialInPartition:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056530
- (void)configureWithPartitions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056510
- (void)dealloc;	// IMP=0x00100000000564a0

@end
