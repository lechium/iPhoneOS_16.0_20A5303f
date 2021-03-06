//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _SFDownloadsIconView : UIView
{
    UIView *_circleContainerView;	// 8 = 0x8
    UIImageView *_circleImageView;	// 16 = 0x10
    UIView *_arrowContainerView;	// 24 = 0x18
    UIImageView *_arrowImageView;	// 32 = 0x20
    _Bool _suppressesPixelAlignment;	// 40 = 0x28
    _Bool _pulsing;	// 41 = 0x29
    double _iconScale;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000b9614
@property(nonatomic) double iconScale; // @synthesize iconScale=_iconScale;
- (void)_setPulsing:(_Bool)arg1;	// IMP=0x00000000000b95d4
- (void)_updateSuppressesPixelAlignment;	// IMP=0x00000000000b949a
@property(nonatomic) _Bool suppressesPixelAlignment;
@property(retain, nonatomic) UIImage *circleImage;
@property(retain, nonatomic) UIImage *arrowImage;
- (id)_makeSpringAnimationWithDelay:(double)arg1 offset:(double)arg2;	// IMP=0x00000000000b9271
- (void)_finishedPulsing;	// IMP=0x00000000000b9156
- (void)pulse;	// IMP=0x00000000000b8e56
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000b8e29
- (void)layoutSubviews;	// IMP=0x00000000000b8bc3
- (void)_setUp;	// IMP=0x00000000000b8a7e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b8a0f

@end

