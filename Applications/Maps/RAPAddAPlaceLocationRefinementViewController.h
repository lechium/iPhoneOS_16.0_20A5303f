//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSString, UITextField, UIView;

@interface RAPAddAPlaceLocationRefinementViewController
{
    NSString *_textFieldPlaceholder;	// 8 = 0x8
    UITextField *_textField;	// 16 = 0x10
    NSLayoutConstraint *_textFieldContainerViewBottomConstraint;	// 24 = 0x18
    UIView *_textFieldContainerView;	// 32 = 0x20
    CDUnknownBlockType _textFieldEditBlock;	// 40 = 0x28
    NSString *_textFieldTitle;	// 48 = 0x30
    NSString *_textFieldText;	// 56 = 0x38
    struct CGRect _previousNavigationControllerFrame;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000003619c9
@property(nonatomic) struct CGRect previousNavigationControllerFrame; // @synthesize previousNavigationControllerFrame=_previousNavigationControllerFrame;
@property(copy, nonatomic) NSString *textFieldText; // @synthesize textFieldText=_textFieldText;
@property(copy, nonatomic) NSString *textFieldTitle; // @synthesize textFieldTitle=_textFieldTitle;
@property(copy, nonatomic) CDUnknownBlockType textFieldEditBlock; // @synthesize textFieldEditBlock=_textFieldEditBlock;
@property(retain, nonatomic) UIView *textFieldContainerView; // @synthesize textFieldContainerView=_textFieldContainerView;
@property(retain, nonatomic) NSLayoutConstraint *textFieldContainerViewBottomConstraint; // @synthesize textFieldContainerViewBottomConstraint=_textFieldContainerViewBottomConstraint;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSString *textFieldPlaceholder; // @synthesize textFieldPlaceholder=_textFieldPlaceholder;
- (void)adjustTextFieldContainerPositionWithKeyboardFrame:(struct CGRect)arg1;	// IMP=0x00100000003617c0
- (void)keyboardDidChangeFrameNotification:(id)arg1;	// IMP=0x001000000036154e
- (void)keyboardWillChangeFrame:(id)arg1;	// IMP=0x001000000036134a
- (void)mapViewDidStartUserInteraction:(id)arg1;	// IMP=0x00100000003612b7
@property(readonly, copy, nonatomic) NSString *editedValue;
- (void)textDidChange:(id)arg1;	// IMP=0x0010000000361146
- (id)backgroundColor;	// IMP=0x001000000036072c
- (void)dealloc;	// IMP=0x00100000003606b7
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000036064d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000003605e3
- (void)viewDidLoad;	// IMP=0x001000000035fd22
- (id)initWithCamera:(id)arg1 showCrosshair:(_Bool)arg2 textFieldTitle:(id)arg3 textFieldPlaceholder:(id)arg4 textFieldText:(id)arg5 textFieldEditBlock:(CDUnknownBlockType)arg6;	// IMP=0x001000000035fbe5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
