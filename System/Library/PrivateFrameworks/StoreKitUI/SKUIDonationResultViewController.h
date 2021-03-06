//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKUIDonationResultView, SKUIGiftAmount;

__attribute__((visibility("hidden")))
@interface SKUIDonationResultViewController
{
    SKUIGiftAmount *_donationAmount;	// 8 = 0x8
    SKUIDonationResultView *_resultView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000342002
@property(copy, nonatomic) SKUIGiftAmount *donationAmount; // @synthesize donationAmount=_donationAmount;
- (void)_doneButtonAction:(id)arg1;	// IMP=0x0000000000341f7a
- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;	// IMP=0x0000000000341ebc
- (void)loadView;	// IMP=0x0000000000341aeb
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000003419de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

