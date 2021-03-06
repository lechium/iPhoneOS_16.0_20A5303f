//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKCategorySample.h>

@interface HKCategorySample (HKMenstrualCycles)
+ (id)hkmc_categorySampleWithCycleFactor:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x0060000000013df3
+ (id)hkmc_intermenstrualBleedingCategorySampleWithDate:(id)arg1;	// IMP=0x0060000000013d3a
+ (id)hkmc_categorySampleWithMenstrualSymptom:(unsigned long long)arg1 date:(id)arg2;	// IMP=0x0060000000013c6e
+ (id)hkmc_categorySampleWithSexualActivity:(long long)arg1 date:(id)arg2;	// IMP=0x0060000000013acd
+ (id)hkmc_categorySampleWithProgesteroneTestResult:(long long)arg1 date:(id)arg2;	// IMP=0x00600000000139f5
+ (id)hkmc_categorySampleWithPregnancyTestResult:(long long)arg1 date:(id)arg2;	// IMP=0x006000000001391d
+ (id)hkmc_categorySampleWithOvulationTestResult:(long long)arg1 date:(id)arg2;	// IMP=0x0060000000013845
+ (id)hkmc_categorySampleWithCervicalMucusQuality:(long long)arg1 date:(id)arg2;	// IMP=0x006000000001376d
+ (id)hkmc_categorySampleWithMenstrualFlow:(long long)arg1 date:(id)arg2 startOfCycle:(_Bool)arg3;	// IMP=0x00600000000135d0
- (long long)hkmc_cycleFactor;	// IMP=0x00100000000146a9
- (unsigned long long)hkmc_daySummarySymptom;	// IMP=0x0010000000014642
- (long long)hkmc_daySummarySexualActivity;	// IMP=0x00100000000144b2
- (long long)hkmc_daySummaryProgesteroneTestResult;	// IMP=0x0010000000014389
- (long long)hkmc_daySummaryPregnancyTestResult;	// IMP=0x0010000000014260
- (long long)hkmc_daySummaryOvulationTestResult;	// IMP=0x001000000001413a
- (long long)hkmc_daySummaryCervicalMucusQuality;	// IMP=0x0010000000014014
- (long long)hkmc_daySummaryMenstrualFlow;	// IMP=0x0010000000013eee
@end

