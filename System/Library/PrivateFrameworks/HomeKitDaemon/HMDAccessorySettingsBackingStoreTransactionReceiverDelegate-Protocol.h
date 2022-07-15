//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccessorySettingConstraintModel, HMDAccessorySettingGroupModel, HMDAccessorySettingModel;

@protocol HMDAccessorySettingsBackingStoreTransactionReceiverDelegate
- (void)handleRemovedSettingConstraintModel:(HMDAccessorySettingConstraintModel *)arg1 completion:(void (^)(NSError *))arg2;
- (void)handleUpdatedSettingConstraintModel:(HMDAccessorySettingConstraintModel *)arg1 completion:(void (^)(NSError *))arg2;
- (void)handleRemovedGroupModel:(HMDAccessorySettingGroupModel *)arg1 completion:(void (^)(NSError *))arg2;
- (void)handleUpdatedGroupModel:(HMDAccessorySettingGroupModel *)arg1 completion:(void (^)(NSError *))arg2;
- (void)handleRemovedSettingModel:(HMDAccessorySettingModel *)arg1 completion:(void (^)(NSError *))arg2;
- (void)handleUpdatedSettingModel:(HMDAccessorySettingModel *)arg1 completion:(void (^)(_Bool, NSError *, HMDAccessorySetting *))arg2;
@end
