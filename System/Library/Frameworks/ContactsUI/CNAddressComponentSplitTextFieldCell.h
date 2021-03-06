//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNRepeatingGradientSeparatorView, NSString, UITextField;

__attribute__((visibility("hidden")))
@interface CNAddressComponentSplitTextFieldCell
{
    UITextField *_textFieldLeft;	// 8 = 0x8
    UITextField *_textFieldRight;	// 16 = 0x10
    CNRepeatingGradientSeparatorView *_separator;	// 24 = 0x18
}

+ (id)cellIdentifier;	// IMP=0x001000000005a217
+ (Class)containerViewClass;	// IMP=0x001000000005a206
- (void).cxx_destruct;	// IMP=0x000000000005a1c4
@property(retain, nonatomic) CNRepeatingGradientSeparatorView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UITextField *textFieldRight; // @synthesize textFieldRight=_textFieldRight;
@property(retain, nonatomic) UITextField *textFieldLeft; // @synthesize textFieldLeft=_textFieldLeft;
- (id)textAttributes;	// IMP=0x000000000005a105
- (void)setTextAttributes:(id)arg1;	// IMP=0x000000000005a01a
- (id)textFields;	// IMP=0x0000000000059f5b
- (void)setupTextFields;	// IMP=0x0000000000059d4a
- (id)newSeparatorView;	// IMP=0x0000000000059c7e
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;	// IMP=0x0000000000059ba5
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000059af9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

