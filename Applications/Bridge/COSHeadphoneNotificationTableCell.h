//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class CCChartView, NSArray, UILabel;

@interface COSHeadphoneNotificationTableCell : PSTableCell
{
    UILabel *_titleLabel;	// 120 = 0x78
    UILabel *_countLabel;	// 128 = 0x80
    NSArray *_constraints;	// 136 = 0x88
    NSArray *_notificationData;	// 144 = 0x90
    CCChartView *_notificationChart;	// 152 = 0x98
    _Bool _shouldHideChart;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0020000000012c27
- (id)notificationChartSpec;	// IMP=0x0010000000012b7e
- (id)createNotificationChart;	// IMP=0x0010000000012a35
- (id)accessibilityVerticalConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 hideChart:(_Bool)arg3;	// IMP=0x001000000001298e
- (id)accessibilityHorizontalConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 hideChart:(_Bool)arg3;	// IMP=0x0010000000012842
- (id)accessibilityConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 hideChart:(_Bool)arg3;	// IMP=0x001000000001276e
- (id)regularVerticalConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 hideChart:(_Bool)arg3;	// IMP=0x00100000000125ef
- (id)regularHorizontalConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 hideChart:(_Bool)arg3;	// IMP=0x0010000000012503
- (id)regularConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 hideChart:(_Bool)arg3;	// IMP=0x001000000001242f
- (void)updateConstraints;	// IMP=0x0010000000012198
- (void)layoutSubviews;	// IMP=0x0010000000012031
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x0010000000011da5

@end
