//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class UIContextMenuInteraction;
@protocol UIContextMenuInteractionDelegate;

__attribute__((visibility("hidden")))
@interface UITextContextMenuInteraction : UITextInteraction
{
    id <UIContextMenuInteractionDelegate> _externalContextMenuDelegate;	// 8 = 0x8
    UIContextMenuInteraction *_contextMenuInteraction;	// 16 = 0x10
}

+ (id)createMenuInteraction;	// IMP=0x004000000112d227
+ (void)setShouldUseContextMenuInteraction:(_Bool)arg1;	// IMP=0x004000000112d1f3
+ (_Bool)shouldUseContextMenuInteraction;	// IMP=0x004000000112d1c8
- (void).cxx_destruct;	// IMP=0x000000000112d965
@property(retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(nonatomic) __weak id <UIContextMenuInteractionDelegate> externalContextMenuDelegate; // @synthesize externalContextMenuDelegate=_externalContextMenuDelegate;
@property(readonly, nonatomic) _Bool dismissedByActionSelection;
@property(readonly, nonatomic) _Bool isDisplayingMenu;
@property(readonly, nonatomic) _Bool dismissedRecently;
- (void)updateVisibleMenuPosition;	// IMP=0x000000000112d8f5
- (void)dismissMenuForInputUI;	// IMP=0x000000000112d8ef
- (void)presentMenuForInputUI:(id)arg1;	// IMP=0x000000000112d8e9
- (void)dismissSelectionCommands;	// IMP=0x000000000112d8e3
- (void)presentSelectionCommandsWithConfiguration:(id)arg1;	// IMP=0x000000000112d8dd
- (_Bool)_textInputIsSecure;	// IMP=0x000000000112d84e
- (void)prepareForContextMenuAtLocationInView:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000112d35f
- (struct CGPoint)locationInTextInputViewForLocationInView:(struct CGPoint)arg1;	// IMP=0x000000000112d25d

@end
