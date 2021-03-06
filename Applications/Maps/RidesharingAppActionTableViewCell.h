//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, RideBookingRideOptionStatus, UIButton;
@protocol RidesharingAppActionTableViewCellDelegate;

@interface RidesharingAppActionTableViewCell
{
    id <RidesharingAppActionTableViewCellDelegate> _delegate;	// 8 = 0x8
    unsigned long long _titleType;	// 16 = 0x10
    RideBookingRideOptionStatus *_status;	// 24 = 0x18
    UIButton *_actionButton;	// 32 = 0x20
    NSLayoutConstraint *_buttonBaselineToTopConstraint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001bd592
@property(retain, nonatomic) NSLayoutConstraint *buttonBaselineToTopConstraint; // @synthesize buttonBaselineToTopConstraint=_buttonBaselineToTopConstraint;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) RideBookingRideOptionStatus *status; // @synthesize status=_status;
@property(nonatomic) unsigned long long titleType; // @synthesize titleType=_titleType;
@property(nonatomic) __weak id <RidesharingAppActionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setApplicationName:(id)arg1 titleType:(unsigned long long)arg2;	// IMP=0x00100000001bd1fe
- (void)configureWithRideBookingRideOptionStatus:(id)arg1 titleType:(unsigned long long)arg2;	// IMP=0x00100000001bd154
- (void)_updateContentSizeCategoryDependentFontsAndConstraints;	// IMP=0x00100000001bd054
- (void)_openAppPressed:(id)arg1;	// IMP=0x00100000001bd008
- (void)_setupConstraints;	// IMP=0x00100000001bccec
- (void)updateTheme;	// IMP=0x00100000001bcbe3
- (void)_setupViews;	// IMP=0x00100000001bcafc
- (void)dealloc;	// IMP=0x00100000001bca87
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000001bc98c

@end

