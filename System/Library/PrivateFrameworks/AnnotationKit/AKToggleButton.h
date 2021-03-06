//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface AKToggleButton : UIButton
{
    _Bool _showsBackgroundColor;	// 8 = 0x8
    _Bool _shouldTintNormalImage;	// 9 = 0x9
    UIColor *_selectedColor;	// 16 = 0x10
    UIImage *_templateImage;	// 24 = 0x18
}

+ (id)colorImage:(id)arg1 withColor:(id)arg2;	// IMP=0x006000000001f0e1
- (void).cxx_destruct;	// IMP=0x000000000001f303
@property(retain, nonatomic) UIImage *templateImage; // @synthesize templateImage=_templateImage;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) _Bool shouldTintNormalImage; // @synthesize shouldTintNormalImage=_shouldTintNormalImage;
@property(nonatomic) _Bool showsBackgroundColor; // @synthesize showsBackgroundColor=_showsBackgroundColor;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001f038
- (void)tintColorDidChange;	// IMP=0x000000000001eff7
- (void)_updateStateColors;	// IMP=0x000000000001ef7b
- (void)_setDeselectedStateColorImage;	// IMP=0x000000000001eea7
- (void)_setSelectedStateColorImage;	// IMP=0x000000000001edb1
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000001ec59
- (void)_updateSelectionColorsAnimated:(_Bool)arg1;	// IMP=0x000000000001e8f6
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000001e89c
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000001e802
- (void)_touchCommitted:(id)arg1;	// IMP=0x000000000001e7cf
- (id)initWithFrame:(struct CGRect)arg1 templateImage:(id)arg2 autoUpdatesColor:(_Bool)arg3;	// IMP=0x000000000001e6b6

@end

