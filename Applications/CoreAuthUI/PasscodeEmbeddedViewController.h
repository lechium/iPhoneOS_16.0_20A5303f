//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UIImpactFeedbackGenerator, UILabel, UIStackView, UITextField, UIView;

@interface PasscodeEmbeddedViewController : UIViewController
{
    UIStackView *_mainContainer;	// 8 = 0x8
    UIView *_passcodeFieldContainer;	// 16 = 0x10
    UIStackView *_passcodeFieldBackground;	// 24 = 0x18
    UILabel *_backoffTitle;	// 32 = 0x20
    UILabel *_backoffSubtitle;	// 40 = 0x28
    UIImpactFeedbackGenerator *_hapticGenerator;	// 48 = 0x30
    _Bool _animating;	// 56 = 0x38
    UITextField *_passcodeField;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000001e9e7
@property(retain, nonatomic) UITextField *passcodeField; // @synthesize passcodeField=_passcodeField;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
- (_Bool);	// IMP=0x001000000001e9a2
- (_Bool)_hasAlphaNumericPasscode;	// IMP=0x001000000001e991
- (unsigned long long)_passcodeLength;	// IMP=0x001000000001e968
- (_Bool)_hasFixedLengthPasscode;	// IMP=0x001000000001e94e
- (void)_submitPasscode:(id)arg1;	// IMP=0x001000000001e931
- (void)_shakePasscodeFieldWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e734
- (void)_selectPasscodeField:(id)arg1;	// IMP=0x001000000001e6bf
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x001000000001e549
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x001000000001e309
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x001000000001e2a8
- (void)setBackoffTimeout:(double)arg1 showBackoffTitle:(_Bool)arg2 passcodeFocused:(_Bool)arg3;	// IMP=0x001000000001ddb6
- (void)setBackoffTimeout:(double)arg1;	// IMP=0x001000000001dd9a
- (_Bool)verifyPasscode:(id)arg1;	// IMP=0x001000000001dd92
- (void)setPasscodeFocused:(_Bool)arg1;	// IMP=0x001000000001dc72
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000001d847
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000001d7d8
- (void)loadView;	// IMP=0x001000000001be87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

