//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface WHASetupProgressViewController
{
    UIImageView *_imageView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UIView *_progressView;	// 48 = 0x30
    UIActivityIndicatorView *_progressSpinner;	// 56 = 0x38
    UILabel *_progressLabel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000019d307
- (void)handleProgressEvent:(unsigned int)arg1;	// IMP=0x001000000019d26f
- (void)handleDismissButton:(id)arg1;	// IMP=0x001000000019d1e7
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000019d163
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000019cfcf

@end

