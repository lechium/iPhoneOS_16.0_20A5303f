//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CalendarSpecialDayData, DayNavigationWeekScrollView, NSDate;

@protocol DayNavigationWeekScrollViewDelegate <NSObject>
- (CalendarSpecialDayData *)dayNavigationWeekScrollView:(DayNavigationWeekScrollView *)arg1 dayDataForDate:(NSDate *)arg2;
- (void)dayNavigationWeekScrollView:(DayNavigationWeekScrollView *)arg1 didChangeCellWidth:(double)arg2;
- (void)dayNavigationWeekScrollView:(DayNavigationWeekScrollView *)arg1 selectedDateChanged:(NSDate *)arg2;
- (void)dayNavigationWeekScrollViewFailedToSelectDate:(void (^)(void))arg1;
- (_Bool)dayNavigationWeekScrollViewAllowedToChangeSelectedDate;
@end
