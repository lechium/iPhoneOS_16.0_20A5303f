//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISwitch;

__attribute__((visibility("hidden")))
@interface _UIPrototypingMenuBoolCell
{
    UISwitch *_valueSwitch;	// 8 = 0x8
}

+ (long long)_layoutAxis;	// IMP=0x0060000001254c46
- (void).cxx_destruct;	// IMP=0x0000000001254dc6
@property(retain, nonatomic) UISwitch *valueSwitch; // @synthesize valueSwitch=_valueSwitch;
- (void)_switchDidChangeValue:(id)arg1;	// IMP=0x0000000001254d18
- (void)_prototypingSettingDidChange;	// IMP=0x0000000001254c4e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000001254b3c

@end
