//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSString, UIButton, UIKeyboardDockItem, UIKeyboardDockView;

__attribute__((visibility("hidden")))
@interface UISystemKeyboardDockController : UIViewController
{
    _Bool _dictationHasUsedServerManualEndpointing;	// 8 = 0x8
    _Bool _dictationUsingServerManualEndpointing;	// 9 = 0x9
    _Bool _isSuppressingDockItemTouch;	// 10 = 0xa
    UIKeyboardDockItem *_globeDockItem;	// 16 = 0x10
    UIKeyboardDockItem *_dictationDockItem;	// 24 = 0x18
    UIKeyboardDockItem *_dictationRunningDockItem;	// 32 = 0x20
    UIKeyboardDockItem *_keyboardDockItem;	// 40 = 0x28
    UIButton *_stopDictationButton;	// 48 = 0x30
    UIKeyboardDockView *_dockView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000c068fe
@property(retain, nonatomic) UIKeyboardDockView *dockView; // @synthesize dockView=_dockView;
- (void)updateDockItemsVisibility;	// IMP=0x0000000000c0620e
- (void)keyboardDockView:(id)arg1 didPressDockItem:(id)arg2 withEvent:(id)arg3;	// IMP=0x0000000000c05f81
- (void)keyboardItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c05df9
- (void)globeItemButtonWasPressed:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c0597e
- (void)dictationItemButtonWasPressed:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c05191
- (void)_dictationDidBeginNotification:(id)arg1;	// IMP=0x0000000000c05041
- (void)setKeyboardDockItem;	// IMP=0x0000000000c04e77
- (void)viewDidLoad;	// IMP=0x0000000000c04d91
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000c04cdf
- (void)loadView;	// IMP=0x0000000000c04a4e
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000c04a46
- (void)dealloc;	// IMP=0x0000000000c049d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

