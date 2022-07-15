//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIDatePicker, _UICalendarDataModel;
@protocol _UICalendarMonthYearSelectorDelegate;

__attribute__((visibility("hidden")))
@interface _UICalendarMonthYearSelector : UIView
{
    UIDatePicker *_datePicker;	// 8 = 0x8
    id <_UICalendarMonthYearSelectorDelegate> _delegate;	// 16 = 0x10
    _UICalendarDataModel *_dataModel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000036f8c
@property(retain, nonatomic) _UICalendarDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <_UICalendarMonthYearSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didSelectDate:(id)arg1;	// IMP=0x0000000000036e6c
- (void)_setSelectedMonth:(id)arg1 animated:(_Bool)arg2 updatePicker:(_Bool)arg3 notifyDelegate:(_Bool)arg4;	// IMP=0x0000000000036ce6
- (void)setSelectedMonth:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000036ccb
- (void)setSelectedMonth:(id)arg1;	// IMP=0x0000000000036cb7
- (void)didUpdateVisibleMonth;	// IMP=0x0000000000036c60
- (void)didUpdateTimeZone;	// IMP=0x0000000000036c01
- (void)didUpdateLocale;	// IMP=0x0000000000036ba2
- (void)didUpdateCalendar;	// IMP=0x0000000000036b43
- (void)layoutMarginsDidChange;	// IMP=0x0000000000036b02
- (void)layoutSubviews;	// IMP=0x00000000000369b5
- (void)_setupViewHierarchy;	// IMP=0x0000000000036749
- (id)initWithDataModel:(id)arg1;	// IMP=0x00000000000366b4

@end
