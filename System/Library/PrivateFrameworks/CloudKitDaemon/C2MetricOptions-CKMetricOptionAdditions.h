//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <C2/C2MetricOptions.h>

@interface C2MetricOptions (CKMetricOptionAdditions)
+ (id)metricOptionsForEventMetric:(id)arg1 metricType:(long long)arg2 container:(id)arg3 config:(id)arg4 reportingCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00800000000c531f
+ (id)metricOptionsForNetworkRequest:(id)arg1;	// IMP=0x00800000000c523f
+ (id)metricOptionsForNetworkOperation:(id)arg1;	// IMP=0x00800000000c4d2d
- (void)_attributeCurrentContainer:(id)arg1 config:(id)arg2;	// IMP=0x00100000000c4b04
- (void)_setupC2MetricsEndpointWithContainer:(id)arg1;	// IMP=0x00100000000c49d1
@end

