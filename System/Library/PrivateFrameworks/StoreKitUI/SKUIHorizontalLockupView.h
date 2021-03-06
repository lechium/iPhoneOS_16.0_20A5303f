//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSMapTable, NSMutableArray, NSString, SKUIBadgeViewElement, SKUIGradientView, SKUIHorizontalLockupLayout, SKUILockupViewElement, SKUIPlayButton, SKUIPreviewProgressIndicator, SUPlayerStatus, UIColor, UITapGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalLockupView
{
    NSHashTable *_artworkRelatedChildViewElementViews;	// 8 = 0x8
    SKUIBadgeViewElement *_badge;	// 16 = 0x10
    NSMapTable *_buyButtonDescriptorToButton;	// 24 = 0x18
    struct UIEdgeInsets _contentInset;	// 32 = 0x20
    NSMapTable *_cacheKeyToImageView;	// 64 = 0x40
    SUPlayerStatus *_lastPlayerStatus;	// 72 = 0x48
    SKUIHorizontalLockupLayout *_layout;	// 80 = 0x50
    SKUILockupViewElement *_lockupElement;	// 88 = 0x58
    UIView *_metadataBackgroundView;	// 96 = 0x60
    SKUIGradientView *_offerConfirmationGradientView;	// 104 = 0x68
    NSHashTable *_offerViews;	// 112 = 0x70
    SKUIPlayButton *_playButton;	// 120 = 0x78
    SKUIPreviewProgressIndicator *_previewProgressIndicator;	// 128 = 0x80
    long long _previewState;	// 136 = 0x88
    UITapGestureRecognizer *_tapGestureRecognizer;	// 144 = 0x90
    NSMutableArray *_tappableViews;	// 152 = 0x98
    _Bool _useClearBackground;	// 160 = 0xa0
    NSMapTable *_viewElementViews;	// 168 = 0xa8
    _Bool _updateLayoutOnButtonConfirmation;	// 176 = 0xb0
    UIColor *_gradientColor;	// 184 = 0xb8
}

+ (_Bool)_usesEditorialLayoutForLabelViewElement:(id)arg1;	// IMP=0x001000000018c194
+ (void)_requestLayoutForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000018bc0a
+ (id)_attributedStringForOrdinal:(id)arg1 context:(id)arg2;	// IMP=0x001000000018b93c
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x001000000018b6b2
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x001000000018b4d6
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000185637
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000018535d
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000001852cc
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000018518d
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x00100000001846c3
- (void).cxx_destruct;	// IMP=0x000000000018df25
@property(nonatomic) _Bool updateLayoutOnButtonConfirmation; // @synthesize updateLayoutOnButtonConfirmation=_updateLayoutOnButtonConfirmation;
@property(retain, nonatomic) UIColor *gradientColor; // @synthesize gradientColor=_gradientColor;
@property(retain, nonatomic) UIView *metadataBackgroundView; // @synthesize metadataBackgroundView=_metadataBackgroundView;
- (id)_viewElementForView:(id)arg1;	// IMP=0x000000000018dd06
- (_Bool)_usesBackgroundWithAlpha;	// IMP=0x000000000018dc5c
- (struct CGSize)_sizeViewsForColumn:(id)arg1 toFitWidth:(double)arg2;	// IMP=0x000000000018d913
- (void)_resizeMetadataRelativeToItemOfferView:(id)arg1;	// IMP=0x000000000018d46f
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg1;	// IMP=0x000000000018d2b0
- (id)_previewProgressIndicator;	// IMP=0x000000000018d12f
- (id)_previewMediaURL;	// IMP=0x000000000018d08d
- (id)_previewFrontView;	// IMP=0x000000000018cfc5
- (void)_performDefaultActionForImage:(id)arg1;	// IMP=0x000000000018cdad
- (void)_layoutConfirmationGradientRelativeToItemOfferView:(id)arg1 alpha:(double)arg2;	// IMP=0x000000000018cb4d
- (void)_expandEditorialForLabel:(id)arg1;	// IMP=0x000000000018ca6b
- (double)_dividerHeight:(id)arg1;	// IMP=0x000000000018c9e1
- (id)_columnForView:(id)arg1;	// IMP=0x000000000018c7e7
- (id)_addFlipContainerViewWithFrontView:(id)arg1 backView:(id)arg2;	// IMP=0x000000000018c675
- (void)_addConfirmationGradientForView:(id)arg1;	// IMP=0x000000000018c218
- (void)_handlePlayButtonTap:(id)arg1 element:(id)arg2;	// IMP=0x000000000018ba99
- (void)_animateButton:(id)arg1;	// IMP=0x000000000018b244
- (void)_audioPlayerStatusChangeNotification:(id)arg1;	// IMP=0x000000000018b07a
- (void)_tapGestureAction:(id)arg1;	// IMP=0x000000000018acfb
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x000000000018ac93
- (void)_previewIndicatorAction:(id)arg1;	// IMP=0x000000000018ac7c
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x000000000018ac17
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000018a882
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000018a6ea
- (void)mediaPlayer:(id)arg1 itemStateChanged:(id)arg2;	// IMP=0x000000000018a351
- (void)toggleButtonWillAnimateTransition:(id)arg1;	// IMP=0x000000000018a33f
- (void)toggleButtonDidAnimateTransition:(id)arg1;	// IMP=0x000000000018a339
- (void)offerViewWillAnimateTransition:(id)arg1;	// IMP=0x000000000018a2da
- (_Bool)offerViewAnimateTransition:(id)arg1;	// IMP=0x000000000018a1d8
- (void)offerViewDidAnimateTransition:(id)arg1;	// IMP=0x000000000018a187
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x000000000018a0fa
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;	// IMP=0x000000000018a0a9
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000189f67
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000189da7
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000000189c48
- (void)layoutSubviews;	// IMP=0x000000000018826f
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000188079
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000187cfd
- (void)setContainerBackgroundImageForPlayButton:(id)arg1;	// IMP=0x0000000000187cce
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000001879b5
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000018795d
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001858d5
- (void)togglePreviewPlaybackAnimated:(_Bool)arg1;	// IMP=0x0000000000184f9e
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000184b97
- (void)hidePreviewProgressAnimated:(_Bool)arg1;	// IMP=0x00000000001848ac
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x0000000000184877
- (void)setVanishingPoint:(struct CGPoint)arg1;	// IMP=0x00000000001847fc
- (void)setPerspectiveTargetView:(id)arg1;	// IMP=0x00000000001846dc
- (id)preferredBackgroundColor;	// IMP=0x00000000001845db
- (void)dealloc;	// IMP=0x000000000018450b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000184486

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

