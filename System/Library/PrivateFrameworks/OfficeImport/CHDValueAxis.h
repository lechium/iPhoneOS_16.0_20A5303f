//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CHDValueAxis
{
    _Bool mPercentageFormattingFlag;	// 184 = 0xb8
    _Bool mAutoMajorUnitValue;	// 185 = 0xb9
    _Bool mAutoMinorUnitValue;	// 186 = 0xba
    double mMajorUnitValue;	// 192 = 0xc0
    double mMinorUnitValue;	// 200 = 0xc8
    double mScalingLogBase;	// 208 = 0xd0
    int mBuiltInUnit;	// 216 = 0xd8
    _Bool mShowBuiltInUnit;	// 220 = 0xdc
}

- (id)contentFormatWithBuiltInUnit;	// IMP=0x0000000000394ea9
- (void)setBuiltInUnit:(int)arg1;	// IMP=0x0000000000394e99
- (int)builtInUnit;	// IMP=0x0000000000394e89
- (void)setShowBuiltInUnitFlag:(_Bool)arg1;	// IMP=0x0000000000394e79
- (_Bool)isShowBuiltInUnit;	// IMP=0x0000000000394e69
- (void)adjustAxisPositionForHorizontalChart;	// IMP=0x00000000001e18f2
- (_Bool)isAutoMinorUnitValue;	// IMP=0x0000000000394e56
- (_Bool)isAutoMajorUnitValue;	// IMP=0x0000000000394e46
- (void)setPercentageFormattingFlag:(_Bool)arg1;	// IMP=0x0000000000184ff6
- (_Bool)isPercentageFormattingFlag;	// IMP=0x0000000000184bb6
- (void)setScalingLogBase:(double)arg1;	// IMP=0x000000000023bc98
- (double)scalingLogBase;	// IMP=0x0000000000394e32
- (void)setMinorUnitValue:(double)arg1;	// IMP=0x00000000001edd35
- (double)minorUnitValue;	// IMP=0x0000000000394e1f
- (void)setMajorUnitValue:(double)arg1;	// IMP=0x000000000018dd1a
- (double)majorUnitValue;	// IMP=0x0000000000394e0c
- (id)initWithResources:(id)arg1;	// IMP=0x0000000000179e5c

@end
