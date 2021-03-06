//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IDSContinuity, NSData, NSError, NSUUID;

@protocol IDSContinuityDelegate <NSObject>
- (void)continuityDidUpdateState:(IDSContinuity *)arg1;

@optional
- (void)continuity:(IDSContinuity *)arg1 didStopTrackingPeer:(NSUUID *)arg2 type:(long long)arg3;
- (void)continuity:(IDSContinuity *)arg1 didStartTrackingPeer:(NSUUID *)arg2 type:(long long)arg3 error:(NSError *)arg4;
- (void)continuity:(IDSContinuity *)arg1 didLosePeer:(NSUUID *)arg2 type:(long long)arg3;
- (void)continuity:(IDSContinuity *)arg1 didDiscoverType:(long long)arg2 withData:(NSData *)arg3 fromPeer:(NSUUID *)arg4;
- (void)continuity:(IDSContinuity *)arg1 didFailToStartScanningForType:(long long)arg2 withError:(NSError *)arg3;
- (void)continuity:(IDSContinuity *)arg1 didStopScanningForType:(long long)arg2;
- (void)continuity:(IDSContinuity *)arg1 didStartScanningForType:(long long)arg2;
- (void)continuity:(IDSContinuity *)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(NSError *)arg3;
- (void)continuity:(IDSContinuity *)arg1 didStopAdvertisingOfType:(long long)arg2 withError:(NSError *)arg3;
- (void)continuity:(IDSContinuity *)arg1 didStopAdvertisingOfType:(long long)arg2;
- (void)continuity:(IDSContinuity *)arg1 didStartAdvertisingOfType:(long long)arg2;
@end

