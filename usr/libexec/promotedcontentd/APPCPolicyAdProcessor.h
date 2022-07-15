//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APPCPolicySettings, NSMutableArray;

@interface APPCPolicyAdProcessor : NSObject
{
    APPCPolicySettings *_policySettings;	// 8 = 0x8
    NSMutableArray *_adPolicies;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001478c
@property(retain, nonatomic) NSMutableArray *adPolicies; // @synthesize adPolicies=_adPolicies;
@property(readonly, nonatomic) APPCPolicySettings *policySettings; // @synthesize policySettings=_policySettings;
- (id)aliasTransformedPolicies:(id)arg1 alias:(id)arg2;	// IMP=0x0010000000013a53
- (id)buildFinalPolicies:(id)arg1 policyValue:(id)arg2 policyType:(long long)arg3 expression:(id)arg4;	// IMP=0x001000000001351a
- (id)cartesianProduct:(id)arg1;	// IMP=0x0010000000012fcf
- (id)flattenPolicy:(id)arg1 policyType:(long long)arg2;	// IMP=0x0010000000012887
- (void)generatePolicyDataObjects:(id)arg1;	// IMP=0x00100000000121de
- (void)processAdPolicyData;	// IMP=0x0010000000010b11
- (_Bool)isValidPolicy:(id)arg1;	// IMP=0x0010000000010803
- (id)init;	// IMP=0x00100000000106e6

@end
