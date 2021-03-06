//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIRedeemStepViewController.h"

@class NSString, SKUIRedeemITunesPassLockup, SKUIRedeemTextField, UIBarButtonItem, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemInputViewController : SKUIRedeemStepViewController
{
    long long _category;	// 8 = 0x8
    SKUIRedeemTextField *_field;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    NSString *_initialCode;	// 32 = 0x20
    SKUIRedeemITunesPassLockup *_passbookLockup;	// 40 = 0x28
    UIBarButtonItem *_redeemButton;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000f82e8
@property(copy, nonatomic) NSString *initialCode; // @synthesize initialCode=_initialCode;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (void)_toggleActivityIndicatorBarButtonItem:(_Bool)arg1;	// IMP=0x00000000000f8132
- (id)_newTextFieldWithClientContext:(id)arg1;	// IMP=0x00000000000f7e96
- (void)_termsButtonAction:(id)arg1;	// IMP=0x00000000000f7e5a
- (void)_redeemAction:(id)arg1;	// IMP=0x00000000000f788b
- (void)_passbookLockupAction:(id)arg1;	// IMP=0x00000000000f7780
- (void)_cancelAction:(id)arg1;	// IMP=0x00000000000f771a
- (void)_textFieldTextDidChange:(id)arg1;	// IMP=0x00000000000f76a9
- (void)_redeemConfigurationImagesDidLoad:(id)arg1;	// IMP=0x00000000000f7632
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000f761b
- (void)loadView;	// IMP=0x00000000000f64b1
- (void)dealloc;	// IMP=0x00000000000f63db
- (id)initWithRedeemCategory:(long long)arg1;	// IMP=0x00000000000f6377

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

