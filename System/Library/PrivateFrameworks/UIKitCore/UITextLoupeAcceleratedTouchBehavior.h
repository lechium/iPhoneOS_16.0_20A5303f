//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITextModernLoupeSession, UITextRange, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextLoupeAcceleratedTouchBehavior : NSObject
{
    UITextRange *_originalTextRange;	// 8 = 0x8
    _UIKeyboardTextSelectionController *_activeSelectionController;	// 16 = 0x10
    UITextModernLoupeSession *_loupeSession;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000132a500
- (void)textLoupeInteraction:(id)arg1 gestureChangedWithState:(long long)arg2 location:(CDUnknownBlockType)arg3 translation:(CDUnknownBlockType)arg4 velocity:(CDUnknownBlockType)arg5 modifierFlags:(long long)arg6 shouldCancel:(_Bool *)arg7;	// IMP=0x0000000001329c5f
- (struct CGPoint)velocityInView:(id)arg1 forLoupeGesture:(id)arg2;	// IMP=0x0000000001329c4a
- (struct CGPoint)translationInView:(id)arg1 forLoupeGesture:(id)arg2;	// IMP=0x0000000001329c35
- (struct CGPoint)startPointForLoupeGesture:(id)arg1;	// IMP=0x0000000001329c20
- (_Bool)triggeredByLongPressGesture:(id)arg1;	// IMP=0x0000000001329c18
- (_Bool)usesTouchAlignment;	// IMP=0x0000000001329c10
- (_Bool)loupeGestureRecognizerShouldBegin:(id)arg1 forTextLoupeInteraction:(id)arg2;	// IMP=0x0000000001329b61
- (_Bool)shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x0000000001329b49
- (void)configureLoupeGestureRecognizer:(id)arg1 forTextLoupeInteraction:(id)arg2;	// IMP=0x0000000001329aac
- (void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)arg1;	// IMP=0x0000000001329a14
- (void)adjustVariableDelaySettingsForLoupeInteraction:(id)arg1;	// IMP=0x0000000001329a0e
- (Class)gestureRecognizerClassForLoupeInteraction:(id)arg1;	// IMP=0x00000000013299fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

