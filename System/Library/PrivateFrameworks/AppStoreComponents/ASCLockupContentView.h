//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class ASCArtworkView, ASCLockupTheme, ASCOfferButton, ASCOfferTheme, ASCSkeletonLabel, NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface ASCLockupContentView : UIControl
{
    NSString *_size;	// 8 = 0x8
    ASCOfferTheme *_offerTheme;	// 16 = 0x10
    ASCLockupTheme *_lockupTheme;	// 24 = 0x18
    ASCArtworkView *_iconArtworkView;	// 32 = 0x20
    ASCSkeletonLabel *_titleLabel;	// 40 = 0x28
    ASCSkeletonLabel *_subtitleLabel;	// 48 = 0x30
    ASCOfferButton *_offerButton;	// 56 = 0x38
    UILabel *_headingLabelIfLoaded;	// 64 = 0x40
    UILabel *_offerStatusLabelIfLoaded;	// 72 = 0x48
}

+ (_Bool)isMiniLockupForSize:(id)arg1;	// IMP=0x0010000000023986
+ (_Bool)isOfferButtonOnlyLockupForSize:(id)arg1;	// IMP=0x0010000000023967
+ (long long)numberOfLinesInSubtitleForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0010000000023951
+ (long long)numberOfLinesInTitleForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000002393b
+ (_Bool)isOfferButtonFixedHeightForSize:(id)arg1;	// IMP=0x00100000000238d7
+ (id)headingLabelColorForSize:(id)arg1 lockupTheme:(id)arg2;	// IMP=0x00100000000236e7
+ (id)subtitleLabelColorForSize:(id)arg1 lockupTheme:(id)arg2;	// IMP=0x00100000000236a9
+ (id)titleLabelColorForSize:(id)arg1 lockupTheme:(id)arg2;	// IMP=0x001000000002366b
- (void).cxx_destruct;	// IMP=0x0000000000026b06
@property(readonly, nonatomic) UILabel *offerStatusLabelIfLoaded; // @synthesize offerStatusLabelIfLoaded=_offerStatusLabelIfLoaded;
@property(readonly, nonatomic) UILabel *headingLabelIfLoaded; // @synthesize headingLabelIfLoaded=_headingLabelIfLoaded;
@property(readonly, nonatomic) ASCOfferButton *offerButton; // @synthesize offerButton=_offerButton;
@property(readonly, nonatomic) ASCSkeletonLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) ASCSkeletonLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) ASCArtworkView *iconArtworkView; // @synthesize iconArtworkView=_iconArtworkView;
@property(copy, nonatomic) ASCLockupTheme *lockupTheme; // @synthesize lockupTheme=_lockupTheme;
@property(copy, nonatomic) ASCOfferTheme *offerTheme; // @synthesize offerTheme=_offerTheme;
@property(retain, nonatomic) NSString *size; // @synthesize size=_size;
@property(readonly, copy) NSString *description;
- (void)offerButton:(id)arg1 willTransitionToMetadata:(id)arg2 usingAnimator:(id)arg3;	// IMP=0x0000000000026635
- (void)endOfferModalState;	// IMP=0x00000000000265f8
- (void)beginOfferModalStateWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026586
- (void)setOfferStatus:(id)arg1;	// IMP=0x000000000002644d
- (void)setOfferInteractive:(_Bool)arg1;	// IMP=0x0000000000026401
- (void)setOfferEnabled:(_Bool)arg1;	// IMP=0x00000000000263b5
- (void)setOfferMetadata:(id)arg1;	// IMP=0x00000000000262b9
- (id)saveOfferState;	// IMP=0x0000000000026203
- (void)setLoading:(_Bool)arg1;	// IMP=0x0000000000026027
- (void)setPrefersRightToLeftLayout:(_Bool)arg1;	// IMP=0x0000000000025ffd
- (void)setSubtitle:(id)arg1;	// IMP=0x0000000000025f85
- (void)setTitle:(id)arg1;	// IMP=0x0000000000025f0d
- (void)setHeading:(id)arg1;	// IMP=0x0000000000025d7b
- (void)setIconImage:(id)arg1 withDecoration:(id)arg2;	// IMP=0x0000000000025cb9
- (void)removeOfferTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000025aca
- (void)addOfferTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000025a4c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000025816
- (void)layoutSubviews;	// IMP=0x000000000002570b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000255a6
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000025584
- (void)invalidateIntrinsicContentSize;	// IMP=0x0000000000025503
- (double)minimumLockupHeight;	// IMP=0x00000000000254b3
- (id)makeLayout;	// IMP=0x000000000002534f
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000000251e0
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000025169
@property(copy, nonatomic) UIColor *loadingColor;
@property(readonly, nonatomic) struct CGSize preferredIconSize;
@property(readonly, nonatomic) UILabel *headingLabel;
@property(readonly, nonatomic) UILabel *offerStatusLabel;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000024760
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000024735
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000023bb2
@property(readonly, nonatomic) _Bool shouldHideOfferStatus;
@property(readonly, nonatomic) _Bool shouldHideSubtitle;
@property(readonly, nonatomic) _Bool shouldHideTitle;
@property(readonly, nonatomic) _Bool shouldHideHeading;
@property(readonly, nonatomic) _Bool shouldHideIconArtwork;
@property(readonly, nonatomic) _Bool isMiniLockup;
@property(readonly, nonatomic) _Bool isOfferButtonOnlyLockup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

