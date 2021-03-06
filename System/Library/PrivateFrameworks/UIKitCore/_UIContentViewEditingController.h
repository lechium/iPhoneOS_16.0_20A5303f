//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UILabel, UILongPressGestureRecognizer, UITextField, UIView, _UIContentViewEditingConfiguration, _UIContentViewLabelConfiguration, _UIPassthroughScrollInteraction;

__attribute__((visibility("hidden")))
@interface _UIContentViewEditingController : NSObject
{
    UILongPressGestureRecognizer *_longPressRecognizer;	// 8 = 0x8
    _UIPassthroughScrollInteraction *_passthroughInteraction;	// 16 = 0x10
    _Bool _hasEdits;	// 24 = 0x18
    UIView *_contentView;	// 32 = 0x20
    UILabel *_editableLabel;	// 40 = 0x28
    UITextField *_textInputView;	// 48 = 0x30
    _UIContentViewEditingConfiguration *_editingConfiguration;	// 56 = 0x38
    _UIContentViewLabelConfiguration *_labelConfiguration;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000905d04
@property(readonly, nonatomic) _UIContentViewLabelConfiguration *labelConfiguration; // @synthesize labelConfiguration=_labelConfiguration;
@property(readonly, nonatomic) _UIContentViewEditingConfiguration *editingConfiguration; // @synthesize editingConfiguration=_editingConfiguration;
@property(retain, nonatomic) UITextField *textInputView; // @synthesize textInputView=_textInputView;
@property(readonly, nonatomic) UILabel *editableLabel; // @synthesize editableLabel=_editableLabel;
@property(readonly, nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (_Bool)passthroughScrollInteractionDidRecognize:(id)arg1;	// IMP=0x0000000000905c9f
- (_Bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x0000000000905c83
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000000905b0a
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x00000000009059bb
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000009059a3
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000009058c9
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x0000000000905882
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000000009056e7
@property(readonly, nonatomic, getter=isDisplayingEditedText) _Bool displayingEditedText;
- (_Bool)makeTextInputFirstResponderWithInitialLayoutBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000905592
- (void)longPressRecognizerChanged:(id)arg1;	// IMP=0x00000000009054e1
- (void)dealloc;	// IMP=0x00000000009054ab
- (void)updateLabelConfiguration:(id)arg1 editingConfiguration:(id)arg2;	// IMP=0x0000000000904f63
@property(readonly, copy) NSString *description;
- (id)initWithContentView:(id)arg1 editableLabel:(id)arg2;	// IMP=0x0000000000904d5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

