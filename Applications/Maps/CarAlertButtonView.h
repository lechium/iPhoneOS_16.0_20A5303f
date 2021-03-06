//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel;

@interface CarAlertButtonView : UIView
{
    UIImage *_image;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000007d9776
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000007d96ee
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000007d9666
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000007d9558
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000007d92fe
- (void)_setHighlightsForHitView:(id)arg1;	// IMP=0x00100000007d92e0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00100000007d928c
- (_Bool)canBecomeFocused;	// IMP=0x00100000007d9284
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000007d918c
- (void)_setupConstraints;	// IMP=0x00100000007d8c2b
- (id)initWithTitle:(id)arg1 image:(id)arg2;	// IMP=0x00100000007d8a7b

@end

