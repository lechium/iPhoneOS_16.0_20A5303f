//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADPresetDash
{
    BOOL mType;	// 17 = 0x11
    unsigned int mIsTypeOverridden:1;	// 18 = 0x12
}

+ (id)defaultProperties;	// IMP=0x006000000001ece3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a31a1
- (unsigned long long)hash;	// IMP=0x000000000010290e
- (id)equivalentCustomDash;	// IMP=0x000000000010cdb7
- (_Bool)isTypeOverridden;	// IMP=0x00000000001043cb
- (void)setType:(BOOL)arg1;	// IMP=0x000000000001ed7f
- (BOOL)type;	// IMP=0x000000000010438c
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x0000000000321520
- (_Bool)isAnythingOverridden;	// IMP=0x00000000003214d7
- (id)initWithDefaults;	// IMP=0x000000000001ed13
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ed9a

@end

