//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class EKCalendarDate, UILabel;

@interface MonthTitleView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    EKCalendarDate *_calendarDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002893a
@property(retain, nonatomic) EKCalendarDate *calendarDate; // @synthesize calendarDate=_calendarDate;
- (void)animateVisible:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000285fd
- (id)backgroundImage;	// IMP=0x001000000002856e
- (void)setFont:(id)arg1;	// IMP=0x0010000000028551
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000002843f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000002827c

@end
