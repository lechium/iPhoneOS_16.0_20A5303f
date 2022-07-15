//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKUIAttributedStringView;

__attribute__((visibility("hidden")))
@interface SKUIReviewListTitleView
{
    SKUIAttributedStringView *_titleView;	// 8 = 0x8
    SKUIAttributedStringView *_dateView;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
}

+ (id)_attributedStringForDateLabel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000029f98
+ (id)_attributedStringForTitleLabel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000029e2a
+ (id)_textLabelForViewElement:(id)arg1;	// IMP=0x0010000000029e0e
+ (id)_dateLabelForViewElement:(id)arg1;	// IMP=0x0010000000029df2
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000029588
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000002936e
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000029358
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000029350
- (void).cxx_destruct;	// IMP=0x000000000002a17b
@property(retain, nonatomic) SKUIAttributedStringView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) SKUIAttributedStringView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000029d60
- (void)layoutSubviews;	// IMP=0x0000000000029a1a
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000029a12
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000029a0a
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000029a02
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000029659
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000292ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
