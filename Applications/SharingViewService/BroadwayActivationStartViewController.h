//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BroadwayCardView, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface BroadwayActivationStartViewController
{
    NSLayoutConstraint *_cardViewWidth;	// 32 = 0x20
    NSLayoutConstraint *_cardViewHeight;	// 40 = 0x28
    BroadwayCardView *_cardView;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    UIButton *_dismissButton;	// 64 = 0x40
    UIButton *_activateButton;	// 72 = 0x48
    UIView *_progressView;	// 80 = 0x50
    UILabel *_activityLabel;	// 88 = 0x58
    UIActivityIndicatorView *_activityIndicatorView;	// 96 = 0x60
    NSString *_activationCode;	// 104 = 0x68
    _Bool _activationStarted;	// 112 = 0x70
    long long _activationResult;	// 120 = 0x78
    _Bool _animationCompleted;	// 128 = 0x80
    _Bool _completedStarted;	// 129 = 0x81
}

- (void).cxx_destruct;	// IMP=0x002000000018f9ef
- (void)animationDidComplete;	// IMP=0x001000000018f97d
- (void)animationDidStart;	// IMP=0x001000000018f930
- (void)handleTapOutsideView:(id)arg1;	// IMP=0x001000000018f8a8
- (void)handleCompletedIfReady;	// IMP=0x001000000018f763
- (void)handleActivateButton:(id)arg1;	// IMP=0x001000000018f479
- (void)handleDismissButton:(id)arg1;	// IMP=0x001000000018f3f1
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x001000000018f35d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000018f2ac
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000018f0a6
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000018ea7a
- (void)prepareForRetry;	// IMP=0x001000000018ea4f
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000018ea0c
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000018ea04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

