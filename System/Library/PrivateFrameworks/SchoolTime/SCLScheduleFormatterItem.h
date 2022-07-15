//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar;

__attribute__((visibility("hidden")))
@interface SCLScheduleFormatterItem : NSObject
{
    long long _days;	// 8 = 0x8
    NSCalendar *_calendar;	// 16 = 0x10
    NSArray *_timeIntervals;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000cd3d
@property(readonly, copy, nonatomic) NSArray *timeIntervals; // @synthesize timeIntervals=_timeIntervals;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (id)dayRanges;	// IMP=0x000000000000cb12
- (long long)earliestWeekdayInCalendar;	// IMP=0x000000000000c9fb
- (long long)days;	// IMP=0x000000000000c9f1
- (void)addDay:(long long)arg1;	// IMP=0x000000000000c9d5
- (id)initWithCalendar:(id)arg1 timeIntervals:(id)arg2;	// IMP=0x000000000000c934

@end
