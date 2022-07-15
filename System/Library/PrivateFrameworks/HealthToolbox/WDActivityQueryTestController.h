//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKActivitySummaryDataProvider, NSString, WDProfile;

__attribute__((visibility("hidden")))
@interface WDActivityQueryTestController : NSObject
{
    WDProfile *_profile;	// 8 = 0x8
    HKActivitySummaryDataProvider *_provider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b327
@property(retain, nonatomic) HKActivitySummaryDataProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1;	// IMP=0x000000000000b2df
- (void)runTest;	// IMP=0x000000000000b1cc
- (void)_logTrialQuery;	// IMP=0x000000000000afa6
- (void)_hourlyActivityDataForStartDate:(id)arg1 endDate:(id)arg2 healthStore:(id)arg3 calendar:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000ab88
- (id)_summariesFromStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 moveData:(id)arg4 exerciseData:(id)arg5 standData:(id)arg6;	// IMP=0x000000000000a555
- (id)_buildActivitySummaryFromDate:(id)arg1 calendar:(id)arg2 moveQuantity:(id)arg3 exerciseQuantity:(id)arg4 standQuantity:(id)arg5;	// IMP=0x000000000000a40d
- (id)_stringForDate:(id)arg1;	// IMP=0x000000000000a350
- (id)_dateDaysAgo:(id)arg1;	// IMP=0x000000000000a2d1
- (void)_logDataFromAllTimeScopes;	// IMP=0x000000000000a09d
- (void)_logDataFromTimeScope:(long long)arg1 title:(id)arg2;	// IMP=0x0000000000009ecd
- (void)_logActivitySummary:(id)arg1 calendar:(id)arg2;	// IMP=0x0000000000009c0d
- (id)_stringForDateComponents:(id)arg1;	// IMP=0x0000000000009b5d
- (id)_quantityValue:(id)arg1 title:(id)arg2;	// IMP=0x0000000000009a7f
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000009a02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
