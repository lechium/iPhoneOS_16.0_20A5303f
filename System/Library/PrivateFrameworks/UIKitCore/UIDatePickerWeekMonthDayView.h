//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface UIDatePickerWeekMonthDayView : UIView
{
    struct {
        unsigned int weekdayLast:1;
    } _datePickerWeekMonthDayViewFlags;	// 184 = 0xb8
    UILabel *_dateLabel;	// 192 = 0xc0
    UILabel *_weekdayLabel;	// 200 = 0xc8
    NSString *_formattedDateString;	// 208 = 0xd0
    double _weekdayWidth;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000daab14
@property(nonatomic) double weekdayWidth; // @synthesize weekdayWidth=_weekdayWidth;
@property(copy, nonatomic) NSString *formattedDateString; // @synthesize formattedDateString=_formattedDateString;
@property(readonly, nonatomic) UILabel *weekdayLabel; // @synthesize weekdayLabel=_weekdayLabel;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) _Bool weekdayLast;
- (void)layoutSubviews;	// IMP=0x0000000000daa331
- (_Bool)_canBeReusedInPickerView;	// IMP=0x0000000000daa30b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000da9f89

@end
