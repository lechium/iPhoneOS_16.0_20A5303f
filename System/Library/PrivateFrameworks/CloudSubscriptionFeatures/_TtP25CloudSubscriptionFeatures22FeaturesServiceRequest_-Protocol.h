//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol _TtP25CloudSubscriptionFeatures22FeaturesServiceRequest_
- (void)requestGeoClassificationFor:(NSString *)arg1 bundleID:(NSString *)arg2 altDSID:(NSString *)arg3 ignoreCache:(_Bool)arg4 completion:(void (^)(_TtC25CloudSubscriptionFeatures21GeoClassificationInfo *, NSError *))arg5;
- (void)getFeatureEligibilityFor:(NSString *)arg1 bundleID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)clearCacheAndNotify;
- (void)requestFeatureWithId:(NSString *)arg1 ignoreCache:(_Bool)arg2 completion:(void (^)(CloudFeature *, NSError *))arg3;
@end
