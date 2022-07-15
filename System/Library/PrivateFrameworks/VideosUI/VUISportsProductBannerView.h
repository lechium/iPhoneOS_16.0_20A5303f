//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIView, VUILabel, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUISportsProductBannerView
{
    VUILabel *_titleLabel;	// 8 = 0x8
    NSArray *_rowLabels;	// 16 = 0x10
    NSArray *_scoreLabels;	// 24 = 0x18
    NSArray *_descriptionLabels;	// 32 = 0x20
    VUILabel *_footerLabel;	// 40 = 0x28
    NSArray *_buttonViews;	// 48 = 0x30
    VUILabel *_availabilityTextView;	// 56 = 0x38
    UIView *_availabilityImageView;	// 64 = 0x40
    double _availabilityImageViewLeftMargin;	// 72 = 0x48
    VUISeparatorView *_separatorView;	// 80 = 0x50
}

+ (_Bool)shouldDisplayScoresBelowLabelsForWindowWidth:(double)arg1;	// IMP=0x00600000001b99fe
+ (_Bool)shouldUseVerticalLayoutForWindowWidth:(double)arg1;	// IMP=0x00600000001b99bb
- (void).cxx_destruct;	// IMP=0x00000000001b9dfc
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) double availabilityImageViewLeftMargin; // @synthesize availabilityImageViewLeftMargin=_availabilityImageViewLeftMargin;
@property(retain, nonatomic) UIView *availabilityImageView; // @synthesize availabilityImageView=_availabilityImageView;
@property(retain, nonatomic) VUILabel *availabilityTextView; // @synthesize availabilityTextView=_availabilityTextView;
@property(retain, nonatomic) NSArray *buttonViews; // @synthesize buttonViews=_buttonViews;
@property(retain, nonatomic) VUILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) NSArray *descriptionLabels; // @synthesize descriptionLabels=_descriptionLabels;
@property(retain, nonatomic) NSArray *scoreLabels; // @synthesize scoreLabels=_scoreLabels;
@property(retain, nonatomic) NSArray *rowLabels; // @synthesize rowLabels=_rowLabels;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (double)_maxScoreWidthForColumn:(unsigned long long)arg1 availableWidth:(double)arg2;	// IMP=0x00000000001b9b43
- (double)_totalMaxScoreWidthWithAvailableWidth:(double)arg1;	// IMP=0x00000000001b9a70
- (double)_availabilityImageViewLeftMargin;	// IMP=0x00000000001b9a5e
- (struct CGSize)_availabilityImageSizeWithSize:(struct CGSize)arg1;	// IMP=0x00000000001b9a41
- (void)_layoutLabels:(id)arg1 scoreLabels:(id)arg2 withOrigin:(struct CGPoint)arg3 maxWidth:(double)arg4;	// IMP=0x00000000001b92ec
- (void)_layoutLabels:(id)arg1 withOrigin:(struct CGPoint)arg2 maxWidth:(double)arg3;	// IMP=0x00000000001b8f55
- (void)_layoutScoresWithOrigin:(struct CGPoint)arg1 availableWidth:(double)arg2 padding:(double)arg3;	// IMP=0x00000000001b89ca
- (void)_layoutButtonsWithOrigin:(struct CGPoint)arg1 buttonHeight:(double)arg2 buttonWidth:(double)arg3 spacing:(double)arg4;	// IMP=0x00000000001b87c3
- (struct CGSize)_iOS_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000001b6701
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000001b6683
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001b56b4

@end
