//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface _UIFlexibleConstantConstraintSet
{
    NSLayoutConstraint *_minConstraint;	// 16 = 0x10
    NSLayoutConstraint *_maxConstraint;	// 24 = 0x18
    NSLayoutConstraint *_equalityConstraint;	// 32 = 0x20
    _Bool _equalityConstraintPrefersMin;	// 40 = 0x28
    double _minConstant;	// 48 = 0x30
    double _maxConstant;	// 56 = 0x38
    double _equalityConstant;	// 64 = 0x40
}

+ (id)constraintSetWithCollapsableConstantPreferredEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2;	// IMP=0x0060000000046c06
+ (id)constraintSetWithRequiredEqualityConstraint:(id)arg1;	// IMP=0x0060000000046bb5
- (void).cxx_destruct;	// IMP=0x000000000004733e
@property(nonatomic) double equalityConstant; // @synthesize equalityConstant=_equalityConstant;
@property(nonatomic) double maxConstant; // @synthesize maxConstant=_maxConstant;
@property(nonatomic) double minConstant; // @synthesize minConstant=_minConstant;
- (id)_otherInequalityConstraint;	// IMP=0x00000000000472da
- (id)_preferredInequalityConstraint;	// IMP=0x00000000000472ac
- (void)_updateInequalityConstants;	// IMP=0x000000000004720e
- (_Bool)_equalityConstraintIsRequired;	// IMP=0x00000000000471e0
- (id)_initWithEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2 prefersMin:(_Bool)arg3;	// IMP=0x0000000000046c61

@end
