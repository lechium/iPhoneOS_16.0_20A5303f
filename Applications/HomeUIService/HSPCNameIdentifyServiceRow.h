//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIActivityIndicatorView, UIButton;

@interface HSPCNameIdentifyServiceRow
{
    UIButton *_identifyButton;	// 24 = 0x18
    UIActivityIndicatorView *_spinner;	// 32 = 0x20
}

+ (id)_reuseIdentifier;	// IMP=0x00400000000428f8
- (void).cxx_destruct;	// IMP=0x0020000000043d5c
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(readonly, nonatomic) UIButton *identifyButton; // @synthesize identifyButton=_identifyButton;
- (void)identify;	// IMP=0x0010000000043a7c
- (void)updateUIWithService:(id)arg1 suggestedName:(id)arg2;	// IMP=0x0010000000043a10
- (void)updateConstraints;	// IMP=0x0010000000042acc
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000042905

@end
