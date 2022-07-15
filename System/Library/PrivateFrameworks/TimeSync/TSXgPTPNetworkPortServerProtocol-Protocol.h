//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TimeSync/TSXgPTPPortServerProtocol-Protocol.h>

@protocol TSXgPTPNetworkPortServerProtocol <TSXgPTPPortServerProtocol>
- (void)deregisterAsyncCallback:(void (^)(NSError *))arg1;
- (void)registerAsyncCallback:(void (^)(NSError *))arg1;
- (void)removeClient:(void (^)(_Bool))arg1;
- (void)addClient:(void (^)(_Bool))arg1;
- (void)disablePort:(void (^)(NSError *))arg1;
- (void)enablePort:(void (^)(NSError *))arg1;
- (void)restoreReceiveMatching:(void (^)(NSError *))arg1;
- (void)overrideReceiveMatchingWithRemoteClockIdentity:(unsigned long long)arg1 remotePortNumber:(unsigned short)arg2 reply:(void (^)(NSError *))arg3;
- (void)requestRemoteMessageIntervalsWithPDelayMessageInterval:(BOOL)arg1 syncMessageInterval:(BOOL)arg2 announceMessageInterval:(BOOL)arg3 replu:(void (^)(NSError *))arg4;
@end
