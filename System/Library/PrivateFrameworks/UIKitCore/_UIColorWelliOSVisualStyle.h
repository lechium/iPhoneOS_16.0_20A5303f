//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIColorWellVisualStyle.h"

@class UIButton, UIView;

__attribute__((visibility("hidden")))
@interface _UIColorWelliOSVisualStyle : _UIColorWellVisualStyle
{
    UIButton *_button;	// 8 = 0x8
    UIView *_gradientView;	// 16 = 0x10
    UIView *_borderView;	// 24 = 0x18
    _Bool _isSelected;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000012135fd
- (void)_invokeColorPicker:(id)arg1;	// IMP=0x00000000012135c0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000121356a
- (struct CGSize)intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000001213510
- (double)_widthForTraitCollection:(id)arg1;	// IMP=0x00000000012134e5
- (void)touchUp:(id)arg1;	// IMP=0x00000000012134c8
- (void)touchDown:(id)arg1;	// IMP=0x00000000012134ab
- (void)layoutSubviews;	// IMP=0x0000000001213060
- (void)setSelectedColor:(id)arg1;	// IMP=0x000000000121301f
- (id)initWithColorWell:(id)arg1;	// IMP=0x0000000001212dc9

@end

