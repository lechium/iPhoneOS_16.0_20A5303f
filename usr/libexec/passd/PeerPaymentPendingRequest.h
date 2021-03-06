//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PeerPaymentPendingRequest
{
}

+ (id)_propertySettersForPeerPaymentPendingRequestWithProperties:(id)arg1 effectiveProperties:(id *)arg2;	// IMP=0x00400000002ee185
+ (id)_peerPaymentPendingRequestsWithQuery:(id)arg1;	// IMP=0x00100000002ede54
+ (id)_pendingRequestsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00100000002eddf5
+ (id)_predicateForPeerPaymentPendingRequestWithAccountPID:(long long)arg1;	// IMP=0x00100000002edd82
+ (id)_predicateForPeerPaymentPendingRequestWithRequestToken:(id)arg1;	// IMP=0x00100000002edd5f
+ (id)anyInDatabase:(id)arg1;	// IMP=0x00100000002edccb
+ (void)deleteEntitiesForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002edc32
+ (void)deleteEntitiesForRequestTokens:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002eda45
+ (void)insertOrUpdatePeerPaymentPendingRequests:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002ed7be
+ (id)peerPaymentPendingRequestsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002ed27e
+ (id)peerPaymentPendingRequestsForRequestTokens:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002ed046
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000002ecbff
+ (id)databaseTable;	// IMP=0x00100000002ecbf2
- (void)updateWithPeerPaymentPendingRequest:(id)arg1;	// IMP=0x00400000002ed30a
- (id)initWithPeerPaymentPendingRequest:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002ecc2e

@end

