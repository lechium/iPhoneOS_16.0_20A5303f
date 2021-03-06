//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIDate : NSObject
{
}

+ (_Bool)isYearlessComponents:(id)arg1;	// IMP=0x008000000005b8fe
+ (id)dateByNormalizingToGMT:(id)arg1;	// IMP=0x008000000005b7e0
+ (id)dateFromComponents:(id)arg1 destinationCalendar:(id)arg2;	// IMP=0x008000000005b471
+ (id)yearlessComponentsFromDate:(id)arg1 calendar:(id)arg2;	// IMP=0x008000000005b404
+ (id)yearlessGregorianComponentsFromGMTDate:(id)arg1;	// IMP=0x008000000005b387
+ (id)componentsFromDate:(id)arg1 sourceCalendar:(id)arg2 destinationCalendar:(id)arg3;	// IMP=0x008000000005b258
+ (id)GMTComponentsFromDate:(id)arg1 sourceCalendar:(id)arg2;	// IMP=0x008000000005b1be
+ (id)gregorianCalendarGMT;	// IMP=0x008000000005b18e
+ (id)currentCalendarGMT;	// IMP=0x008000000005b16a
+ (void)localeDidChange:(id)arg1;	// IMP=0x008000000005b152
+ (void)initialize;	// IMP=0x008000000005b0b0

@end

