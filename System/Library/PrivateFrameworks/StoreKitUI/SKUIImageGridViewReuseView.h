//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMapTable, NSString, SKUIImageGridViewElement;

__attribute__((visibility("hidden")))
@interface SKUIImageGridViewReuseView
{
    NSMapTable *_imageViewToImageResourceCacheKey;	// 8 = 0x8
    NSMapTable *_viewElementViews;	// 16 = 0x10
    SKUIImageGridViewElement *_imageGridViewElement;	// 24 = 0x18
    NSArray *_imageViews;	// 32 = 0x20
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000115521
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000115428
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000114ef1
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000114db5
- (void).cxx_destruct;	// IMP=0x0000000000115e70
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000115c1a
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000115c12
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000115902
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001158fc
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000011553a
- (id)init;	// IMP=0x0000000000114d41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

