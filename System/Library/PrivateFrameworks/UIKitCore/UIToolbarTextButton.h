//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIToolbarButton.h"

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface UIToolbarTextButton : UIToolbarButton
{
    NSString *_title;	// 408 = 0x198
    NSString *_pressedTitle;	// 416 = 0x1a0
    NSSet *_possibleTitles;	// 424 = 0x1a8
}

- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000142c68
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001429fd
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x00000000001429bf
- (void)layoutSubviews;	// IMP=0x000000000014271b
- (void)_setPressed:(_Bool)arg1;	// IMP=0x0000000000142665
- (void)dealloc;	// IMP=0x00000000001425ff
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001424b2
- (id)initWithTitle:(id)arg1 pressedTitle:(id)arg2 withFont:(id)arg3 withBarStyle:(long long)arg4 withStyle:(long long)arg5 withTitleWidth:(double)arg6 possibleTitles:(id)arg7 withToolbarTintColor:(id)arg8;	// IMP=0x00000000001421ec

@end

