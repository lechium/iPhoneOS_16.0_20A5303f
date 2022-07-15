//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UIImage, UIImageView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface TabThumbnailCloseButton : UIButton
{
    UIVisualEffectView *_backdropEffectView;	// 8 = 0x8
    UIVisualEffectView *_vibrantEffectView;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
}

+ (id)backgroundColor;	// IMP=0x0040000000181429
- (void).cxx_destruct;	// IMP=0x0000000000181f5b
@property(retain, nonatomic) UIImage *image;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000181e9a
- (void)layoutSubviews;	// IMP=0x0000000000181e07
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000181488

@end
