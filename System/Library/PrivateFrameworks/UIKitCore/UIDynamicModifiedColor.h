//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIDynamicColor;

__attribute__((visibility("hidden")))
@interface UIDynamicModifiedColor
{
    UIDynamicColor *_baseColor;	// 24 = 0x18
    double _alphaComponent;	// 32 = 0x20
    long long _contrast;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000008828ce
- (void).cxx_destruct;	// IMP=0x0000000000883070
- (id)description;	// IMP=0x0000000000882f52
- (id)_backgroundColorIgnoringHighContrast;	// IMP=0x0000000000882eda
- (id)_highContrastDynamicColor;	// IMP=0x0000000000882e6f
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x0000000000882dfa
- (id)_resolvedMaterialWithTraitCollection:(id)arg1;	// IMP=0x0000000000882ddd
- (id)_resolvedColorWithTraitCollection:(id)arg1;	// IMP=0x0000000000882add
- (_Bool)_isDynamicTintColor;	// IMP=0x0000000000882ac0
- (unsigned long long)hash;	// IMP=0x0000000000882a57
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008829a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000088299b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008828d6
- (id)initWithBaseColor:(id)arg1 alphaComponent:(double)arg2 contrast:(long long)arg3;	// IMP=0x00000000008827a7

@end
