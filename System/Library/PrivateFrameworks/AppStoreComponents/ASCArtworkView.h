//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ASCBorderView, ASCScreenshotDisplayConfiguration, NSString, UIColor, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface ASCArtworkView : UIView
{
    NSString *_decoration;	// 8 = 0x8
    ASCScreenshotDisplayConfiguration *_screenshotDisplayConfiguration;	// 16 = 0x10
    UIColor *_placeholderColor;	// 24 = 0x18
    UIView *_overlayView;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    ASCBorderView *_borderView;	// 48 = 0x30
    struct CGSize _preferredSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000185f2
@property(readonly, nonatomic) ASCBorderView *borderView; // @synthesize borderView=_borderView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(copy, nonatomic) ASCScreenshotDisplayConfiguration *screenshotDisplayConfiguration; // @synthesize screenshotDisplayConfiguration=_screenshotDisplayConfiguration;
@property(retain, nonatomic) NSString *decoration; // @synthesize decoration=_decoration;
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
- (id)description;	// IMP=0x00000000000183df
- (void)layoutSubviews;	// IMP=0x000000000001808e
- (unsigned long long)cornerMaskForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000017fad
- (id)cornerCurveForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000017eac
- (double)cornerRadiusForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000017ad7
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000017805
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000017698
- (void)invalidateIntrinsicContentSize;	// IMP=0x0000000000017617
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000175f5
- (void)setDataChanged;	// IMP=0x00000000000173f3
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000000017346
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(retain, nonatomic) UIImage *image;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016f1c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016ef1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000016c60

@end
