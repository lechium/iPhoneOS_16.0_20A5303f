//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHome, HMDRemoteDeviceMessageDestination, HMFMessageDispatcher, NSArray, NSString, NSUUID;

@protocol HMDAccessorySettingsMessageHandler
- (void)notifyOfUpdatedValue:(id)arg1 settingKeyPath:(NSString *)arg2;
- (void)relayReplaceConstraints:(NSArray *)arg1 constraintIdsToRemove:(NSArray *)arg2 keyPath:(NSString *)arg3 destination:(HMDRemoteDeviceMessageDestination *)arg4 completion:(void (^)(NSError *))arg5;
- (void)relayUpdateValue:(id)arg1 keyPath:(NSString *)arg2 destination:(HMDRemoteDeviceMessageDestination *)arg3 completion:(void (^)(id, unsigned long long, NSError *))arg4;
- (void)unconfigureFromSetting:(NSUUID *)arg1;
- (void)configureForSetting:(NSUUID *)arg1 allowSharedAdminEditConstraints:(_Bool)arg2;
- (void)configureWithMessageDispatcher:(HMFMessageDispatcher *)arg1 home:(HMDHome *)arg2;
@end

