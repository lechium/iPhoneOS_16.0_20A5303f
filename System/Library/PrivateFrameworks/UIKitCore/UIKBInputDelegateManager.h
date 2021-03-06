//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIResponder, UITextInputPasswordRules, UITextInputTraits, UITextInteractionAssistant, UITextInteractionSelectableInputDelegate;
@protocol UIKeyInput, UIKeyboardImplStateProtocol, UIKeyboardInput;

__attribute__((visibility("hidden")))
@interface UIKBInputDelegateManager : NSObject
{
    unsigned long long m_delegateConformanceType;	// 8 = 0x8
    unsigned long long m_originalDelegateConformanceType;	// 16 = 0x10
    _Bool _forwardingInputDelegateConformsToWKInteraction;	// 24 = 0x18
    _Bool m_firstResponderAdoptsTextInput;	// 25 = 0x19
    _Bool _shouldRespectForwardingInputDelegate;	// 26 = 0x1a
    _Bool _insideKeyInputDelegateCall;	// 27 = 0x1b
    id <UIKeyboardImplStateProtocol> _keyboardStateDelegate;	// 32 = 0x20
    UIResponder<UIKeyInput> *_forwardingInputDelegate;	// 40 = 0x28
    UIResponder<UIKeyInput> *_keyInputDelegate;	// 48 = 0x30
    UITextInteractionSelectableInputDelegate *_selectableDelegate;	// 56 = 0x38
}

+ (struct _NSRange)rangeForTextRange:(id)arg1 document:(id)arg2;	// IMP=0x0010000000780faf
- (void).cxx_destruct;	// IMP=0x0000000000782028
@property(retain, nonatomic) UITextInteractionSelectableInputDelegate *selectableDelegate; // @synthesize selectableDelegate=_selectableDelegate;
@property(retain, nonatomic) UIResponder<UIKeyInput> *keyInputDelegate; // @synthesize keyInputDelegate=_keyInputDelegate;
@property(nonatomic) _Bool insideKeyInputDelegateCall; // @synthesize insideKeyInputDelegateCall=_insideKeyInputDelegateCall;
@property(nonatomic) _Bool shouldRespectForwardingInputDelegate; // @synthesize shouldRespectForwardingInputDelegate=_shouldRespectForwardingInputDelegate;
@property(nonatomic) __weak UIResponder<UIKeyInput> *forwardingInputDelegate; // @synthesize forwardingInputDelegate=_forwardingInputDelegate;
@property(nonatomic) __weak id <UIKeyboardImplStateProtocol> keyboardStateDelegate; // @synthesize keyboardStateDelegate=_keyboardStateDelegate;
- (_Bool)selectionIsWord;	// IMP=0x0000000000781d34
- (void)moveSelectionToEndOfWord;	// IMP=0x0000000000781a81
- (void)collapseSelectionAndAdjustByOffset:(long long)arg1;	// IMP=0x0000000000781814
- (_Bool)selectionIsEndOfWord;	// IMP=0x0000000000781631
- (void)changedSelection;	// IMP=0x0000000000781543
- (_Bool)shouldDeleteForward;	// IMP=0x00000000007810ca
- (_Bool)callShouldDeleteBackwardWithCount:(unsigned long long)arg1;	// IMP=0x0000000000780b4c
- (_Bool)callShouldReplaceExtendedRange:(long long)arg1 withText:(id)arg2 includeMarkedText:(_Bool)arg3;	// IMP=0x00000000007805f0
- (void)handleClearWithInsertBeforeAdvance:(id)arg1;	// IMP=0x0000000000780421
- (void)unmarkText:(id)arg1;	// IMP=0x0000000000780255
- (void)insertTextAfterSelection:(id)arg1;	// IMP=0x000000000078004e
- (void)insertText:(id)arg1 updateInputSource:(_Bool)arg2;	// IMP=0x000000000077fd28
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;	// IMP=0x000000000077fc91
- (_Bool)shouldSuppressUpdateCandidateView;	// IMP=0x000000000077fc02
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000077fb08
- (void)_setSelectionToPosition:(id)arg1;	// IMP=0x000000000077fa96
- (id)_textRangeFromNSRange:(struct _NSRange)arg1;	// IMP=0x000000000077fa32
- (unsigned int)_characterBeforeCaretSelection;	// IMP=0x000000000077f9ee
- (id)__content;	// IMP=0x000000000077f99e
- (_Bool)_deleteForwardAndNotify:(_Bool)arg1;	// IMP=0x000000000077f81c
- (void)_deleteBackwardAndNotify:(_Bool)arg1 reinsertionOut:(id *)arg2;	// IMP=0x000000000077f5af
- (void)_moveCurrentSelection:(int)arg1;	// IMP=0x000000000077f4ff
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x000000000077f482
- (_Bool)_hasMarkedText;	// IMP=0x000000000077f360
- (void)handleKeyWebEvent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000077f232
- (void)handleKeyWebEvent:(id)arg1;	// IMP=0x000000000077f18b
- (_Bool)requiresKeyEvents;	// IMP=0x000000000077f0fc
- (void)insertDictationResult:(id)arg1;	// IMP=0x000000000077f019
- (void)insertAttributedText:(id)arg1;	// IMP=0x000000000077ecaf
- (void)insertTextSuggestion:(id)arg1;	// IMP=0x000000000077ea26
- (_Bool)insertSupplementalItem:(id)arg1 candidate:(id)arg2 replacementRange:(id)arg3;	// IMP=0x000000000077e78b
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x000000000077e713
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x000000000077e696
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000077e60b
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000077e574
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x000000000077e4eb
- (id)endOfDocument;	// IMP=0x000000000077e49b
- (id)beginningOfDocument;	// IMP=0x000000000077e44b
- (id)attributedMarkedText;	// IMP=0x000000000077e147
- (id)markedText;	// IMP=0x000000000077dfe7
- (void)unmarkText;	// IMP=0x000000000077dea7
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x000000000077de2a
- (void)setSelectedTextRange:(id)arg1;	// IMP=0x000000000077ddb8
- (id)selectedTextRange;	// IMP=0x000000000077dd68
- (id)markedTextRange;	// IMP=0x000000000077dd18
- (void)replaceRange:(id)arg1 oldText:(id)arg2 withText:(id)arg3 forReplaceAction:(int)arg4;	// IMP=0x000000000077d48f
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x000000000077d409
- (id)textInRange:(id)arg1;	// IMP=0x000000000077d386
- (void)insertText:(id)arg1 alternatives:(id)arg2 style:(long long)arg3;	// IMP=0x000000000077d1f0
- (void)deleteBackward;	// IMP=0x000000000077d1d7
- (void)insertText:(id)arg1;	// IMP=0x000000000077d14f
@property(readonly, nonatomic) _Bool hasText;
@property(nonatomic) _Bool continuousSpellCheckingEnabled;
@property(readonly, nonatomic) UITextInputTraits *textInputTraits;
- (void)updateSelectableInputDelegateIfNecessary;	// IMP=0x000000000077cd3d
- (void)_firstResponderDidChange:(id)arg1;	// IMP=0x000000000077cc46
- (id)inputSystemSourceSession;	// IMP=0x000000000077cbac
@property(readonly, nonatomic) UITextInteractionAssistant *textInteractionAssistant;
@property(readonly, nonatomic) id <UIKeyboardInput> legacyInputDelegate;
- (id)delegateAsResponder;	// IMP=0x000000000077c804
- (id)privateKeyInputDelegate;	// IMP=0x000000000077c7d7
- (id)asynchronousInputDelegate;	// IMP=0x000000000077c766
- (id)textInputDelegate;	// IMP=0x000000000077c739
- (id)privateInputDelegate;	// IMP=0x000000000077c70c
- (id)delegateRespectingForwardingDelegate:(_Bool)arg1;	// IMP=0x000000000077c6ae
- (_Bool)delegateAdoptsWebTextInputPrivate;	// IMP=0x000000000077c6a0
- (void)storeDelegateConformance;	// IMP=0x000000000077c3e9
@property(readonly, nonatomic) unsigned long long delegateConformanceType;
- (void)updateRespectForwardingInputDelegateFlagInDestination;	// IMP=0x000000000077c2d6
- (void)clearForwardingInputDelegateAndResign:(_Bool)arg1;	// IMP=0x000000000077c242
- (void)clearDelegate;	// IMP=0x000000000077c0b3
- (void)setDelegate:(id)arg1;	// IMP=0x000000000077bf76
- (void)setupResponderChangeListeners;	// IMP=0x000000000077bedb
- (id)init;	// IMP=0x000000000077beac

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

