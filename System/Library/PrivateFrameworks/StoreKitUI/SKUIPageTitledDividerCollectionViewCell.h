//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSNumber, NSString, SKUIButtonViewElement, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIPageTitledDividerCollectionViewCell : UICollectionViewCell
{
    double _buttonContentHorizontalPadding;	// 8 = 0x8
    SKUIButtonViewElement *_buttonViewElement;	// 16 = 0x10
    struct UIEdgeInsets _contentEdgeInsets;	// 24 = 0x18
    struct UIEdgeInsets _contentInset;	// 56 = 0x38
    UIButton *_dividerButton;	// 88 = 0x58
    NSNumber *_dividerButtonImageRequestIdentifier;	// 96 = 0x60
    UILabel *_dividerLabel;	// 104 = 0x68
    struct UIEdgeInsets _imageVerticalPadding;	// 112 = 0x70
    struct UIEdgeInsets _internalHorizontalMargins;	// 144 = 0x90
    UIView *_leftLine;	// 176 = 0xb0
    UIView *_rightLine;	// 184 = 0xb8
    struct UIEdgeInsets _titleVerticalPadding;	// 192 = 0xc0
    double _topEdgeInset;	// 224 = 0xe0
}

+ (struct UIEdgeInsets)_titleVerticalPaddingForViewElement:(id)arg1;	// IMP=0x001000000001f8f2
+ (struct UIEdgeInsets)_imageVerticalPaddingForViewElement:(id)arg1;	// IMP=0x001000000001f7fe
+ (struct UIEdgeInsets)_contentEdgeInsetsForViewElement:(id)arg1;	// IMP=0x001000000001f747
+ (id)_attributedStringForViewElementText:(id)arg1 style:(id)arg2 context:(id)arg3;	// IMP=0x001000000001f5f3
+ (id)_attributedStringForDividerTitle:(id)arg1 context:(id)arg2;	// IMP=0x001000000001f4b6
+ (id)_attributedStringForButtonViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000001f37b
+ (double)viewElementInsetDividerHeight:(id)arg1;	// IMP=0x001000000001da46
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000001d76d
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 dividerTitle:(id)arg2 context:(id)arg3;	// IMP=0x001000000001d6bc
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000001d6b6
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000001d625
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000001d61d
- (void).cxx_destruct;	// IMP=0x000000000001fbc0
@property(nonatomic) double topEdgeInset; // @synthesize topEdgeInset=_topEdgeInset;
- (id)_imageForImageViewElement:(id)arg1 returningRequestIdentifier:(out id *)arg2 context:(id)arg3;	// IMP=0x000000000001fa59
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000001f335
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000001f2a7
- (void)layoutSubviews;	// IMP=0x000000000001ec0a
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000000001eb75
@property(copy, nonatomic) NSString *dividerTitle;
- (void)setColoringWithColorScheme:(id)arg1;	// IMP=0x000000000001e74b
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000001e726
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000001e71e
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000001e668
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000001e610
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000001dad0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001d48c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
