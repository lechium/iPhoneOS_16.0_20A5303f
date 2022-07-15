//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewController.h"

@class NSString, SKUIButtonViewElement, SKUIEditorTemplateView, SKUIEditorTemplateViewElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIEditorDocumentViewController : SKUIViewController
{
    SKUIButtonViewElement *_doneButtonElement;	// 8 = 0x8
    SKUIEditorTemplateView *_editorView;	// 16 = 0x10
    _Bool _isTextChanged;	// 24 = 0x18
    struct CGRect _keyboardFrame;	// 32 = 0x20
    SKUIViewElementLayoutContext *_layoutContext;	// 64 = 0x40
    SKUIButtonViewElement *_resetButtonElement;	// 72 = 0x48
    SKUIEditorTemplateViewElement *_templateElement;	// 80 = 0x50
    struct CGRect _toolbarFrame;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000002516cf
- (void)_updateEditorViewInset;	// IMP=0x0000000000251656
- (void)_updateBiographyWithText:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000025110b
- (void)_sendDoneEventAndDismissWithText:(id)arg1;	// IMP=0x0000000000251007
- (void)_sendCancelEventAndDismiss;	// IMP=0x0000000000250f33
- (void)_resetTextView;	// IMP=0x0000000000250eb4
- (void)_resetButtonAction;	// IMP=0x00000000002509a1
- (id)_locateFirstButtonWithType:(long long)arg1 inChildrenOfElement:(id)arg2;	// IMP=0x00000000002507f2
- (void)_layoutNavigation;	// IMP=0x0000000000250559
- (void)_layoutEditorView;	// IMP=0x00000000002504d3
- (id)_layoutContext;	// IMP=0x0000000000250407
- (id)_backgroundColor;	// IMP=0x000000000025035e
- (void)_authenticateOnCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000250106
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000002500d7
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000250084
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000250031
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000024ffd4
- (void)loadView;	// IMP=0x000000000024fe99
- (void)didChangeTextInEditorTemplateView:(id)arg1;	// IMP=0x000000000024fe74
- (void)documentDidUpdate:(id)arg1;	// IMP=0x000000000024fdd9
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x000000000024fd3a
- (void)_keyboardWillChangeFrame:(id)arg1;	// IMP=0x000000000024fc27
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x000000000024fb14
- (void)_cancelButtonAction;	// IMP=0x000000000024fb02
- (void)_doneButtonAction;	// IMP=0x000000000024f98e
- (void)dealloc;	// IMP=0x000000000024f8bc
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x000000000024f7af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
