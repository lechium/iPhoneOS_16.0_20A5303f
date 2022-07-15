//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsSimpleDataSource : HKGraphSeriesDataSource
{
    NSArray *_chartPoints;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000005e35
@property(retain, nonatomic) NSArray *chartPoints; // @synthesize chartPoints=_chartPoints;
- (id)_computeSineData:(double)arg1;	// IMP=0x0000000000005b10
- (id)_dosagesToChartPoints:(id)arg1 unit:(id)arg2;	// IMP=0x000000000000573e
- (id)cachedBlockForPath:(CDStruct_912cb5d2)arg1 context:(id)arg2;	// IMP=0x00000000000054b0
- (id)initWithSineData:(double)arg1;	// IMP=0x000000000000543d
- (id)initWithDosages:(id)arg1 unit:(id)arg2;	// IMP=0x0000000000005393

@end
