//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol ADAppTracking_XPC
- (void)latestPersonalizedAdsConsentVersion:(void (^)(long long))arg1;
- (void)shouldAppStoreDisplayAdvertisingScreen:(void (^)(_Bool))arg1;
- (void)shouldDisplayPersonalizedAdsUI:(void (^)(_Bool))arg1;
- (void)getAccountLevelSwitchDisabledReasonWithHandler:(void (^)(long long))arg1;
- (void)setPersonalizedAds:(_Bool)arg1 withCompletionHandler:(void (^)(_Bool))arg2;
@end

