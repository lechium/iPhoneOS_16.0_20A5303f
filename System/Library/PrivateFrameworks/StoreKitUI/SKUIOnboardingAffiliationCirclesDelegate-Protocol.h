//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIOnboardingAffiliationCirclesViewController, SKUIOnboardingAffiliationItem;

@protocol SKUIOnboardingAffiliationCirclesDelegate <NSObject>

@optional
- (void)onboardingCircles:(SKUIOnboardingAffiliationCirclesViewController *)arg1 didSelectAffiliationItem:(SKUIOnboardingAffiliationItem *)arg2 atIndex:(long long)arg3;
- (void)onboardingCircles:(SKUIOnboardingAffiliationCirclesViewController *)arg1 didRemoveAffiliationItem:(SKUIOnboardingAffiliationItem *)arg2;
- (void)onboardingCirclesDidChangeAffiliationItems:(SKUIOnboardingAffiliationCirclesViewController *)arg1;
@end

