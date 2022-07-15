//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIMenuController.h"

@class NSArray, NSString, UIEditMenuInteraction, UIView;

__attribute__((visibility("hidden")))
@interface _UIEditMenuInteractionMenuController : UIMenuController
{
    UIEditMenuInteraction *_currentMenuInteraction;	// 24 = 0x18
    NSArray *_extraMenuItems;	// 32 = 0x20
    UIView *_targetView;	// 40 = 0x28
    struct CGRect _targetRect;	// 48 = 0x30
    _Bool _menuNeedsUpdate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000cfcc76
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;	// IMP=0x0000000000cfcb81
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000cfc9bd
- (void)editMenuInteraction:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000cfc8a2
- (struct CGRect)editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;	// IMP=0x0000000000cfc882
- (void)_applicationDidAddDeactivationReason:(id)arg1;	// IMP=0x0000000000cfc7e3
- (long long)_resolvedEditMenuArrowDirection;	// IMP=0x0000000000cfc7c2
- (_Bool)_shouldPassthroughInView;	// IMP=0x0000000000cfc6b5
- (void)_presentEditMenu;	// IMP=0x0000000000cfc58a
- (void)_dismissEditMenu;	// IMP=0x0000000000cfc56d
- (id)_calloutBarFirstResponderTarget;	// IMP=0x0000000000cfc36b
- (void)_prepareEditMenuInteractionIfNeeded;	// IMP=0x0000000000cfc1b0
- (void)_setTargetRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000cfc0e8
- (struct CGRect)_targetRect;	// IMP=0x0000000000cfc0c8
- (id)_targetView;	// IMP=0x0000000000cfc0af
- (struct CGRect)menuFrame;	// IMP=0x0000000000cfbfa0
- (void)update;	// IMP=0x0000000000cfbf2b
- (void)setMenuItems:(id)arg1;	// IMP=0x0000000000cfbefe
- (id)menuItems;	// IMP=0x0000000000cfbee9
- (void)hideMenu;	// IMP=0x0000000000cfbed7
- (void)hideMenuFromView:(id)arg1;	// IMP=0x0000000000cfbe4c
- (void)showMenuFromView:(id)arg1 rect:(struct CGRect)arg2;	// IMP=0x0000000000cfbd84
- (void)setTargetRect:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x0000000000cfbd6d
- (void)setMenuVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000cfbca7
- (_Bool)isMenuVisible;	// IMP=0x0000000000cfbc8a
- (void)dealloc;	// IMP=0x0000000000cfbbd7
- (id)init;	// IMP=0x0000000000cfbb43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
