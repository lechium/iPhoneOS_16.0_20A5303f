//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VSAppInstallationInfoCenter;

__attribute__((visibility("hidden")))
@interface VSSubscriptionPredicateFactory : NSObject
{
    VSAppInstallationInfoCenter *_appInstallationInfoCenter;	// 8 = 0x8
}

+ (id)_subscriptionPredicateTemplateValues;	// IMP=0x00600000000014f7
+ (id)_subscriptionSourcePredicateTemplateValues;	// IMP=0x00600000000013c4
+ (id)_subscriptionSourceKindPredicateTemplateValues;	// IMP=0x00600000000012e0
- (void).cxx_destruct;	// IMP=0x0000000000003b1d
@property(retain, nonatomic) VSAppInstallationInfoCenter *appInstallationInfoCenter; // @synthesize appInstallationInfoCenter=_appInstallationInfoCenter;
- (id)predicateByConvertingSubscriptionKeyPathsInPredicate:(id)arg1 toAttributeKeysInEntity:(id)arg2;	// IMP=0x0000000000003527
- (id)_expressionByConvertingSubscriptionKeyPathInExpression:(id)arg1 toAttributeKeysInEntity:(id)arg2;	// IMP=0x0000000000002e9b
- (id)subscriptionFetchPredicateForTask:(id)arg1 withOptions:(id)arg2;	// IMP=0x0000000000002269
- (id)allowedSubscriptionsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x000000000000216c
- (id)allowedSubscriptionsPredicateForTask:(id)arg1;	// IMP=0x000000000000206f
- (id)allowedSubscriptionSourcesPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x0000000000001f72
- (id)allowedSubscriptionSourceKindsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x0000000000001e01
- (id)_predicateTemplateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x0000000000001d1e
- (id)_predicateTemplateForSourceOfTask:(id)arg1;	// IMP=0x0000000000001bca
- (id)_predicateTemplateForAppPredicate:(id)arg1 withTask:(id)arg2;	// IMP=0x0000000000001a4b
- (id)_topLevelAccessPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x00000000000019b1
- (id)_predicateTemplateForSourceIdentifier:(id)arg1;	// IMP=0x00000000000018e6
- (id)_predicateTemplateForSourceKind:(long long)arg1;	// IMP=0x0000000000001808

@end
