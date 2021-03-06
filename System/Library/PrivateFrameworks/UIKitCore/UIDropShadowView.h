//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, _UIGrabber, _UIRoundedRectShadowView;
@protocol UIDropShadowViewDelegate;

__attribute__((visibility("hidden")))
@interface UIDropShadowView : UIView
{
    _Bool __hasGrabber;	// 184 = 0xb8
    _Bool _masksTopCornersOnly;	// 185 = 0xb9
    _Bool _supportsShadow;	// 186 = 0xba
    UIView *_contentView;	// 192 = 0xc0
    UIView *_overlayView;	// 200 = 0xc8
    double __grabberAlpha;	// 208 = 0xd0
    double __grabberSpacing;	// 216 = 0xd8
    long long __grabberEdge;	// 224 = 0xe0
    id <UIDropShadowViewDelegate> __delegate;	// 232 = 0xe8
    long long _independentCorners;	// 240 = 0xf0
    UIView *_firstCornerClippingDescendant;	// 248 = 0xf8
    NSArray *_cornerClippingDescendants;	// 256 = 0x100
    _UIGrabber *__topGrabber;	// 264 = 0x108
    _UIGrabber *__bottomGrabber;	// 272 = 0x110
    _UIRoundedRectShadowView *_magicShadowView;	// 280 = 0x118
    struct UIRectCornerRadii _environmentMatchingCornerRadii;	// 288 = 0x120
    struct UIEdgeInsets _contentTouchInsets;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x00000000013ba2a0
@property(readonly, nonatomic) _UIRoundedRectShadowView *magicShadowView; // @synthesize magicShadowView=_magicShadowView;
@property(readonly, nonatomic) _UIGrabber *_bottomGrabber; // @synthesize _bottomGrabber=__bottomGrabber;
@property(readonly, nonatomic) _UIGrabber *_topGrabber; // @synthesize _topGrabber=__topGrabber;
@property(readonly, nonatomic) NSArray *cornerClippingDescendants; // @synthesize cornerClippingDescendants=_cornerClippingDescendants;
@property(readonly, nonatomic) __weak UIView *firstCornerClippingDescendant; // @synthesize firstCornerClippingDescendant=_firstCornerClippingDescendant;
@property(readonly, nonatomic) long long independentCorners; // @synthesize independentCorners=_independentCorners;
@property(readonly, nonatomic) _Bool supportsShadow; // @synthesize supportsShadow=_supportsShadow;
@property(nonatomic) _Bool masksTopCornersOnly; // @synthesize masksTopCornersOnly=_masksTopCornersOnly;
@property(nonatomic) __weak id <UIDropShadowViewDelegate> _delegate; // @synthesize _delegate=__delegate;
@property(nonatomic) struct UIEdgeInsets contentTouchInsets; // @synthesize contentTouchInsets=_contentTouchInsets;
@property(nonatomic, setter=_setGrabberEdge:) long long _grabberEdge; // @synthesize _grabberEdge=__grabberEdge;
@property(nonatomic, setter=_setGrabberSpacing:) double _grabberSpacing; // @synthesize _grabberSpacing=__grabberSpacing;
@property(nonatomic, setter=_setGrabberAlpha:) double _grabberAlpha; // @synthesize _grabberAlpha=__grabberAlpha;
@property(nonatomic, setter=_setHasGrabber:) _Bool _hasGrabber; // @synthesize _hasGrabber=__hasGrabber;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct UIRectCornerRadii environmentMatchingCornerRadii; // @synthesize environmentMatchingCornerRadii=_environmentMatchingCornerRadii;
- (void)didFinishRotation;	// IMP=0x00000000013ba0c7
- (void)willBeginRotationWithOriginalBounds:(struct CGRect)arg1 newBounds:(struct CGRect)arg2;	// IMP=0x00000000013b9fae
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000013b9cfb
- (void)setMagicShadowAlpha:(double)arg1;	// IMP=0x00000000013b9cac
- (void)_grabberPrimaryAction;	// IMP=0x00000000013b9c4f
- (_Bool)_isGrabber:(id)arg1;	// IMP=0x00000000013b9bcb
@property(readonly, nonatomic) _Bool _hasCreatedGrabbers;
- (void)didMoveToWindow;	// IMP=0x00000000013b91a2
- (void)updateCornerClippingViews;	// IMP=0x00000000013b8ba4
@property(readonly, nonatomic) UIView *deepestClippingView;
- (void)_layoutGrabbers;	// IMP=0x00000000013b8885
- (void)layoutSubviews;	// IMP=0x00000000013b8844
- (id)initWithFrame:(struct CGRect)arg1 independentCorners:(long long)arg2 supportsShadow:(_Bool)arg3 stylesSheetsAsCards:(_Bool)arg4;	// IMP=0x00000000013b7e40

@end

