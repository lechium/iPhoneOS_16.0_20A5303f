//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, UIButton;

__attribute__((visibility("hidden")))
@interface UIStatusBarButtonActionItemView
{
    UIButton *_button;	// 184 = 0xb8
    UIButton *_externalButton;	// 192 = 0xc0
    _Bool _selected;	// 200 = 0xc8
    CALayer *_ringLayer;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000eefd03
@property(retain, nonatomic) CALayer *ringLayer; // @synthesize ringLayer=_ringLayer;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void)setLayerHighlightImage:(id)arg1;	// IMP=0x0000000000eef942
- (struct CGRect)_contentsImageFrame;	// IMP=0x0000000000eef818
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000eef77c
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000eef6e0
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000eef641
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000eef577
- (_Bool)canBecomeFocused;	// IMP=0x0000000000eef56f
- (_Bool)usesAdvancedActions;	// IMP=0x0000000000eef567
- (_Bool)showsTouchWhenHighlighted;	// IMP=0x0000000000eef55f
- (long long)buttonType;	// IMP=0x0000000000eef557
- (void)_pressAndHoldButton:(id)arg1;	// IMP=0x0000000000eef516
- (void)_doubleTapButton:(id)arg1;	// IMP=0x0000000000eef4d5
- (void)_pressButton:(id)arg1;	// IMP=0x0000000000eef4c1
- (void)_triggerButtonWithAction:(long long)arg1;	// IMP=0x0000000000eef370
- (void)layoutSubviews;	// IMP=0x0000000000eef23e
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000eef22c
- (double)updateContentsAndWidth;	// IMP=0x0000000000eeef8e
- (_Bool)allowsUserInteraction;	// IMP=0x0000000000eeef86
- (id)highlightImage;	// IMP=0x0000000000eeef7e
- (id)_createButton;	// IMP=0x0000000000eeed3e
@property(readonly, nonatomic) _Bool extendsHitTestingFrame;

@end
