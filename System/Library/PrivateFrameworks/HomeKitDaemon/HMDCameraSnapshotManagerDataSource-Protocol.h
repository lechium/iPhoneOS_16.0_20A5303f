//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAccessory, HMDCameraResidentMessageHandler, HMDCameraSnapshotLocal, HMDCameraSnapshotRemoteRelayReceiver, HMDCameraSnapshotSessionID, HMDSnapshotLocalSession, HMDSnapshotRequestHandler, HMFMessage, NSObject, NSUUID;
@protocol HMDCameraGetSnapshotProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMDSnapshotRequestHandlerProtocol, OS_dispatch_queue;

@protocol HMDCameraSnapshotManagerDataSource <NSObject>
@property(readonly, getter=isWatchDevice) _Bool watchDevice;
@property(readonly) _Bool supportsCameraSnapshotRequestViaRelay;
- (HMDSnapshotLocalSession *)createLocalSnapshotSessionWithID:(HMDCameraSnapshotSessionID *)arg1 accessory:(HMDAccessory *)arg2 snapshotGetter:(id <HMDCameraGetSnapshotProtocol>)arg3 message:(HMFMessage *)arg4 waitPeriod:(double)arg5 reachabilityPath:(unsigned long long)arg6 cameraLocallyReachable:(_Bool)arg7 snapshotForNotification:(_Bool)arg8;
- (HMDCameraSnapshotRemoteRelayReceiver *)createSnapshotRemoteRelayReceiverWithSessionID:(HMDCameraSnapshotSessionID *)arg1 workQueue:(NSObject<OS_dispatch_queue> *)arg2 accessory:(HMDAccessory *)arg3 delegate:(id <HMDCameraSnapshotRemoteRelayReceiverDelegate>)arg4 delegateQueue:(NSObject<OS_dispatch_queue> *)arg5 uniqueIdentifier:(NSUUID *)arg6 snapshotRequestHandler:(HMDSnapshotRequestHandler *)arg7 residentMessageHandler:(HMDCameraResidentMessageHandler *)arg8;
- (HMDCameraSnapshotLocal *)createSnapshotLocalWithSessionID:(HMDCameraSnapshotSessionID *)arg1 workQueue:(NSObject<OS_dispatch_queue> *)arg2 accessory:(HMDAccessory *)arg3 delegate:(id <HMDCameraSnapshotLocalDelegate>)arg4 delegateQueue:(NSObject<OS_dispatch_queue> *)arg5 snapshotRequestHandler:(id <HMDSnapshotRequestHandlerProtocol>)arg6;
@end
