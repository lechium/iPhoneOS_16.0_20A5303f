//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIIPhoneProductPageView : UIView
{
    UIView *_view;	// 8 = 0x8
    UIView *_bannerView;	// 16 = 0x10
    double _bannerOffset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c957e
@property(nonatomic) double bannerOffset; // @synthesize bannerOffset=_bannerOffset;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void)layoutSubviews;	// IMP=0x00000000000c9423
- (void)animateYPosition:(double)arg1;	// IMP=0x00000000000c91f1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000c9019

@end

