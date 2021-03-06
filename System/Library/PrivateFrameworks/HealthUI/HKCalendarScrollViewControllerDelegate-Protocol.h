//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKCalendarScrollViewController, NSDate;

@protocol HKCalendarScrollViewControllerDelegate <NSObject>
- (void)calendarScrollViewController:(HKCalendarScrollViewController *)arg1 didUpdateCenteredMonth:(NSDate *)arg2;
- (void)calendarScrollViewController:(HKCalendarScrollViewController *)arg1 didSelectDate:(NSDate *)arg2;

@optional
- (void)calendarScrollViewController:(HKCalendarScrollViewController *)arg1 accessoryViewForDate:(NSDate *)arg2 accessoryViewCompletion:(void (^)(UIView *))arg3;
@end

