//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVStatusBarBackgroundGradientViewSubview, CABackdropLayer;

__attribute__((visibility("hidden")))
@interface AVStatusBarBackgroundGradientView : UIView
{
    AVStatusBarBackgroundGradientViewSubview *_gradientView;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x006000000002ee39
- (void).cxx_destruct;	// IMP=0x000000000002ee26
@property(retain, nonatomic) AVStatusBarBackgroundGradientViewSubview *gradientView; // @synthesize gradientView=_gradientView;
- (void)layoutSubviews;	// IMP=0x000000000002ed5c
- (void)setAlpha:(double)arg1;	// IMP=0x000000000002eb97
- (double)alpha;	// IMP=0x000000000002eb47

// Remaining properties
@property(readonly, nonatomic) CABackdropLayer *layer; // @dynamic layer;

@end

