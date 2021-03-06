//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FRAnalyticsController, FRPresubscribeService, NSNumber;

@interface FRUserOnboardingOperation : FCOperation
{
    FCCloudContext *_cloudContext;	// 8 = 0x8
    FRAnalyticsController *_analyticsController;	// 16 = 0x10
    FRPresubscribeService *_presubscribeService;	// 24 = 0x18
    CDUnknownBlockType _userOnboardingCompletionHandler;	// 32 = 0x20
    NSNumber *_onboardingVersion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000006bc85
@property(retain, nonatomic) NSNumber *onboardingVersion; // @synthesize onboardingVersion=_onboardingVersion;
@property(copy, nonatomic) CDUnknownBlockType userOnboardingCompletionHandler; // @synthesize userOnboardingCompletionHandler=_userOnboardingCompletionHandler;
@property(retain, nonatomic) FRPresubscribeService *presubscribeService; // @synthesize presubscribeService=_presubscribeService;
@property(retain, nonatomic) FRAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
- (id)_presubscribe;	// IMP=0x001000000006b83a
- (id)_refreshOnboardingVersion;	// IMP=0x001000000006b5fc
- (id)_refreshAppConfig;	// IMP=0x001000000006b3a7
- (id)_determineUserID;	// IMP=0x001000000006b1d0
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x001000000006b111
- (void)performOperation;	// IMP=0x001000000006adcb
- (_Bool)validateOperation;	// IMP=0x001000000006accb

@end

