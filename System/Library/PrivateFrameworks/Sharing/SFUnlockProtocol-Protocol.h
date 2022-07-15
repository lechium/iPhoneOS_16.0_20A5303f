//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/NSObject-Protocol.h>
#import <Sharing/NSXPCProxyCreating-Protocol.h>

@class NSData, NSString, NSUUID, SFAutoUnlockDevice;
@protocol SFUnlockClientProtocol;

@protocol SFUnlockProtocol <NSObject, NSXPCProxyCreating>

@optional
- (void)cancelAuthenticationSessionWithID:(NSUUID *)arg1;
- (void)authenticateUsingClientProxy:(id <SFUnlockClientProtocol>)arg1 type:(unsigned long long)arg2 sessionID:(NSUUID *)arg3;
- (void)unlockStateForDevice:(NSString *)arg1 completionHandler:(void (^)(SFUnlockState *, NSError *))arg2;
- (void)establishStashBagWithManifest:(NSData *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)establishStashBagWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)unlockEnabledWithDevice:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)disableUnlockWithDevice:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)enableUnlockWithDevice:(NSString *)arg1 fromKey:(_Bool)arg2 withPasscode:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)authPromptInfoWithCompletionHandler:(void (^)(SFAutoUnlockNotificationModel *, NSError *))arg1;
- (void)autoUnlockStateWithCompletionHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)requestRelock;
- (void)cancelAutoUnlock;
- (void)attemptAutoUnlockForSiriWithClientProxy:(id <SFUnlockClientProtocol>)arg1;
- (void)completeAutoUnlockWithNotification:(_Bool)arg1;
- (void)attemptAutoUnlockWithoutNotifyingWatchWithClientProxy:(id <SFUnlockClientProtocol>)arg1;
- (void)attemptAutoUnlockWithClientProxy:(id <SFUnlockClientProtocol>)arg1;
- (void)clearPhoneAutoUnlockNotification:(_Bool)arg1;
- (void)donateDeviceUnlockedWithMask:(_Bool)arg1;
- (void)prewarmAutoUnlock;
- (void)disableAutoUnlockForDevice:(SFAutoUnlockDevice *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)cancelEnablingAutoUnlockForDevice:(SFAutoUnlockDevice *)arg1;
- (void)enableAutoUnlockWithDevice:(SFAutoUnlockDevice *)arg1 passcode:(NSString *)arg2 clientProxy:(id <SFUnlockClientProtocol>)arg3;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(void (^)(NSSet *, NSError *))arg1;
- (void)repairCloudPairing;
@end
