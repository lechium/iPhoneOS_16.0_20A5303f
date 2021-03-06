//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CarCardRoundedButton, CarDynamicBlurView, NSLayoutConstraint, NSString, UILabel;
@protocol CarRoutePlanningAdvisoryLabelDelegate;

@interface CarRoutePlanningAdvisoryLabel : UIView
{
    CarDynamicBlurView *_blurView;	// 8 = 0x8
    NSLayoutConstraint *_buttonWidthConstraint;	// 16 = 0x10
    _Bool _alwaysClickable;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    CarCardRoundedButton *_viewButton;	// 40 = 0x28
    UILabel *_label;	// 48 = 0x30
    id <CarRoutePlanningAdvisoryLabelDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000031d918
@property(nonatomic) __weak id <CarRoutePlanningAdvisoryLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool alwaysClickable; // @synthesize alwaysClickable=_alwaysClickable;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) CarCardRoundedButton *viewButton; // @synthesize viewButton=_viewButton;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000031d7c1
- (void)_displayClickableAdvisories;	// IMP=0x001000000031d784
- (void)shouldHideDetailButton:(_Bool)arg1;	// IMP=0x001000000031d734
- (_Bool)labelTextTruncated;	// IMP=0x001000000031d539
- (void)refreshClickability;	// IMP=0x001000000031d4f4
- (void)didMoveToWindow;	// IMP=0x001000000031d463
- (void)layoutSubviews;	// IMP=0x001000000031d3b6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000031ca09

@end

