//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface WHASetupStartViewController
{
    UIActivityIndicatorView *_activityIndicatorView;	// 32 = 0x20
    UIButton *_dismissButton;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UIView *_progressView;	// 56 = 0x38
    UIButton *_startButton;	// 64 = 0x40
    _Bool _started;	// 72 = 0x48
    UILabel *_titleLabel;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000019c0f0
- (void)handleTapOutsideView:(id)arg1;	// IMP=0x001000000019c068
- (void)handleDismissButton:(id)arg1;	// IMP=0x001000000019bfe0
- (void)handleStartButton:(id)arg1;	// IMP=0x001000000019bd09
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x001000000019bc75
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000019bbf1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000019b959

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

