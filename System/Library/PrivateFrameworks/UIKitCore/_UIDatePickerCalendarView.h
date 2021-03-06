//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UICalendarSelectionSingleDate, UICalendarView, UIDatePicker, _UIDatePickerCalendarTimeView, _UIDatePickerDataModel;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarView : UIView
{
    struct {
        unsigned int needsUpdateDate:1;
        unsigned int isEnabled:1;
    } _flags;	// 8 = 0x8
    UICalendarView *_calendarView;	// 16 = 0x10
    UICalendarSelectionSingleDate *_selection;	// 24 = 0x18
    _UIDatePickerCalendarTimeView *_timeView;	// 32 = 0x20
    struct CGSize _lastSize;	// 40 = 0x28
    unsigned long long _stateUpdatesInFlight;	// 56 = 0x38
    UIDatePicker *_datePicker;	// 64 = 0x40
    _UIDatePickerDataModel *_data;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000b9604
@property(retain, nonatomic) _UIDatePickerDataModel *data; // @synthesize data=_data;
@property(nonatomic) __weak UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (id)primaryFirstResponder;	// IMP=0x00000000000b9512
- (void)_setEnabled:(_Bool)arg1;	// IMP=0x00000000000b94ec
- (_Bool)hasDefaultSize;	// IMP=0x00000000000b94e4
- (struct CGSize)defaultSize;	// IMP=0x00000000000b94ce
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000b94b8
- (_Bool)usesAutoLayout;	// IMP=0x00000000000b94b0
@property(readonly, nonatomic) struct UIEdgeInsets appliedInsetsToEdgeOfContent;
- (void)didChangeCustomFontDesign;	// IMP=0x00000000000b934a
- (void)didChangeToday;	// IMP=0x00000000000b9338
- (void)didReset;	// IMP=0x00000000000b9326
- (void)didChangeRoundsToMinuteInterval;	// IMP=0x00000000000b92e2
- (void)didChangeMinuteInterval;	// IMP=0x00000000000b929e
- (void)didChangeMaximumDate;	// IMP=0x00000000000b928c
- (void)didChangeMinimumDate;	// IMP=0x00000000000b927a
- (void)displaySelectedDateAnimated:(_Bool)arg1;	// IMP=0x00000000000b9216
- (void)didChangeDateFrom:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000b9204
- (void)didChangeCalendar;	// IMP=0x00000000000b91f2
- (void)didChangeTimeZone;	// IMP=0x00000000000b91e0
- (void)didChangeLocale;	// IMP=0x00000000000b91ce
- (void)didChangeMode;	// IMP=0x00000000000b9167
@property(readonly, nonatomic) long long datePickerStyle;
- (id)createDatePickerForTimeView:(id)arg1;	// IMP=0x00000000000b9054
- (void)timeViewDidEndEditing:(id)arg1;	// IMP=0x00000000000b9007
- (void)timeViewDidBeginEditing:(id)arg1;	// IMP=0x00000000000b8fca
- (void)timeViewWillBecomeFirstResponder:(id)arg1;	// IMP=0x00000000000b8fb8
- (void)timeView:(id)arg1 didSelectTime:(id)arg2;	// IMP=0x00000000000b8f9e
- (_Bool)dateSelection:(id)arg1 canSelectDate:(id)arg2;	// IMP=0x00000000000b8f92
- (void)dateSelection:(id)arg1 didSelectDate:(id)arg2;	// IMP=0x00000000000b8e18
- (void)_updateSelectedTime:(id)arg1 notify:(_Bool)arg2;	// IMP=0x00000000000b8d0e
- (void)_updateSelectedDay:(id)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x00000000000b8c81
- (void)_updateSelectedDay:(id)arg1 time:(id)arg2 animated:(_Bool)arg3 notify:(_Bool)arg4;	// IMP=0x00000000000b8858
- (void)_updateTimeViewForSelectedDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000b883b
- (_Bool)_shouldUpdateTimeViewForSelectedTime:(id)arg1;	// IMP=0x00000000000b87c6
- (void)_updateDataForComponents:(id)arg1;	// IMP=0x00000000000b8760
- (_Bool)_shouldUpdateDataForComponents:(id)arg1 date:(id)arg2;	// IMP=0x00000000000b86eb
- (void)_updateCustomFonts;	// IMP=0x00000000000b8665
- (void)_updateModuleVisibility;	// IMP=0x00000000000b84d9
- (_Bool)_shouldDisplayTimeView;	// IMP=0x00000000000b849f
- (_Bool)_shouldDisplayCalendarView;	// IMP=0x00000000000b8467
- (void)_updateEnabledStyling;	// IMP=0x00000000000b83b7
- (void)_reload;	// IMP=0x00000000000b8219
- (void)_reloadCalendarView;	// IMP=0x00000000000b7f69
- (void)_reloadTimeView;	// IMP=0x00000000000b7eb0
- (void)_reloadDateRange;	// IMP=0x00000000000b7e07
- (void)_updateDate;	// IMP=0x00000000000b7c7b
- (void)_updateDateIfNeeded;	// IMP=0x00000000000b7c5a
- (void)_setNeedsUpdateDate;	// IMP=0x00000000000b7c3d
- (void)_updateContentSizeLimitations;	// IMP=0x00000000000b7b48
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000b7ab6
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000b78a9
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x00000000000b7635
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000b7623
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;	// IMP=0x00000000000b7618
- (void)layoutSubviews;	// IMP=0x00000000000b713c
- (void)layoutMarginsDidChange;	// IMP=0x00000000000b70fb
- (void)_updateLayoutMargins;	// IMP=0x00000000000b7069
- (void)_workaround66574039_datePickerDidUpdateLayoutMargins;	// IMP=0x00000000000b6fb4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b6e2c

// Remaining properties
@property(readonly, nonatomic) double contentWidth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) double timeInterval;

@end

