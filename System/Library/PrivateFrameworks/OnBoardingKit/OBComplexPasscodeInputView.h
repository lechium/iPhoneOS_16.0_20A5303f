//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface OBComplexPasscodeInputView
{
    UITextField *_passcodeField;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006927
@property(retain, nonatomic) UITextField *passcodeField; // @synthesize passcodeField=_passcodeField;
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000000000681e
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000000000066c2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000065f4
- (id)passcode;	// IMP=0x00000000000065a4
- (void)setPasscode:(id)arg1;	// IMP=0x0000000000006532
- (id)passcodeDisplayView;	// IMP=0x000000000000651d
- (id)initWithFrame:(struct CGRect)arg1 numericOnly:(_Bool)arg2;	// IMP=0x0000000000005f01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

