//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSShadow, NSString, UIColor, UIView, UIVisualEffectView, VUIImageView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIButton : UIControl
{
    _Bool _hasDisclaimerText;	// 8 = 0x8
    _Bool _imageTrailsTextContent;	// 9 = 0x9
    _Bool _isTintColorAndBackgroundColorSaturated;	// 10 = 0xa
    UIView *_backgroundImageView;	// 16 = 0x10
    UIVisualEffectView *_backdropView;	// 24 = 0x18
    NSString *_backdropGroupName;	// 32 = 0x20
    NSString *_groupName;	// 40 = 0x28
    double _width;	// 48 = 0x30
    double _height;	// 56 = 0x38
    unsigned long long _buttonType;	// 64 = 0x40
    UIColor *_buttonBackgroundColor;	// 72 = 0x48
    UIColor *_highlightColor;	// 80 = 0x50
    double _cornerRadius;	// 88 = 0x58
    double _minWidth;	// 96 = 0x60
    double _minHeight;	// 104 = 0x68
    double _maxWidth;	// 112 = 0x70
    double _maxHeight;	// 120 = 0x78
    NSShadow *_shadow;	// 128 = 0x80
    VUILabel *_textContentView;	// 136 = 0x88
    VUIImageView *_imageView;	// 144 = 0x90
    double _imageMaxWidth;	// 152 = 0x98
    double _imageMaxHeight;	// 160 = 0xa0
    UIColor *_imageTintColor;	// 168 = 0xa8
    UIColor *_imageHighlightColor;	// 176 = 0xb0
    CDUnknownBlockType _selectActionHandler;	// 184 = 0xb8
    UIColor *_adjustmentModeNormalTintColor;	// 192 = 0xc0
    VUIImageView *_imagesViewDefaultState;	// 200 = 0xc8
    VUIImageView *_imagesViewHighlightedState;	// 208 = 0xd0
    VUIImageView *_backgroundImagesViewDefaultState;	// 216 = 0xd8
    VUIImageView *_backgroundImagesViewHighlightedState;	// 224 = 0xe0
    struct UIEdgeInsets _padding;	// 232 = 0xe8
    struct UIEdgeInsets _imageMargin;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0000000000195a6e
@property(retain, nonatomic) VUIImageView *backgroundImagesViewHighlightedState; // @synthesize backgroundImagesViewHighlightedState=_backgroundImagesViewHighlightedState;
@property(retain, nonatomic) VUIImageView *backgroundImagesViewDefaultState; // @synthesize backgroundImagesViewDefaultState=_backgroundImagesViewDefaultState;
@property(retain, nonatomic) VUIImageView *imagesViewHighlightedState; // @synthesize imagesViewHighlightedState=_imagesViewHighlightedState;
@property(retain, nonatomic) VUIImageView *imagesViewDefaultState; // @synthesize imagesViewDefaultState=_imagesViewDefaultState;
@property(nonatomic) _Bool isTintColorAndBackgroundColorSaturated; // @synthesize isTintColorAndBackgroundColorSaturated=_isTintColorAndBackgroundColorSaturated;
@property(retain, nonatomic) UIColor *adjustmentModeNormalTintColor; // @synthesize adjustmentModeNormalTintColor=_adjustmentModeNormalTintColor;
@property(copy, nonatomic) CDUnknownBlockType selectActionHandler; // @synthesize selectActionHandler=_selectActionHandler;
@property(nonatomic) _Bool imageTrailsTextContent; // @synthesize imageTrailsTextContent=_imageTrailsTextContent;
@property(nonatomic) struct UIEdgeInsets imageMargin; // @synthesize imageMargin=_imageMargin;
@property(retain, nonatomic) UIColor *imageHighlightColor; // @synthesize imageHighlightColor=_imageHighlightColor;
@property(retain, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(nonatomic) double imageMaxHeight; // @synthesize imageMaxHeight=_imageMaxHeight;
@property(nonatomic) double imageMaxWidth; // @synthesize imageMaxWidth=_imageMaxWidth;
@property(retain, nonatomic) VUIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) VUILabel *textContentView; // @synthesize textContentView=_textContentView;
@property(retain, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) _Bool hasDisclaimerText; // @synthesize hasDisclaimerText=_hasDisclaimerText;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(retain, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)setScrolledNonUberPercentage:(double)arg1;	// IMP=0x00000000001955a2
- (void)_setupBarButtonItem;	// IMP=0x00000000001954ae
- (_Bool)scalesLargeContentImage;	// IMP=0x00000000001954a6
- (id)largeContentImage;	// IMP=0x00000000001953ba
- (id)largeContentTitle;	// IMP=0x00000000001952d8
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000000195171
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000019515b
- (struct CGRect)_pointerShapeRect;	// IMP=0x0000000000195012
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000194fa4
- (void)vui_traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000194dc7
- (void)_setupPrimaryWithUberBackdropView;	// IMP=0x0000000000194c7f
- (struct CGPoint)_centerWithViewSize:(struct CGSize)arg1 withParentSize:(struct CGSize)arg2;	// IMP=0x0000000000194c59
- (void)_updateLayout;	// IMP=0x00000000001943b0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000194272
- (void)_buttonTapped:(id)arg1;	// IMP=0x00000000001941fe
- (void)_configure;	// IMP=0x0000000000193f7d
- (_Bool)_hasBackgroundImage;	// IMP=0x0000000000193f4a
- (_Bool)_hasImage;	// IMP=0x0000000000193f17
- (_Bool)_hasTitle;	// IMP=0x0000000000193ee4
- (struct CGSize)_computeSizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001937b3
- (struct CGSize)_imageSizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000193745
- (double)bottomMarginWithBaselineMargin:(double)arg1;	// IMP=0x000000000019365e
- (double)topMarginWithBaselineMargin:(double)arg1;	// IMP=0x0000000000193577
- (void)revertTintColor;	// IMP=0x0000000000193494
- (void)saturateTintColorAndBackgroundColor;	// IMP=0x00000000001932f0
- (void)setTintColor:(id)arg1;	// IMP=0x000000000019317c
- (void)vui_prepareForReuse;	// IMP=0x0000000000193137
- (void)configureWithLayoutProperties;	// IMP=0x0000000000193131
- (double)vui_baselineOffsetFromBottom;	// IMP=0x0000000000193074
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x0000000000192f69
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000192df9
- (void)setVuiBackgroundColor:(id)arg1;	// IMP=0x0000000000192de7
- (void)layoutSubviews;	// IMP=0x0000000000192cd0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000192cb9
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000192c97
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000192a7f
- (void)setBackgroundImage:(id)arg1 forHighlightedState:(_Bool)arg2;	// IMP=0x00000000001929a6
- (void)setImageView:(id)arg1 forHighlightedState:(_Bool)arg2;	// IMP=0x00000000001928cd
- (void)tintColorDidChange;	// IMP=0x000000000019251c
- (id)initWithType:(unsigned long long)arg1 interfaceStyle:(unsigned long long)arg2;	// IMP=0x0000000000192424

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

