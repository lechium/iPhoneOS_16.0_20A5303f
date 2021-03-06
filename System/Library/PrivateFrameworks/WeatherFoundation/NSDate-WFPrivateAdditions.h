//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (WFPrivateAdditions)
+ (id)wf_allWeatherConditionsOnDate:(id)arg1 inCalendar:(id)arg2 inArray:(id)arg3;	// IMP=0x006000000003c01e
+ (id)wf_weatherConditionsOnDate:(id)arg1 inCalendar:(id)arg2 inArray:(id)arg3;	// IMP=0x006000000003bf60
+ (id)wf_weatherConditionsClosestToDate:(id)arg1 inArray:(id)arg2;	// IMP=0x006000000003bd30
+ (long long)wf_minutesBetweenDate:(id)arg1 andDate:(id)arg2;	// IMP=0x006000000003bc5b
+ (_Bool)wf_isDate:(id)arg1 inSameDayWithDate:(id)arg2 inCalendar:(id)arg3;	// IMP=0x006000000003bc46
- (id)wf_allWeatherConditionsOnDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x001000000003c2ef
- (id)wf_weatherConditionsOnDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x001000000003c2d0
- (id)wf_weatherConditionsClosestToDate:(id)arg1;	// IMP=0x001000000003c2b1
- (long long)wf_minutesDifferenceFromDate:(id)arg1;	// IMP=0x001000000003c292
- (_Bool)wf_isInSameDayWithDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x001000000003c270
@end

