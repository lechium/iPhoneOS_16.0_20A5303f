//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUPairedPeer;

@protocol CUPairingDaemonXPCInterface
- (void)startMonitoringWithOptions:(unsigned long long)arg1;
- (void)showWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)removePairedPeer:(CUPairedPeer *)arg1 options:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)savePairedPeer:(CUPairedPeer *)arg1 options:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)findPairedPeer:(CUPairedPeer *)arg1 options:(unsigned long long)arg2 completion:(void (^)(CUPairedPeer *, NSError *))arg3;
- (void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(void (^)(CUPairingIdentity *, NSError *))arg2;
@end

