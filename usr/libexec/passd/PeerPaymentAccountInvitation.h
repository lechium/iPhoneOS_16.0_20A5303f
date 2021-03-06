//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PeerPaymentAccountInvitation
{
}

+ (id)_propertySettersForPeerPaymentAccountInvitation;	// IMP=0x0040000000046331
+ (id)_peerPaymentAccountInvitationsWithQuery:(id)arg1;	// IMP=0x001000000004617d
+ (id)_predicateForPeerPaymentAccountPID:(long long)arg1;	// IMP=0x0010000000045f9d
+ (id)invitationsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000045d73
+ (void)deleteInvitationsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000045cda
+ (id)insertInvitations:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000045abd
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000045a8e
+ (id)databaseTable;	// IMP=0x0010000000045a81
- (id)peerPaymentAccountInvitation;	// IMP=0x0040000000046010
- (id)initWithInvitation:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000045e27

@end

