//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@interface UGCInformedConsentViewController : OBWelcomeController
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    long long _presentationContext;	// 16 = 0x10
}

+ (void)presentIfNeededWithPresentingViewController:(id)arg1 presentationContext:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x004000000082c6c1
- (void).cxx_destruct;	// IMP=0x002000000082d1d3
@property(nonatomic) long long presentationContext; // @synthesize presentationContext=_presentationContext;
- (void)_invokeCompletionWithHasGivenConsent:(_Bool)arg1;	// IMP=0x001000000082d075
- (void)_notNowPressed;	// IMP=0x001000000082d03e
- (void)_continuePressed;	// IMP=0x001000000082d004
- (void)_setupPrivacyController;	// IMP=0x001000000082c991
- (void)viewDidLoad;	// IMP=0x001000000082c909
- (void)_captureUserAction:(int)arg1 withValue:(id)arg2;	// IMP=0x001000000082c8e8
- (id)initWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000082c7ff

@end
