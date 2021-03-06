//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol PUUnlockServer <NSObject>
- (void)requestDeviceSetWristDetectionDisabled:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)queryRemoteDeviceState:(void (^)(PURemoteDeviceState *, NSError *))arg1;
- (void)didCompleteRemoteAction:(_Bool)arg1 error:(NSError *)arg2;
- (void)requestRemoteDeviceRemoveLockout;
- (void)requestRemoteDeviceUnlockNotification;
- (void)requestRemoteDeviceRemoteAction:(long long)arg1 type:(long long)arg2;
- (void)disableOnlyRemoteUnlock;
- (void)enableOnlyRemoteUnlockWithPasscode:(NSString *)arg1;
- (void)unpairForUnlock;
- (void)pairForUnlockWithPasscode:(NSString *)arg1;
- (void)checkIn;
@end

