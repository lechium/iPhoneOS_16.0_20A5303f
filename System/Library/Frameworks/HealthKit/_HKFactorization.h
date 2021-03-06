//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _HKFactorization : NSObject
{
    NSMapTable *_factors;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000113516
+ (id)factorizationFromString:(id)arg1 factorGrammar:(id)arg2;	// IMP=0x000000000001887c
+ (id)factorizationWithFactorsAndExponents:(id)arg1;	// IMP=0x000000000001a870
+ (id)factorizationWithFactor:(id)arg1 exponent:(long long)arg2;	// IMP=0x000000000001a859
+ (id)factorization;	// IMP=0x000000000001a9fb
- (void).cxx_destruct;	// IMP=0x000000000001abc6
- (void)_raiseToExponent:(long long)arg1;	// IMP=0x000000000001bf96
- (void)_multiplyByFactorization:(id)arg1;	// IMP=0x000000000001c15e
- (void)_multiplyByFactor:(id)arg1 exponent:(long long)arg2;	// IMP=0x000000000001aa73
- (long long)_exponentForFactor:(id)arg1;	// IMP=0x000000000000ddc0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001136a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011351e
- (id)unitString;	// IMP=0x000000000000e55e
- (long long)exponentForFactor:(id)arg1;	// IMP=0x000000000001ab7e
- (id)anyFactor;	// IMP=0x000000000001ab2a
- (unsigned long long)factorCount;	// IMP=0x000000000001ab14
- (void)_enumerateFactorsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000113353
- (void)enumerateFactorsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000db7e
- (id)factorizationByRaisingToExponent:(long long)arg1;	// IMP=0x000000000001bf37
- (id)reciprocal;	// IMP=0x000000000001bf1e
- (id)factorizationByDividing:(id)arg1;	// IMP=0x000000000001bebc
- (id)factorizationByMultiplying:(id)arg1;	// IMP=0x000000000001c0f8
- (id)description;	// IMP=0x0000000000113341
- (unsigned long long)hash;	// IMP=0x0000000000113237
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003da2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b641
- (id)init;	// IMP=0x000000000001aa0d

@end

