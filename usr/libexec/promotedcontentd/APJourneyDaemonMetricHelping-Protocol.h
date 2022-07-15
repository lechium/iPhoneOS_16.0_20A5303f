//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "APMetricPrimitiveCreating-Protocol.h"
#import "NSObject-Protocol.h"

@class APContentData, NSDictionary, NSString;

@protocol APJourneyDaemonMetricHelping <APMetricPrimitiveCreating, NSObject>
- (void)requestFailedForBundleID:(NSString *)arg1 adServer:(long long)arg2 withCode:(long long)arg3 countOfRequestedAds:(long long)arg4 placementType:(unsigned long long)arg5;
- (void)requestFailedForBundleID:(NSString *)arg1 withCode:(long long)arg2 countOfRequestedAds:(long long)arg3;
- (void)downloaded;
- (void)conversionForBundleID:(NSString *)arg1 source:(NSString *)arg2 conversionValue:(short)arg3;
- (void)discardedForBundleID:(NSString *)arg1 withCode:(long long)arg2;
- (void)receivedForBundleID:(NSString *)arg1 adServer:(long long)arg2 elapsedTime:(double)arg3 properties:(NSDictionary *)arg4 journeyStartRelayValues:(NSDictionary *)arg5;
- (void)receivedForBundleID:(NSString *)arg1 adServer:(long long)arg2 elapsedTime:(double)arg3 journeyStartRelayValues:(NSDictionary *)arg4;
- (void)receivedForBundleID:(NSString *)arg1 elapsedTime:(double)arg2 journeyStartRelayValues:(NSDictionary *)arg3;
- (id)initWithContentData:(APContentData *)arg1;
@end
