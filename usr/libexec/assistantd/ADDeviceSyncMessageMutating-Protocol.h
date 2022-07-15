//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ADDeviceSyncCommandPullDeltaRequest, ADDeviceSyncCommandPullDeltaResponse, ADDeviceSyncCommandPullGenerationsRequest, ADDeviceSyncCommandPullGenerationsResponse, ADDeviceSyncCommandPullSnapshotRequest, ADDeviceSyncCommandPullSnapshotResponse, ADDeviceSyncCommandPushGenerationsRequest, ADDeviceSyncCommandPushGenerationsResponse;

@protocol ADDeviceSyncMessageMutating <NSObject>
- (void)setCommandPullSnapshotResponse:(ADDeviceSyncCommandPullSnapshotResponse *)arg1;
- (void)setCommandPullSnapshotRequest:(ADDeviceSyncCommandPullSnapshotRequest *)arg1;
- (void)setCommandPullDeltaResponse:(ADDeviceSyncCommandPullDeltaResponse *)arg1;
- (void)setCommandPullDeltaRequest:(ADDeviceSyncCommandPullDeltaRequest *)arg1;
- (void)setCommandPullGenerationsResponse:(ADDeviceSyncCommandPullGenerationsResponse *)arg1;
- (void)setCommandPullGenerationsRequest:(ADDeviceSyncCommandPullGenerationsRequest *)arg1;
- (void)setCommandPushGenerationsResponse:(ADDeviceSyncCommandPushGenerationsResponse *)arg1;
- (void)setCommandPushGenerationsRequest:(ADDeviceSyncCommandPushGenerationsRequest *)arg1;
- (void)setType:(long long)arg1;
- (void)setSequence:(unsigned long long)arg1;
@end
