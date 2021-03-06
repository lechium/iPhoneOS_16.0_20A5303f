//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class FeatureDiscoveryModel, MISSING_TYPE, MapsLargerHitTargetButton, NSArray, UIButton, UIImageView, UILabel, UIStackView;

@interface FeatureDiscoveryView : UIView
{
    UIStackView *_textStackView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    UIButton *_actionButton;	// 40 = 0x28
    MapsLargerHitTargetButton *_closeButton;	// 48 = 0x30
    NSArray *_constraintsWithImage;	// 56 = 0x38
    NSArray *_constraintsWithoutImage;	// 64 = 0x40
    FeatureDiscoveryModel *_model;	// 72 = 0x48
}

+ (CDStruct_8463d75a)_metricsForIdiom:(long long)arg1;	// IMP=0x0040000000a1d343
+ (double)estimatedHeight;	// IMP=0x0010000000a1d335
- (void).cxx_destruct;	// IMP=0x0020000000a1facd
@property(retain, nonatomic) FeatureDiscoveryModel *model; // @synthesize model=_model;
- (MISSING_TYPE *)_performAction;	// IMP=0x0010000000a1f9c1
- (void)_dismiss;	// IMP=0x0010000000a1f89b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000a1d3bd

@end

