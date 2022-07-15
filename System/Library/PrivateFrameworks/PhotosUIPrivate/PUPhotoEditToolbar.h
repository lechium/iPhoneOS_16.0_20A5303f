//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray, NSString, PUPhotoEditViewControllerSpec, UIButton, UILongPressGestureRecognizer;
@protocol PUPhotoEditToolbarDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolbar : UIView
{
    UIView *_gradientBackgroundView;	// 8 = 0x8
    CAGradientLayer *_gradientLayer;	// 16 = 0x10
    UIView *_underlineView;	// 24 = 0x18
    NSArray *_basicViewsConstraints;	// 32 = 0x20
    NSArray *_mainActionButtonConstraints;	// 40 = 0x28
    NSArray *_secondaryActionButtonConstraints;	// 48 = 0x30
    NSArray *_toolButtonsConstraints;	// 56 = 0x38
    NSArray *_toolButtonLayoutGuides;	// 64 = 0x40
    UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer;	// 72 = 0x48
    _Bool _useLargeShortSideHeight;	// 80 = 0x50
    _Bool _useTabBarHeight;	// 81 = 0x51
    long long _layoutOrientation;	// 88 = 0x58
    NSArray *_toolButtons;	// 96 = 0x60
    long long _buttonSpacing;	// 104 = 0x68
    UIButton *_mainActionButton;	// 112 = 0x70
    UIButton *_secondaryActionButton;	// 120 = 0x78
    UIView *_stretchableView;	// 128 = 0x80
    long long _backgroundStyle;	// 136 = 0x88
    long long _layoutDirection;	// 144 = 0x90
    double _longSideMargin;	// 152 = 0x98
    id <PUPhotoEditToolbarDelegate> _delegate;	// 160 = 0xa0
    PUPhotoEditViewControllerSpec *_photoEditSpec;	// 168 = 0xa8
    UIView *_mainToolbarContainer;	// 176 = 0xb0
    struct UIEdgeInsets _contentPadding;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000031ec4f
@property(retain, nonatomic) UIView *mainToolbarContainer; // @synthesize mainToolbarContainer=_mainToolbarContainer;
@property(retain, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec; // @synthesize photoEditSpec=_photoEditSpec;
@property(nonatomic) __weak id <PUPhotoEditToolbarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double longSideMargin; // @synthesize longSideMargin=_longSideMargin;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(readonly, nonatomic) UIView *stretchableView; // @synthesize stretchableView=_stretchableView;
@property(readonly, nonatomic) UIButton *secondaryActionButton; // @synthesize secondaryActionButton=_secondaryActionButton;
@property(readonly, nonatomic) UIButton *mainActionButton; // @synthesize mainActionButton=_mainActionButton;
@property(readonly, nonatomic) long long buttonSpacing; // @synthesize buttonSpacing=_buttonSpacing;
@property(readonly, copy, nonatomic) NSArray *toolButtons; // @synthesize toolButtons=_toolButtons;
@property(nonatomic) struct UIEdgeInsets contentPadding; // @synthesize contentPadding=_contentPadding;
@property(nonatomic) _Bool useTabBarHeight; // @synthesize useTabBarHeight=_useTabBarHeight;
@property(nonatomic) _Bool useLargeShortSideHeight; // @synthesize useLargeShortSideHeight=_useLargeShortSideHeight;
@property(readonly, nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
- (void)accessibilityLongPressChanged:(id)arg1;	// IMP=0x000000000031e8c8
- (void)_updateBackgroundAnimated:(_Bool)arg1;	// IMP=0x000000000031e2fa
- (void)_addCenterConstraintsWithMetrics:(id)arg1 verticalLayout:(_Bool)arg2;	// IMP=0x000000000031c7f0
- (void)_addTrailingConstraintsWithMetrics:(id)arg1 verticalLayout:(_Bool)arg2;	// IMP=0x000000000031c453
- (void)_addLeadingConstraintsWithMetrics:(id)arg1 verticalLayout:(_Bool)arg2;	// IMP=0x000000000031c0a3
- (void)updateConstraints;	// IMP=0x000000000031ba99
- (void)_invalidateAllConstraints;	// IMP=0x000000000031b9b9
@property(readonly, nonatomic) double shortSideSize;
- (double)tabBarHeight;	// IMP=0x000000000031b8b3
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000031b88b
- (void)_setToolButtons:(id)arg1 buttonSpacing:(long long)arg2 mainActionButton:(id)arg3 secondaryActionButton:(id)arg4 stretchableView:(id)arg5;	// IMP=0x000000000031afd7
- (void)setToolButtons:(id)arg1 buttonSpacing:(long long)arg2 mainActionButton:(id)arg3 secondaryActionButton:(id)arg4;	// IMP=0x000000000031afb4
- (void)setToolButtons:(id)arg1 mainActionButton:(id)arg2 secondaryActionButton:(id)arg3 stretchableView:(id)arg4;	// IMP=0x000000000031aea0
- (void)setupWithLayoutOrientation:(long long)arg1;	// IMP=0x000000000031adf9
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000031ad8b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000031ad48
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000031acff
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000031acb0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000031a7d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
