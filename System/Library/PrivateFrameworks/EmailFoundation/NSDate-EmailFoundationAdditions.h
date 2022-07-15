//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class EFSQLBinding, NSString;

@interface NSDate (EmailFoundationAdditions)
+ (id)_ef_gregorianCalendarForTimeZone:(id)arg1;	// IMP=0x001000000001bcfb
+ (id)_ef_morningDateComponents;	// IMP=0x001000000001bc8c
+ (id)_ef_nightDateComponents;	// IMP=0x001000000001bc1d
+ (id)ef_localCombinedDate:(id)arg1 time:(id)arg2 timeZone:(id)arg3;	// IMP=0x001000000001ba29
+ (id)ef_thisWeekday:(long long)arg1 hour:(long long)arg2 minute:(long long)arg3 second:(long long)arg4;	// IMP=0x001000000001b8c6
+ (id)ef_midnightInNdays:(long long)arg1;	// IMP=0x001000000001b793
+ (id)ef_midnightNdaysAgo:(long long)arg1;	// IMP=0x001000000001b777
+ (id)ef_nextWeekMorning;	// IMP=0x001000000001b5e0
+ (id)ef_tomorrowMorning;	// IMP=0x001000000001b449
+ (id)ef_tomorrowNight;	// IMP=0x001000000001b2b2
+ (id)ef_inOneHour;	// IMP=0x001000000001b1c6
+ (id)ef_tonight;	// IMP=0x001000000001b05c
+ (id)ef_morning;	// IMP=0x001000000001aef2
+ (id)ef_lastWeekMidnight;	// IMP=0x001000000001aed4
+ (_Bool)ef_isPastTonight;	// IMP=0x001000000001ae34
- (_Bool)ef_isDateNextDayOrLater:(id)arg1;	// IMP=0x001000000001aca9
- (double)ef_timeIntervalSinceDate:(id)arg1;	// IMP=0x001000000001ac42
- (_Bool)ef_isLaterThanOrEqualDate:(id)arg1;	// IMP=0x001000000001ac28
- (_Bool)ef_isLaterThanDate:(id)arg1;	// IMP=0x001000000001ac0e
- (_Bool)ef_isEarlierThanOrEqualDate:(id)arg1;	// IMP=0x001000000001abf1
- (_Bool)ef_isEarlierThanDate:(id)arg1;	// IMP=0x001000000001abd7
- (_Bool)ef_isMoreThanTimeIntervalAgo:(double)arg1;	// IMP=0x001000000001aba7
@property(readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
- (id)ef_SQLIsolatedExpression;	// IMP=0x001000000003fcae
- (void)ef_renderSQLExpressionInto:(id)arg1;	// IMP=0x001000000003fc44
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
