//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADPresetShadowEffect
{
    int mPresetShadowType;	// 36 = 0x24
}

- (id)description;	// IMP=0x000000000031d401
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022f0be
- (unsigned long long)hash;	// IMP=0x000000000022eab4
- (id)equivalentOuterShadowEffect;	// IMP=0x000000000031cf84
- (void)setPresetShadowType:(int)arg1;	// IMP=0x000000000021cf2c
- (int)presetShadowType;	// IMP=0x000000000021cf3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031cf07
- (id)init;	// IMP=0x000000000021ce44

@end

