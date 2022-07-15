//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTServiceDescriptor;

@protocol CTXPCServiceCellularUsagePolicyInterface
- (void)setPrivacyProxy:(CTServiceDescriptor *)arg1 enabled:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)privacyProxy:(CTServiceDescriptor *)arg1 completion:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)setOverriddenInterfaceCostInexpensive:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)overriddenInterfaceCostInexpensiveWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)setInterfaceCost:(CTServiceDescriptor *)arg1 expensive:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)interfaceCostExpensive:(CTServiceDescriptor *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)isHighDataModeSupported:(CTServiceDescriptor *)arg1 completion:(void (^)(_Bool))arg2;
- (void)setSmartDataMode:(CTServiceDescriptor *)arg1 enable:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)smartDataMode:(CTServiceDescriptor *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)isSmartDataModeSupportedWithCompletion:(void (^)(_Bool))arg1;
- (void)setLowDataMode:(CTServiceDescriptor *)arg1 enable:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)lowDataMode:(CTServiceDescriptor *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setReliableNetworkFallback:(CTServiceDescriptor *)arg1 enable:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)reliableNetworkFallback:(CTServiceDescriptor *)arg1 completion:(void (^)(_Bool, _Bool, NSError *))arg2;
@end
