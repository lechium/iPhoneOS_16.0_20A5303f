//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSSetupMiniFlowController.h>

@class NSString, OBPrivacySplashController;

@interface COSTinkerPrivacySplashController : BPSSetupMiniFlowController
{
    OBPrivacySplashController *_splashController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000de682
@property(retain, nonatomic) OBPrivacySplashController *splashController; // @synthesize splashController=_splashController;
- (void)miniFlowStepComplete:(id)arg1 nextControllerClass:(Class)arg2;	// IMP=0x00100000000de606
- (void)miniFlowStepComplete:(id)arg1;	// IMP=0x00100000000de5ba
- (void)continueButtonPressed:(id)arg1;	// IMP=0x00100000000de56e
- (void)learnMorePressed:(id)arg1;	// IMP=0x00100000000de4bb
- (id)viewController;	// IMP=0x00100000000de4a6
- (id)init;	// IMP=0x00100000000de204

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

