//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, SKUIButtonViewElement, SKUIClientContext, SKUINavigationBarButtonsController, SKUINavigationBarContext, SKUINavigationBarViewElement, SKUINavigationPaletteController, UIView, UIViewController;
@protocol SKUINavigationBarControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarController : NSObject
{
    SKUINavigationBarButtonsController *_buttonsController;	// 8 = 0x8
    SKUIClientContext *_clientContext;	// 16 = 0x10
    SKUINavigationBarContext *_navigationBarContext;	// 24 = 0x18
    SKUINavigationPaletteController *_paletteController;	// 32 = 0x20
    UIViewController *_parentViewController;	// 40 = 0x28
    NSMutableArray *_reusableSearchBarControllers;	// 48 = 0x30
    NSMapTable *_searchBarControllers;	// 56 = 0x38
    NSMutableArray *_sections;	// 64 = 0x40
    SKUINavigationBarViewElement *_viewElement;	// 72 = 0x48
    SKUIButtonViewElement *_titleButtonViewElement;	// 80 = 0x50
    id <SKUINavigationBarControllerDelegate> _delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000001a8f17
@property(nonatomic) __weak id <SKUINavigationBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) SKUINavigationBarViewElement *navigationBarViewElement; // @synthesize navigationBarViewElement=_viewElement;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_titleButtonAction:(id)arg1;	// IMP=0x00000000001a8e10
- (id)_resourceImageForImageElement:(id)arg1;	// IMP=0x00000000001a8cca
- (id)_navigationBarContext;	// IMP=0x00000000001a8b30
- (void)_fullyReloadSections:(id)arg1 withNavigationItem:(id)arg2;	// IMP=0x00000000001a8875
- (id)_buttonWithElement:(id)arg1 width:(double)arg2;	// IMP=0x00000000001a7f8d
- (id)_barButtonItemWithViewElement:(id)arg1;	// IMP=0x00000000001a7f08
- (id)_barButtonItemWithSearchBarViewElement:(id)arg1;	// IMP=0x00000000001a7dc5
- (id)_barButtonItemWithButtonViewElement:(id)arg1;	// IMP=0x00000000001a7cfa
- (double)_availableWidth;	// IMP=0x00000000001a7be6
- (id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3;	// IMP=0x00000000001a7ad9
- (id)_attributedStringForButton:(id)arg1;	// IMP=0x00000000001a79f2
- (id)_addSearchBarControllerWithViewElement:(id)arg1;	// IMP=0x00000000001a77b2
- (void)_viewElementEventNotification:(id)arg1;	// IMP=0x00000000001a7648
- (void)layoutCacheDidFinishBatch:(id)arg1;	// IMP=0x00000000001a74fb
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x00000000001a7436
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001a728c
- (void)updateNavigationItem:(id)arg1;	// IMP=0x00000000001a6947
- (id)titleViewWithViewElement:(id)arg1;	// IMP=0x00000000001a6420
- (void)setReusableSearchBarControllers:(id)arg1;	// IMP=0x00000000001a63e6
@property(readonly, nonatomic) UIView *navigationPaletteView;
- (id)fallbackTitleView;	// IMP=0x00000000001a6277
@property(readonly, nonatomic) NSArray *existingSearchBarControllers;
- (void)detachNavigationItemControllers;	// IMP=0x00000000001a5e01
- (void)detachFromNavigationItem:(id)arg1;	// IMP=0x00000000001a5d84
- (id)barButtonItemForElementIdentifier:(id)arg1;	// IMP=0x00000000001a5c14
- (void)attachToNavigationItem:(id)arg1;	// IMP=0x00000000001a4f12
- (void)dealloc;	// IMP=0x00000000001a4e4f
- (id)initWithNavigationBarViewElement:(id)arg1;	// IMP=0x00000000001a4d74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

