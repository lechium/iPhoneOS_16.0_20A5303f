//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIMetricsPageRenderEvent : SSMetricsBaseEvent
{
    NSMutableArray *_domChanges;	// 8 = 0x8
    NSMutableArray *_requests;	// 16 = 0x10
    NSDictionary *_metricsBase;	// 24 = 0x18
}

+ (id)_sampleWindowStartTime;	// IMP=0x001000000016a0ba
+ (void)_setSampleWindowStartTime:(id)arg1;	// IMP=0x001000000016a099
+ (double)_randomDouble;	// IMP=0x001000000016a05f
+ (_Bool)shouldCollectPageRenderDataForDocument:(id)arg1;	// IMP=0x0010000000169fdc
+ (_Bool)shouldCollectPageRenderData;	// IMP=0x0010000000169e47
- (void).cxx_destruct;	// IMP=0x000000000016c936
@property(copy, nonatomic) NSDictionary *metricsBase; // @synthesize metricsBase=_metricsBase;
@property(readonly, copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(readonly, copy, nonatomic) NSArray *domChanges; // @synthesize domChanges=_domChanges;
- (void)populateObjectInspector:(id)arg1;	// IMP=0x000000000016bceb
@property(readonly, copy) NSString *description;
- (void)appendPropertiesToBody:(id)arg1;	// IMP=0x000000000016b0e8
@property(readonly, nonatomic, getter=isReadyForSubmission) _Bool readyForSubmission;
- (void)appendSamplingPropertiesFromClientContext:(id)arg1;	// IMP=0x000000000016adbf
- (void)appendMetricsBaseProperties:(id)arg1;	// IMP=0x000000000016adad
@property(nonatomic, setter=setXPSamplingPercentageUsers:) double xpSamplingPercentageUsers;
@property(nonatomic, setter=setXPSamplingForced:) _Bool xpSamplingForced;
@property(nonatomic, setter=setXPSessionDuration:) double xpSessionDuration;
@property(nonatomic) double pageUserReadyTime;
@property(nonatomic) double resourceRequestEndTime;
@property(nonatomic) double resourceRequestOnScreenEndTime;
@property(nonatomic) double resourceRequestStartTime;
- (void)addRequest:(id)arg1;	// IMP=0x000000000016a893
- (void)addDOMChange:(id)arg1;	// IMP=0x000000000016a844
@property(nonatomic) double platformJsonParseEndTime;
@property(nonatomic) double platformJsonParseStartTime;
@property(nonatomic) _Bool platformResponseWasCached;
@property(nonatomic) double platformResponseEndTime;
@property(nonatomic) double platformResponseStartTime;
@property(nonatomic) double platformRequestStartTime;
@property(nonatomic) double pageDisappearTime;
@property(nonatomic) double pageAppearTime;
@property(nonatomic) double pageRequestedTime;
@property(retain, nonatomic) NSString *launchCorrelationKey;
@property(retain, nonatomic) NSString *clientCorrelationKey;
- (id)init;	// IMP=0x0000000000169d95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

