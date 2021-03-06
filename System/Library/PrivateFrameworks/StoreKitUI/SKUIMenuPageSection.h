//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSMutableIndexSet, NSString, SKUIMenuPageComponent, SKUIMenuViewController, SKUIPillsControl, SKUIPopupMenuHeaderView, UIBarButtonItem, UIPopoverController;

__attribute__((visibility("hidden")))
@interface SKUIMenuPageSection : SKUIStorePageSection
{
    UIBarButtonItem *_cancelMenuItem;	// 8 = 0x8
    SKUIPillsControl *_pillsControl;	// 16 = 0x10
    SKUIMenuViewController *_moreListMenuViewController;	// 24 = 0x18
    UIPopoverController *_moreListPopoverController;	// 32 = 0x20
    SKUIPopupMenuHeaderView *_popupHeaderView;	// 40 = 0x28
    long long _selectedIndex;	// 48 = 0x30
    NSMutableIndexSet *_sortRequestIndexSet;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000034d384
- (void)_showPopoverController;	// IMP=0x000000000034d192
- (void)_showMoreList;	// IMP=0x000000000034d120
- (void)_showMenuViewController;	// IMP=0x000000000034cec8
- (void)_setSelectedIndex:(long long)arg1;	// IMP=0x000000000034cdbe
- (void)_restorePreviousSelection;	// IMP=0x000000000034cd14
- (id)_popupHeaderView;	// IMP=0x000000000034caa3
- (id)_pillsControl;	// IMP=0x000000000034c696
- (id)_newMenuViewController;	// IMP=0x000000000034c573
- (void)_loadSortDataIfNecessaryForMenuIndex:(long long)arg1 reason:(long long)arg2;	// IMP=0x000000000034c3bc
- (void)_dismissMenuViewController;	// IMP=0x000000000034c262
- (id)_contentChildView;	// IMP=0x000000000034c1af
- (void)_pillAction:(id)arg1;	// IMP=0x000000000034c071
- (void)_cancelMenuAction:(id)arg1;	// IMP=0x000000000034c043
- (void)popoverControllerDidDismissPopover:(id)arg1;	// IMP=0x000000000034bfc2
- (void)sortDataRequest:(id)arg1 didFinishWithLockups:(id)arg2;	// IMP=0x000000000034bda5
- (void)popupMenuHeader:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;	// IMP=0x000000000034bd90
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;	// IMP=0x000000000034bcf1
- (void)willAppearInContext:(id)arg1;	// IMP=0x000000000034bc4d
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x000000000034bbf7
- (long long)numberOfCells;	// IMP=0x000000000034bbec
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x000000000034bb31
- (id)cellForIndexPath:(id)arg1;	// IMP=0x000000000034ba28
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x000000000034b910
- (void)dealloc;	// IMP=0x000000000034b859
- (id)initWithPageComponent:(id)arg1;	// IMP=0x000000000034b7e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIMenuPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

