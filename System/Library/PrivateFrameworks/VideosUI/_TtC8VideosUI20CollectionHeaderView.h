//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class MISSING_TYPE, UIView, VUIButton, VUIImageView;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI20CollectionHeaderView : UICollectionReusableView
{
    MISSING_TYPE *containerView;	// 8 = 0x8
    MISSING_TYPE *viewLayout;	// 16 = 0x10
    MISSING_TYPE *applySafeAreaInsets;	// 24 = 0x18
    MISSING_TYPE *titleView;	// 32 = 0x20
    MISSING_TYPE *subtitleView;	// 40 = 0x28
    MISSING_TYPE *imageView;	// 48 = 0x30
    MISSING_TYPE *tapGestureRecognizer;	// 56 = 0x38
    MISSING_TYPE *buttonViewModel;	// 64 = 0x40
    MISSING_TYPE *buttonView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000006949b0
@property(nonatomic, readonly) VUIImageView *accessibilityImageView;
@property(nonatomic, readonly) VUIButton *accessibilityButtonView;
@property(nonatomic, readonly) UIView *accessibilitySubtitleView;
@property(nonatomic, readonly) UIView *accessibilityTitleView;
- (void)tintColorDidChange;	// IMP=0x0000000000694890
- (void)prepareForReuse;	// IMP=0x00000000006946b0
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000694610
- (void)layoutSubviews;	// IMP=0x00000000006929d0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000692930
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000692910
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000006928e0

@end
