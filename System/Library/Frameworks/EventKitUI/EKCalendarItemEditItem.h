//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKCalendarItem, EKEventStore, NSString, UIResponder, UIViewController;
@protocol EKCalendarItemEditItemDelegate, EKEditItemViewControllerProtocol, EKStyleProvider;

__attribute__((visibility("hidden")))
@interface EKCalendarItemEditItem : NSObject
{
    EKEventStore *_store;	// 8 = 0x8
    UIViewController<EKEditItemViewControllerProtocol> *_viewController;	// 16 = 0x10
    EKCalendarItem *_calendarItem;	// 24 = 0x18
    id <EKCalendarItemEditItemDelegate> _delegate;	// 32 = 0x20
    id <EKStyleProvider> _styleProvider;	// 40 = 0x28
    UIResponder *_selectedResponder;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000008e726
@property(retain, nonatomic) UIResponder *selectedResponder; // @synthesize selectedResponder=_selectedResponder;
@property(retain, nonatomic) id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) __weak id <EKCalendarItemEditItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableViewDidScroll;	// IMP=0x000000000008e6c3
- (id)trailingSwipeActionsConfigurationForRowAtIndex:(long long)arg1;	// IMP=0x000000000008e6bb
- (id)viewForActionSheet;	// IMP=0x000000000008e6a5
- (_Bool)shouldPinKeyboard;	// IMP=0x000000000008e69d
- (_Bool)isInline;	// IMP=0x000000000008e695
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;	// IMP=0x000000000008e4e3
- (id)editItemEventToDetach;	// IMP=0x000000000008e4db
- (_Bool)editItemViewControllerShouldShowDetachAlert;	// IMP=0x000000000008e4d3
- (void)editItemViewControllerWantsKeyboardPinned:(_Bool)arg1;	// IMP=0x000000000008e447
- (_Bool)editItemViewControllerSave:(id)arg1;	// IMP=0x000000000008e43f
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;	// IMP=0x000000000008e41d
- (void)endInlineEditing;	// IMP=0x000000000008e417
- (void)notifyRequiresHeightChange;	// IMP=0x000000000008e393
- (void)notifyTextChanged;	// IMP=0x000000000008e30f
- (void)notifySubitemDidSave:(unsigned long long)arg1;	// IMP=0x000000000008e26a
- (void)notifyDidEndEditing;	// IMP=0x000000000008e1e6
- (void)notifyDidStartEditing;	// IMP=0x000000000008e162
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;	// IMP=0x000000000008e14d
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;	// IMP=0x000000000008e147
- (void)editorDidScroll:(id)arg1;	// IMP=0x000000000008e141
- (_Bool)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2;	// IMP=0x000000000008e129
- (void)editor:(id)arg1 didDeselectSubitem:(unsigned long long)arg2;	// IMP=0x000000000008e123
- (void)showViewController:(id)arg1 editor:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000008de2c
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;	// IMP=0x000000000008dd50
- (void)editor:(id)arg1 requestsInjectableViewControllerToBeShownForSubitem:(unsigned long long)arg2;	// IMP=0x000000000008dc77
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;	// IMP=0x000000000008dc6f
- (id)headerTitle;	// IMP=0x000000000008dc67
- (id)footerTitle;	// IMP=0x000000000008dc5f
- (id)footerView;	// IMP=0x000000000008dc57
- (double)footerHeightForWidth:(double)arg1;	// IMP=0x000000000008dc4e
- (id)injectableViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000008dc46
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000008dc3e
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inEditor:(id)arg2;	// IMP=0x000000000008dc2c
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008dc24
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000008d68f
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;	// IMP=0x000000000008d67e
- (unsigned long long)numberOfSubitems;	// IMP=0x000000000008d673
- (_Bool)shouldAppearWithVisibility:(int)arg1;	// IMP=0x000000000008d66b
- (void)applicationDidResume;	// IMP=0x000000000008d665
- (void)prepareForReload;	// IMP=0x000000000008d65f
- (_Bool)forceRefreshAlarmItemOnSave;	// IMP=0x000000000008d657
- (_Bool)forceRefreshURLItemOnSave;	// IMP=0x000000000008d64f
- (_Bool)forceRefreshLocationItemOnSave;	// IMP=0x000000000008d647
- (_Bool)forceRefreshInviteesItemOnSave;	// IMP=0x000000000008d63f
- (_Bool)forceRefreshStartAndEndDatesOnSave;	// IMP=0x000000000008d637
- (_Bool)prefersTargettedTableReloadOnSave;	// IMP=0x000000000008d62f
- (_Bool)forceTableReloadOnSave;	// IMP=0x000000000008d627
- (_Bool)requiresReconfigurationOnSave;	// IMP=0x000000000008d61f
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;	// IMP=0x000000000008d617
- (_Bool)configureForCalendarConstraints:(id)arg1;	// IMP=0x000000000008d605
- (void)reset;	// IMP=0x000000000008d5ff
- (void)refreshFromCalendarItemAndStore;	// IMP=0x000000000008d5f9
- (id)calendarItem;	// IMP=0x000000000008d5eb
- (void)setCalendarItem:(id)arg1 store:(id)arg2;	// IMP=0x000000000008d540

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

