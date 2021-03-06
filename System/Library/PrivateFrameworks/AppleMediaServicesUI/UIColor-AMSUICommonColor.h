//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIColor.h>

@interface UIColor (AMSUICommonColor)
+ (id)_colorIdentifierDictionary;	// IMP=0x002000000001b9b4
+ (id)ams_dynamicColorFromDictionary:(id)arg1;	// IMP=0x002000000001b7ac
+ (id)ams_namedColorFromDictionary:(id)arg1;	// IMP=0x002000000001b6d6
+ (id)ams_rgbColorFromDictionary:(id)arg1;	// IMP=0x002000000001b45d
+ (id)ams_colorFromDictionary:(id)arg1;	// IMP=0x002000000001b359
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 lightHighContrastColor:(id)arg3 darkHighContrastColor:(id)arg4;	// IMP=0x002000000001b340
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 darkHighContrastColor:(id)arg3;	// IMP=0x002000000001b328
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2 lightHighContrastColor:(id)arg3;	// IMP=0x002000000001b313
+ (id)ams_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2;	// IMP=0x002000000001b2fb
+ (id)ams_colorFromHexString:(id)arg1;	// IMP=0x002000000001afb0
+ (id)ams_shadow;	// IMP=0x002000000001c47f
+ (id)ams_mediaBorder;	// IMP=0x002000000001c3e2
+ (id)ams_defaultLine;	// IMP=0x002000000001c3d0
+ (id)ams_quaternaryText;	// IMP=0x002000000001c3be
+ (id)ams_tertiaryText;	// IMP=0x002000000001c3ac
+ (id)ams_secondaryText;	// IMP=0x002000000001c39a
+ (id)ams_primaryText;	// IMP=0x002000000001c388
+ (id)ams_secondaryGroupedBackground;	// IMP=0x002000000001c376
+ (id)ams_secondaryBackground;	// IMP=0x002000000001c364
+ (id)ams_primaryGroupedBackground;	// IMP=0x002000000001c352
+ (id)ams_primaryBackground;	// IMP=0x002000000001c340
+ (id)ams_placeholderBackground;	// IMP=0x002000000001c32e
+ (id)ams_componentBackground;	// IMP=0x002000000001c31c
+ (id)ams_dim;	// IMP=0x002000000001c27f
+ (id)ams_clear;	// IMP=0x002000000001c26d
+ (id)ams_appTint;	// IMP=0x002000000001c25b
@property(readonly, nonatomic) double ams_luminance;
@property(readonly, nonatomic, getter=ams_isLight) _Bool ams_light;
@property(readonly, nonatomic, getter=ams_isDark) _Bool ams_dark;
@end

