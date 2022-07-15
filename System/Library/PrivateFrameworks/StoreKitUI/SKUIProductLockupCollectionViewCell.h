//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSMapTable, NSMutableArray, NSString, SKUIGradientView, SKUILockupViewElement, SKUIProductLockupLayout;

__attribute__((visibility("hidden")))
@interface SKUIProductLockupCollectionViewCell
{
    NSHashTable *_artworkRelatedChildViewElementViews;	// 8 = 0x8
    NSMapTable *_buyButtonDescriptorToButton;	// 16 = 0x10
    NSMapTable *_elementViews;	// 24 = 0x18
    NSMapTable *_imageViewToImageResourceCacheKey;	// 32 = 0x20
    SKUIProductLockupLayout *_layout;	// 40 = 0x28
    SKUILockupViewElement *_lockup;	// 48 = 0x30
    SKUIGradientView *_offerConfirmationGradientView;	// 56 = 0x38
    long long _offerMetadataPosition;	// 64 = 0x40
    NSHashTable *_offerViews;	// 72 = 0x48
    NSMutableArray *_segmentedControlControllers;	// 80 = 0x50
}

+ (void)_requestLayoutForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000131e6c
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000131bc7
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x0010000000131a35
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000012e5ec
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000012e3ca
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000012e33c
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000012e1fd
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x001000000012e028
- (void).cxx_destruct;	// IMP=0x0000000000133f5b
- (id)_viewElementForView:(id)arg1;	// IMP=0x0000000000133da6
- (void)_updateLayoutToAnimateOfferTransitionForView:(id)arg1;	// IMP=0x000000000013375a
- (struct CGRect)_stackElements:(id)arg1 alignment:(long long)arg2 inRect:(struct CGRect)arg3;	// IMP=0x00000000001332aa
- (struct CGRect)_stackBottomRightElements:(id)arg1 inRect:(struct CGRect)arg2;	// IMP=0x0000000000132e9c
- (void)_prepareOfferConfirmationGradientForView:(id)arg1;	// IMP=0x00000000001328c4
- (void)_layoutConfirmationGradientRelativeToSection:(long long)arg1 alpha:(double)arg2;	// IMP=0x000000000013240d
- (struct CGRect)_frameForSection:(long long)arg1;	// IMP=0x0000000000132208
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x00000000001319cd
- (void)_imageTapAction:(id)arg1;	// IMP=0x00000000001317f4
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x000000000013178f
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000001314fe
- (void)offerViewWillAnimateTransition:(id)arg1;	// IMP=0x00000000001314ec
- (void)offerViewDidAnimateTransition:(id)arg1;	// IMP=0x000000000013149b
- (_Bool)offerViewAnimateTransition:(id)arg1;	// IMP=0x0000000000131486
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x0000000000131474
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;	// IMP=0x0000000000131423
- (void)layoutSubviews;	// IMP=0x000000000012fdf7
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000012fc01
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000012f858
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000012f46e
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000012e7f1
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x000000000012e1c8
- (void)setVanishingPoint:(struct CGPoint)arg1;	// IMP=0x000000000012e14d
- (void)setPerspectiveTargetView:(id)arg1;	// IMP=0x000000000012e041
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000012dfa0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
