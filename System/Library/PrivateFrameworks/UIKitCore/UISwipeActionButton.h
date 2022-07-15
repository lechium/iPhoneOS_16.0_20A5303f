//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class UIColor, UIView;
@protocol UISwipeActionVisualStyle, _UISwipeActionButtonDelegate;

__attribute__((visibility("hidden")))
@interface UISwipeActionButton : UIButton
{
    _Bool _autosizes;	// 8 = 0x8
    UIColor *_defaultBackgroundColor;	// 16 = 0x10
    UIColor *_highlightedBackgroundColor;	// 24 = 0x18
    id <UISwipeActionVisualStyle> _visualStyle;	// 32 = 0x20
    id <_UISwipeActionButtonDelegate> _swipeActionButtonDelegate;	// 40 = 0x28
    UIView *_backgroundView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000fce2fc
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <_UISwipeActionButtonDelegate> swipeActionButtonDelegate; // @synthesize swipeActionButtonDelegate=_swipeActionButtonDelegate;
@property(nonatomic) _Bool autosizes; // @synthesize autosizes=_autosizes;
@property(retain, nonatomic) id <UISwipeActionVisualStyle> visualStyle; // @synthesize visualStyle=_visualStyle;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000fce18a
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000fce0e5
- (double)_titleFontWeightForCurrentIdiom;	// IMP=0x0000000000fce095
- (double)_horizontalPaddingForCurrentIdiom;	// IMP=0x0000000000fce045
- (double)_maxFontSizeForCurrentIdiom;	// IMP=0x0000000000fcdff5
- (double)_minFontSizeForCurrentIdiom;	// IMP=0x0000000000fcdfa5
- (double)_minScaleFactorForFont:(id)arg1;	// IMP=0x0000000000fcdf33
- (id)titleFont;	// IMP=0x0000000000fcddb2
- (id)titleFontOfSize:(double)arg1;	// IMP=0x0000000000fcdd76
@property(readonly, nonatomic) double buttonWidth;
- (double)defaultButtonWidth;	// IMP=0x0000000000fcdd14
@property(readonly, nonatomic) UIView *sourceView;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000fcdca7
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000fcdba9
- (long long)_numberOfLinesForTitle:(id)arg1;	// IMP=0x0000000000fcd9e8
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000fcd8b0
- (unsigned long long)_defaultLayoutForHeight:(double)arg1;	// IMP=0x0000000000fcd884
- (_Bool)_heightDemandsCompactLayout;	// IMP=0x0000000000fcd83f
- (struct CGRect)_allowableContentRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000fcd6d7
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000fcd52c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000fcd260

@end
