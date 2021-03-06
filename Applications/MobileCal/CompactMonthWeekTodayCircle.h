//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class EKCalendarDate, MISSING_TYPE, NSString, UIColor, UIFont, UILabel;

@interface CompactMonthWeekTodayCircle : UIView
{
    EKCalendarDate *_calendarDate;	// 8 = 0x8
    unsigned long long _day;	// 16 = 0x10
    NSString *_dayString;	// 24 = 0x18
    UILabel *_dayLabel;	// 32 = 0x20
    UILabel *_overlayLabel;	// 40 = 0x28
    _Bool _compressed;	// 48 = 0x30
    _Bool _drawCircle;	// 49 = 0x31
    _Bool _useTodayColors;	// 50 = 0x32
    _Bool _showOverlay;	// 51 = 0x33
    MISSING_TYPE *_usesRoundedRectInsteadOfCircle;	// 52 = 0x34
    UIColor *_nonTodayColor;	// 56 = 0x38
    UIColor *_nonTodayCircleColor;	// 64 = 0x40
    UIFont *_fontOverride;	// 72 = 0x48
    double _fontSize;	// 80 = 0x50
    double _overlayFontSize;	// 88 = 0x58
}

+ (double)roundedRectDayNumberBaselineOffsetWithOverlay:(_Bool)arg1 fontSize:(double)arg2 overlayFontSize:(double)arg3;	// IMP=0x00400000000c10c3
+ (id)dayOverlayFontForSize:(double)arg1;	// IMP=0x00100000000c10aa
+ (id)dayNumberFontForSize:(double)arg1;	// IMP=0x00100000000c1091
+ (double)topOffset;	// IMP=0x00100000000c06b6
+ (struct CGSize)roundedRectSizeForNumberString:(id)arg1 overlayString:(id)arg2 fontSize:(double)arg3 overlayFontSize:(double)arg4;	// IMP=0x00100000000c03ff
+ (double)roundedRectHeightWithOverlay:(_Bool)arg1 fontSize:(double)arg2 overlayFontSize:(double)arg3;	// IMP=0x00100000000c03cf
+ (double)circleDiameterWithOverlayLarge;	// IMP=0x00100000000c03c1
+ (double)circleDiameterWithOverlay;	// IMP=0x00100000000c03b3
+ (double)circleDiameterCompressed;	// IMP=0x00100000000c03a5
+ (double)circleDiameter;	// IMP=0x00100000000c0397
- (void).cxx_destruct;	// IMP=0x00200000000c18cb
@property(nonatomic) _Bool usesRoundedRectInsteadOfCircle; // @synthesize usesRoundedRectInsteadOfCircle=_usesRoundedRectInsteadOfCircle;
@property(nonatomic) double overlayFontSize; // @synthesize overlayFontSize=_overlayFontSize;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIFont *fontOverride; // @synthesize fontOverride=_fontOverride;
@property(retain, nonatomic) UIColor *nonTodayCircleColor; // @synthesize nonTodayCircleColor=_nonTodayCircleColor;
@property(retain, nonatomic) UIColor *nonTodayColor; // @synthesize nonTodayColor=_nonTodayColor;
@property(nonatomic) _Bool showOverlay; // @synthesize showOverlay=_showOverlay;
@property(nonatomic) _Bool useTodayColors; // @synthesize useTodayColors=_useTodayColors;
@property(nonatomic) _Bool drawCircle; // @synthesize drawCircle=_drawCircle;
@property(nonatomic) _Bool compressed; // @synthesize compressed=_compressed;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00100000000c1692
- (id)backgroundColor;	// IMP=0x00100000000c1679
- (void)layoutSubviews;	// IMP=0x00100000000c138a
- (id)_dayNumberFontForSize:(double)arg1;	// IMP=0x00100000000c0fad
- (void)_updateTextColor;	// IMP=0x00100000000c0e62
- (void)updateOverlay;	// IMP=0x00100000000c0bcf
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000c06c4
@property(readonly, nonatomic) struct CGRect dayNumberFrame;
- (id)overlayString;	// IMP=0x00100000000c065b
- (id)dayNumberString;	// IMP=0x00100000000c0646
- (id)initWithCalendarDate:(id)arg1;	// IMP=0x00100000000c0109

@end

