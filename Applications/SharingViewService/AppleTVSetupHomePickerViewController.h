//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIActivityIndicatorView, UIButton, UILabel, UIPickerView, UIView;

@interface AppleTVSetupHomePickerViewController
{
    UILabel *_titleLabel;	// 32 = 0x20
    UIPickerView *_homePickerView;	// 40 = 0x28
    UIButton *_chooseButton;	// 48 = 0x30
    _Bool _homeChosen;	// 56 = 0x38
    UIView *_progressView;	// 64 = 0x40
    UIActivityIndicatorView *_progressSpinner;	// 72 = 0x48
    UILabel *_progressLabel;	// 80 = 0x50
    long long _defaultHomeIndex;	// 88 = 0x58
    NSArray *_homes;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000014714c
@property(retain, nonatomic) NSArray *homes; // @synthesize homes=_homes;
@property(nonatomic) long long defaultHomeIndex; // @synthesize defaultHomeIndex=_defaultHomeIndex;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x001000000014703a
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x0010000000146fed
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x0010000000146fe2
- (void)handleDismissButton:(id)arg1;	// IMP=0x0010000000146f5a
- (void)handleChooseButton:(id)arg1;	// IMP=0x0010000000146d1d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000146c99
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000146bef

@end

