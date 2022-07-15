//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCloudKitKeyElectionStore, IDSGroupServerKeyElectionStore, IDSKeychainKeyElectionStore, MISSING_TYPE;

@interface IDSAccountIdentityElector : NSObject
{
    IDSKeychainKeyElectionStore *_keychainElectionStore;	// 8 = 0x8
    IDSCloudKitKeyElectionStore *_cloudKitElectionStore;	// 16 = 0x10
    IDSGroupServerKeyElectionStore *_groupServerElectionStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002bbd0
@property(readonly, nonatomic) IDSGroupServerKeyElectionStore *groupServerElectionStore; // @synthesize groupServerElectionStore=_groupServerElectionStore;
@property(readonly, nonatomic) IDSCloudKitKeyElectionStore *cloudKitElectionStore; // @synthesize cloudKitElectionStore=_cloudKitElectionStore;
@property(readonly, nonatomic) IDSKeychainKeyElectionStore *keychainElectionStore; // @synthesize keychainElectionStore=_keychainElectionStore;
- (id)_fullClusterWithAccountIdentityClusterWithAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id *)arg4;	// IMP=0x001000000002ba80
- (id)_fullServiceIdentitySigningWithAccountIdentity:(id)arg1 type:(long long)arg2 error:(id *)arg3;	// IMP=0x001000000002b9e0
- (id)_fullServiceIdentityAdminWithAccountIdentity:(id)arg1 type:(long long)arg2 error:(id *)arg3;	// IMP=0x001000000002b940
- (id)_fullAccountIdentityWithError:(id *)arg1;	// IMP=0x001000000002b900
- (void)_cleanupFailedElectionWithFullAccountIdentityCluster:(id)arg1;	// IMP=0x001000000002b5d0
- (void)_createAccountKeysWithFullAccountIdentity:(id)arg1 serviceTypeNames:(id)arg2 oldCluster:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000027000
- (MISSING_TYPE *)_rollAccountKeyWithFullCluster:completion: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000026ab0
- (void)_getCurrentAccountClusterWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000026380
- (void)_getKeysForServiceTypeName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000255f0
- (void)rollAccountKeyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025240
- (void)getKeysForServiceTypeName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000025000
- (id)initWithKeychainElectionStore:(id)arg1 cloudKitElectionStore:(id)arg2 groupServerElectionStore:(id)arg3;	// IMP=0x0010000000024ed0

@end
