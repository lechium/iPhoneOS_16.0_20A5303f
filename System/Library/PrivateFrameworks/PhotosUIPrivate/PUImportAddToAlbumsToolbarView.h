//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;
@protocol PUImportAddToAlbumsToolbarViewDelegate;

__attribute__((visibility("hidden")))
@interface PUImportAddToAlbumsToolbarView : UIView
{
    NSString *_destinationDescriptionTitle;	// 8 = 0x8
    UIButton *_destinationButton;	// 16 = 0x10
    id <PUImportAddToAlbumsToolbarViewDelegate> _delegate;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_destinationLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001ddd2b
@property(retain, nonatomic) UILabel *destinationLabel; // @synthesize destinationLabel=_destinationLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <PUImportAddToAlbumsToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIButton *destinationButton; // @synthesize destinationButton=_destinationButton;
@property(retain, nonatomic) NSString *destinationDescriptionTitle; // @synthesize destinationDescriptionTitle=_destinationDescriptionTitle;
- (struct CGRect)accessibilityFrame;	// IMP=0x00000000001ddc03
- (unsigned long long)accessibilityTraits;	// IMP=0x00000000001ddbf3
- (id)accessibilityLabel;	// IMP=0x00000000001ddb39
- (_Bool)isAccessibilityElement;	// IMP=0x00000000001ddb31
- (void)buttonPressed:(id)arg1;	// IMP=0x00000000001dda7e
- (void)buttonTouchDragOutside:(id)arg1;	// IMP=0x00000000001dda64
- (void)buttonTouchDragInside:(id)arg1;	// IMP=0x00000000001dda4a
- (void)_animateButtonAlpha:(double)arg1;	// IMP=0x00000000001dd976
- (void)buttonTouchDown:(id)arg1;	// IMP=0x00000000001dd959
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001dd6b0
- (void)_updateButtonText;	// IMP=0x00000000001dd640
- (void)_setupButton;	// IMP=0x00000000001dd0c4
- (id)_destinationDescription;	// IMP=0x00000000001dd0ba
- (void)_setupSubviews;	// IMP=0x00000000001dcbee
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001dcb91

@end
