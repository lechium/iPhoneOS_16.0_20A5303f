//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (PKDateAdditions)
+ (id)dateForYesterday;	// IMP=0x008000000009b078
+ (id)dateForTomorrow;	// IMP=0x008000000009b05a
+ (id)dateWithDaysBeforeNow:(unsigned long long)arg1;	// IMP=0x008000000009b03e
+ (id)dateWithDaysFromNow:(unsigned long long)arg1;	// IMP=0x008000000009af7f
- (long long)numberOfYearsFromNow;	// IMP=0x001000000009b548
- (long long)numberOfMonthsFromNow;	// IMP=0x001000000009b450
- (long long)numberOfWeeksFromNow;	// IMP=0x001000000009b358
- (id)dateWithoutTime;	// IMP=0x001000000009b2c9
- (_Bool)isYesterday;	// IMP=0x001000000009b26f
- (_Bool)isTomorrow;	// IMP=0x001000000009b215
- (_Bool)isToday;	// IMP=0x001000000009b1bb
- (_Bool)isDateEqualToDateIgnoringTime:(id)arg1;	// IMP=0x001000000009b096
@end
