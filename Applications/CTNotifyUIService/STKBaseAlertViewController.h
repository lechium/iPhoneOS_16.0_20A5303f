//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class MISSING_TYPE, NSLayoutConstraint, NSTimer, STKSessionAction, UITextView, UIView;

@interface STKBaseAlertViewController : SBUIRemoteAlertServiceViewController
{
    NSTimer *_timeoutTimer;	// 8 = 0x8
    STKSessionAction *_sessionAction;	// 16 = 0x10
    UIView *_topBar;	// 24 = 0x18
    UIView *_bottomBar;	// 32 = 0x20
    UITextView *_textView;	// 40 = 0x28
    NSLayoutConstraint *_bottomBarBottomConstraint;	// 48 = 0x30
    NSLayoutConstraint *_textViewCenterYConstraint;	// 56 = 0x38
}

+ (_Bool)wantsTextView;	// IMP=0x0020000000006d26
+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0010000000006afe
- (void).cxx_destruct;	// IMP=0x002000000000700e
@property(readonly, nonatomic) STKSessionAction *sessionAction; // @synthesize sessionAction=_sessionAction;
@property(readonly, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
@property(readonly, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
- (void)_displayDidTimeout;	// IMP=0x0010000000006f9d
- (void)_restartTimeoutTimer:(float)arg1;	// IMP=0x0010000000006f2b
- (void)_keyboardWillChangeFrame:(id)arg1;	// IMP=0x0010000000006da6
- (void)setTextViewText:(id)arg1;	// IMP=0x0010000000006d89
- (id)newBottomBar;	// IMP=0x0010000000006d81
- (MISSING_TYPE *)newTopBar;	// IMP=0x0010000000006d79
- (_Bool)validateAction:(id)arg1;	// IMP=0x0010000000006d2e
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006b06
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000006abd
- (void)viewDidLoad;	// IMP=0x0010000000005e8e
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000005e32
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000005e2a
- (void)dismiss;	// IMP=0x0010000000005d13
- (void)clearTimeoutTimer;	// IMP=0x0010000000005cdb
- (void)startTimeoutTimerIfNecessary;	// IMP=0x0010000000005c45
- (void)dealloc;	// IMP=0x0010000000005be7

@end

