//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateInterval.h>

@interface NSDateInterval (HealthUIAdditions)
+ (id)hk_dateIntervalWithValueRange:(id)arg1;	// IMP=0x008000000009a9c1
+ (id)hk_julianDayDateIntervalFromOpenUpperBoundDateInterval:(id)arg1 sourceCalendar:(id)arg2 localCalendar:(id)arg3;	// IMP=0x00800000001df58e
+ (id)hk_dateIntervalWithCodableDateInterval:(id)arg1 sourceTimeZone:(id)arg2;	// IMP=0x00800000002f06ff
- (id)hk_dateIntervalUnshiftedFromQueryAlignment:(long long)arg1 calendar:(id)arg2;	// IMP=0x001000000029dbc6
- (id)hk_dateIntervalShiftedToQueryAlignment:(long long)arg1 calendar:(id)arg2;	// IMP=0x001000000029daba
- (id)hk_codableDateInterval;	// IMP=0x00100000002f0849
@end

