//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKUIAttributedStringView, UIActivityIndicatorView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIActivityIndicatorView
{
    unsigned long long _alignment;	// 8 = 0x8
    _Bool _animating;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
    UIImageView *_imageView;	// 56 = 0x38
    UIActivityIndicatorView *_indicatorView;	// 64 = 0x40
    SKUIAttributedStringView *_stringView;	// 72 = 0x48
    double _period;	// 80 = 0x50
}

+ (id)_attributedStringWithLabel:(id)arg1 context:(id)arg2;	// IMP=0x00100000003354ca
+ (struct CGSize)_activityIndicatorSize;	// IMP=0x001000000033542b
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000334a2f
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000033495e
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000003348cd
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000003348c5
- (void).cxx_destruct;	// IMP=0x0000000000335901
- (void)_updateSpinnerAnimation;	// IMP=0x0000000000335890
- (void)_stopAnimating;	// IMP=0x00000000003357fc
- (void)_startAnimating;	// IMP=0x0000000000335675
- (_Bool)_isAnimating;	// IMP=0x0000000000335644
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000335348
- (void)setHidden:(_Bool)arg1;	// IMP=0x0000000000335307
- (void)layoutSubviews;	// IMP=0x0000000000334f94
- (void)didMoveToWindow;	// IMP=0x0000000000334f53
- (void)didMoveToSuperview;	// IMP=0x0000000000334f12
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000334f0a
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000334f02
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000334efa
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000334ea2
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000334b05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

