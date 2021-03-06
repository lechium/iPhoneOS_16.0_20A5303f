//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADPresetPattern
{
    int mType;	// 20 = 0x14
    _Bool mIsTypeOverridden;	// 24 = 0x18
}

+ (id)namedBitmapDataForPresetPatternType:(int)arg1;	// IMP=0x00000000003146fa
+ (id)nameForPresetPatternType:(int)arg1;	// IMP=0x00000000003146dc
+ (id)defaultProperties;	// IMP=0x0000000000153aca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002299a0
- (unsigned long long)hash;	// IMP=0x0000000000229951
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x00000000003145e5
- (_Bool)isAnythingOverridden;	// IMP=0x000000000031459c
- (_Bool)isTypeOverridden;	// IMP=0x0000000000314576
- (void)setType:(int)arg1;	// IMP=0x0000000000153b69
- (int)type;	// IMP=0x0000000000314538
- (id)initWithDefaults;	// IMP=0x0000000000153afa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000153b84

@end

