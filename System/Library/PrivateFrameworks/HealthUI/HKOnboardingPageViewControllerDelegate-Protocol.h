//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKDateCache, HKHealthStore, NSMutableDictionary;

@protocol HKOnboardingPageViewControllerDelegate <NSObject>
@property(readonly, nonatomic) _Bool firstTimeOnboarding;
@property(retain, nonatomic) NSMutableDictionary *userInfo;
- (HKDateCache *)dateCache;
- (HKHealthStore *)healthStore;
- (void)stepForward;

@optional
- (void)onboardingCancelled;
@end
