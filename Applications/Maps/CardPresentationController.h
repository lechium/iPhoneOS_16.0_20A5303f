//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CardView, ContainerViewController, UIColor, UIViewController;
@protocol ContaineeProtocol;

@interface CardPresentationController : NSObject
{
    _Bool _firstCard;	// 8 = 0x8
    _Bool _alwaysUseDefaultContaineeLayout;	// 9 = 0x9
    _Bool _hideContentInSmallLayout;	// 10 = 0xa
    _Bool _hidden;	// 11 = 0xb
    _Bool _blurInCardView;	// 12 = 0xc
    _Bool _allowsSwipeToDismiss;	// 13 = 0xd
    _Bool _presentedModally;	// 14 = 0xe
    _Bool _hideGrabber;	// 15 = 0xf
    _Bool _takesAvailableHeight;	// 16 = 0x10
    _Bool _allowResizeInFloatingStyle;	// 17 = 0x11
    _Bool _shouldHidePreviousCards;	// 18 = 0x12
    _Bool _wantsFullscreen;	// 19 = 0x13
    _Bool _usingSheetPresentation;	// 20 = 0x14
    double _contentAlpha;	// 24 = 0x18
    unsigned long long _edgeAttachedRegularHeightDimmingBehavior;	// 32 = 0x20
    unsigned long long _defaultContaineeLayout;	// 40 = 0x28
    double _headerTransitionHeight;	// 48 = 0x30
    UIColor *_cardColor;	// 56 = 0x38
    UIViewController<ContaineeProtocol> *_viewController;	// 64 = 0x40
    CardView *_cardView;	// 72 = 0x48
    double _cardHeight;	// 80 = 0x50
    ContainerViewController *_containerViewController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000007cd5f1
@property(readonly, nonatomic) __weak ContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) double cardHeight; // @synthesize cardHeight=_cardHeight;
@property(nonatomic) __weak CardView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) __weak UIViewController<ContaineeProtocol> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool usingSheetPresentation; // @synthesize usingSheetPresentation=_usingSheetPresentation;
@property(nonatomic) _Bool wantsFullscreen; // @synthesize wantsFullscreen=_wantsFullscreen;
@property(nonatomic) _Bool shouldHidePreviousCards; // @synthesize shouldHidePreviousCards=_shouldHidePreviousCards;
@property(nonatomic) _Bool allowResizeInFloatingStyle; // @synthesize allowResizeInFloatingStyle=_allowResizeInFloatingStyle;
@property(nonatomic) _Bool takesAvailableHeight; // @synthesize takesAvailableHeight=_takesAvailableHeight;
@property(nonatomic) _Bool hideGrabber; // @synthesize hideGrabber=_hideGrabber;
// Error: Property attributes should begin with the type ('T') attribute, property name: presentedModally
// Property attributes: (null)

@property(nonatomic) _Bool allowsSwipeToDismiss; // @synthesize allowsSwipeToDismiss=_allowsSwipeToDismiss;
@property(copy, nonatomic) UIColor *cardColor; // @synthesize cardColor=_cardColor;
@property(nonatomic) _Bool blurInCardView; // @synthesize blurInCardView=_blurInCardView;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double headerTransitionHeight; // @synthesize headerTransitionHeight=_headerTransitionHeight;
@property(nonatomic, getter=hidesContentInSmallLayout) _Bool hideContentInSmallLayout; // @synthesize hideContentInSmallLayout=_hideContentInSmallLayout;
@property(nonatomic) _Bool alwaysUseDefaultContaineeLayout; // @synthesize alwaysUseDefaultContaineeLayout=_alwaysUseDefaultContaineeLayout;
@property(nonatomic) unsigned long long defaultContaineeLayout; // @synthesize defaultContaineeLayout=_defaultContaineeLayout;
@property(nonatomic, getter=isFirstCard) _Bool firstCard; // @synthesize firstCard=_firstCard;
@property(nonatomic) unsigned long long edgeAttachedRegularHeightDimmingBehavior; // @synthesize edgeAttachedRegularHeightDimmingBehavior=_edgeAttachedRegularHeightDimmingBehavior;
- (double)transitionProgressToAscendingLayoutFromLayout:(unsigned long long)arg1;	// IMP=0x00100000007cd43d
- (double)transitionProgressFromLayout:(unsigned long long)arg1 toLayout:(unsigned long long)arg2;	// IMP=0x00100000007cd014
- (long long)_detentIndexForContaineeLayout:(unsigned long long)arg1;	// IMP=0x00100000007ccfc5
@property(readonly, nonatomic) long long modalDismissStyle;
@property(readonly, nonatomic) long long modalPresentStyle;
- (long long)_modalPresentationStyleIsDismissing:(_Bool)arg1;	// IMP=0x00100000007ccef5
@property(readonly, nonatomic) struct CGSize sheetContentSize;
- (void)updateAdditionalTopMargin;	// IMP=0x00100000007ccb04
- (void)updateDimmingBehavior;	// IMP=0x00100000007cc945
- (void)updateGrabber;	// IMP=0x00100000007cc854
- (void)configureForSheetPresentationWithContainer:(id)arg1 layout:(unsigned long long)arg2;	// IMP=0x00100000007cc39d
- (id)detents;	// IMP=0x00100000007cbe2f
@property(readonly, nonatomic) double grabberSafeAreaHeight;
@property(readonly, nonatomic) _Bool isFloating;
- (_Bool)_fullHeightFixed;	// IMP=0x00100000007cbd54
- (unsigned long long)_layoutforDetentIdentifier:(id)arg1;	// IMP=0x00100000007cbcae
- (id)_detentIdentifierForContaineeLayout:(unsigned long long)arg1;	// IMP=0x00100000007cbb80
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
- (_Bool)updateHeightConstraintWithValue:(double)arg1 transitionHeight:(double)arg2;	// IMP=0x00100000007cb2ad
- (_Bool)updateHeightConstraintWithValue:(double)arg1;	// IMP=0x00100000007cb26a
- (void)updateHeightForLayout:(unsigned long long)arg1;	// IMP=0x00100000007cb0c0
- (void)updateHeightForCurrentLayoutAnimated:(_Bool)arg1;	// IMP=0x00100000007cae3f
- (void)updateHeightForCurrentLayout;	// IMP=0x00100000007cae2b
- (_Bool)_supportDragMultiLayout;	// IMP=0x00100000007cadf4
- (void)setCardView:(id)arg1 fromContainer:(id)arg2;	// IMP=0x00100000007ca9ef
- (void)_updateStyle;	// IMP=0x00100000007ca5b0
- (_Bool)_wantsSheetGrabber;	// IMP=0x00100000007ca54f
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000007ca471
- (void)dismiss:(_Bool)arg1;	// IMP=0x00100000007ca39a
- (void)applyWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007ca2d1
- (void)wantsMinimizeLayout;	// IMP=0x00100000007ca21a
- (void)wantsExpandLayout;	// IMP=0x00100000007ca163
- (void)wantsLayout:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00100000007c9c17
- (void)wantsLayout:(unsigned long long)arg1;	// IMP=0x00100000007c9c00
@property(readonly, nonatomic) double availableHeight;
@property(readonly, nonatomic) double bottomSafeOffset;
@property(readonly, nonatomic) unsigned long long containerStyle;
@property(readonly, nonatomic) unsigned long long containeeLayout;
- (id)initWithViewController:(id)arg1;	// IMP=0x00100000007c956d

@end

