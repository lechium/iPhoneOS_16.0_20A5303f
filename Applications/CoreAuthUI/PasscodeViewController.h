//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LAUIPearlGlyphView, NSDate, NSNumber, NSNumberFormatter, NSString, NSTimer, UIViewController;
@protocol PasscodeView;

@interface PasscodeViewController
{
    UIViewController<PasscodeView> *_passcodeView;	// 8 = 0x8
    NSTimer *_updateTimer;	// 16 = 0x10
    NSNumberFormatter *_decimalFormatter;	// 24 = 0x18
    unsigned long long _failures;	// 32 = 0x20
    NSNumber *_failureLimit;	// 40 = 0x28
    NSDate *_blockedUntilDate;	// 48 = 0x30
    _Bool _isLockoutActive;	// 56 = 0x38
    _Bool _isBlocked;	// 57 = 0x39
    _Bool _passcodeEntered;	// 58 = 0x3a
    _Bool _startedTypingPasscode;	// 59 = 0x3b
    LAUIPearlGlyphView *_glyphView;	// 64 = 0x40
    long long _currentInterfaceStyle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000183df
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000018015
- (void)_scheduleTimerIfNecessaryAndUpdateSubtitle;	// IMP=0x0010000000017e00
- (void)_clearTimer;	// IMP=0x0010000000017dc8
- (void)_switchToBackoffScreen:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000017cf3
- (void)_switchToBackoffScreen:(id)arg1;	// IMP=0x0010000000017cdc
- (id)_formattedDecimalStringForNumber:(id)arg1;	// IMP=0x0010000000017bff
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000017b58
- (void)_showBackoffScreenWithMinsUntilUnblocked:(int)arg1;	// IMP=0x00100000000178ad
- (void)_showPasscodeScreen;	// IMP=0x0010000000017748
- (_Bool)_useWhitePasscodeScreen;	// IMP=0x0010000000017673
- (_Bool)_hasTranslucentBackground;	// IMP=0x001000000001757e
- (_Bool)_hasBlurredBackground;	// IMP=0x0010000000017450
- (long long)_backgroundStyle;	// IMP=0x0010000000017401
- (id)_style;	// IMP=0x0010000000017392
- (void)_updateStyle;	// IMP=0x0010000000017272
- (void)viewDidLayoutSubviews;	// IMP=0x00100000000171c2
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000001713a
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000017077
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000016fc7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000016d90
- (void)loadView;	// IMP=0x0010000000016d2e
- (void)passcodeViewCancelButtonPressed:(id)arg1;	// IMP=0x0010000000016d1c
- (void)_processPasscodeEntryResult:(long long)arg1;	// IMP=0x00100000000165ec
- (void)passcodeViewPasscodeEntered:(id)arg1;	// IMP=0x001000000001629d
- (void)passcodeViewPasscodeDidChange:(id)arg1;	// IMP=0x0010000000016242
- (void)_layoutGlyph;	// IMP=0x0010000000016114
- (void)_setupGlyph;	// IMP=0x0010000000015feb
- (void)_setupView;	// IMP=0x0010000000015a59
- (_Bool)isFullScreenController;	// IMP=0x0010000000015a51
- (void)didReceiveAuthenticationData;	// IMP=0x001000000001524c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

