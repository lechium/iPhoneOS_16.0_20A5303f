//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI17CategoryFilterBar : UIScrollView
{
    MISSING_TYPE *categories;	// 8 = 0x8
    MISSING_TYPE *selectionHandler;	// 16 = 0x10
    MISSING_TYPE *selectedCategory;	// 32 = 0x20
    MISSING_TYPE *lastKnownBounds;	// 64 = 0x40
    MISSING_TYPE *buttons;	// 96 = 0x60
    MISSING_TYPE *selectedButton;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_selectedButtonBackgroundView;	// 112 = 0x70
    MISSING_TYPE *needsButtonsLayout;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000354a40
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003549e0
- (void)categoryButtonTapped:(id)arg1;	// IMP=0x0000000000354990
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000353a20
- (void)layoutSubviews;	// IMP=0x0000000000353890
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003534f0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000353340
- (id)init;	// IMP=0x0000000000353320

@end

