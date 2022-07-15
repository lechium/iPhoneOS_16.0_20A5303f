//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIStackView;

@interface PaymentMethodView : UIView
{
    UIStackView *_paymentLabelView;	// 8 = 0x8
    UILabel *_paymentTitleLabel;	// 16 = 0x10
    UILabel *_paymentSubtitleLabel;	// 24 = 0x18
    UIImageView *_paymentMethodImageView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000402b5e
@property(retain, nonatomic) UIImageView *paymentMethodImageView; // @synthesize paymentMethodImageView=_paymentMethodImageView;
@property(retain, nonatomic) UILabel *paymentSubtitleLabel; // @synthesize paymentSubtitleLabel=_paymentSubtitleLabel;
@property(retain, nonatomic) UILabel *paymentTitleLabel; // @synthesize paymentTitleLabel=_paymentTitleLabel;
@property(retain, nonatomic) UIStackView *paymentLabelView; // @synthesize paymentLabelView=_paymentLabelView;
- (id)init;	// IMP=0x00100000004021ce

@end
