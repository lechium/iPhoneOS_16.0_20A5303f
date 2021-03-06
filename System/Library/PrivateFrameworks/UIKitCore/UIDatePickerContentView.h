//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UILabel, _UIDatePickerMode;

__attribute__((visibility("hidden")))
@interface UIDatePickerContentView : UIView
{
    struct {
        unsigned int isAmPm:1;
        unsigned int useDigitFont:1;
    } _datePickerContentViewFlags;	// 184 = 0xb8
    UILabel *_titleLabel;	// 192 = 0xc0
    double _titleLabelMaxX;	// 200 = 0xc8
    long long _titleAlignment;	// 208 = 0xd0
    _UIDatePickerMode *_mode;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000da9f58
@property(retain, nonatomic) _UIDatePickerMode *mode; // @synthesize mode=_mode;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(nonatomic) double titleLabelMaxX; // @synthesize titleLabelMaxX=_titleLabelMaxX;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;	// IMP=0x0000000000da9b1d
@property(nonatomic) _Bool useDigitFont;
@property(nonatomic) _Bool isAmPm;
- (_Bool)_canBeReusedInPickerView;	// IMP=0x0000000000da9a4f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000da98b3
- (id)initWithMode:(id)arg1;	// IMP=0x0000000000da9834

@end

